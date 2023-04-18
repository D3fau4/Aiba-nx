#include "lib.hpp"
#include "nn.hpp"
#include "Hato/Hato.hpp"
#include "GameEngine/il2cpp-api.h"

Hato::logger::SdLogger* s_instance;

HOOK_DEFINE_TRAMPOLINE(nnMainInit) {
    static void Callback() {
        R_ABORT_UNLESS(nn::fs::MountSdCardForDebug("sd"));
        s_instance = new Hato::logger::SdLogger("sd:/ai.log");
        s_instance->Log("Funcion: nnMain hooked!");
        Orig();
    }
};

HOOK_DEFINE_REPLACE(NoAction) {
    static void Callback() {

    }
};

extern "C" void exl_main(void* x0, void* x1) {
    exl::hook::Initialize();

    NoAction::InstallAtSymbol("_ZN2nn2fs12SetAllocatorEPFPvmEPFvS1_mE");

    nnMainInit::InstallAtSymbol("nnMain");
}

extern "C" NORETURN void exl_exception_entry() {
    /* TODO: exception handling */
    EXL_ABORT(0x420);
}