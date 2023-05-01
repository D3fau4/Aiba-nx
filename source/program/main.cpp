#include "lib.hpp"
#include "nn.hpp"
#include "Hato/Hato.hpp"
#include "GameEngine/UnityEngine/SceneManagement/SceneManager.h"
#include "GameEngine/il2cpp-api.h"


Hato::logger::SdLogger* s_instance;

HOOK_DEFINE_TRAMPOLINE(nnMainInit) {
    static void Callback() {
        R_ABORT_UNLESS(nn::fs::MountSdCardForDebug("sd"));
        s_instance = new Hato::logger::SdLogger("sd:/ai.log");
        s_instance->Log("Funcion: nnMain hooked!");
        System::String::Create("aaaaaaaaa");
        Orig();
    }
};

HOOK_DEFINE_REPLACE(NoAction) {
    static void Callback() {

    }
};

HOOK_DEFINE_TRAMPOLINE(onLoadScene) {
    static void Callback(UnityEngine::SceneManagement::SceneManager::Object* __this, System::String::Object __filename) {
        Orig(__this, __filename);
    }
};

extern "C" void exl_main(void* x0, void* x1) {
    exl::hook::Initialize();

    NoAction::InstallAtSymbol("_ZN2nn2fs12SetAllocatorEPFPvmEPFvS1_mE");

    nnMainInit::InstallAtSymbol("nnMain");

    //onLoadScene::InstallAtPtr(0x124E240);
}

extern "C" NORETURN void exl_exception_entry() {
    /* TODO: exception handling */
    EXL_ABORT(0x420);
}