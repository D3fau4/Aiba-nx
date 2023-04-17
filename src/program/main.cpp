#include "lib.hpp"

HOOK_DEFINE_TRAMPOLINE(rootNodeInit) {

    /* Define the callback for when the function is called. Don't forget to make it static and name it Callback. */
    static void Callback(void* param_1) {

        /* Call the original function, with the argument always being false. */
        Orig(param_1);
}

};

extern "C" void exl_main(void* x0, void* x1) {
    /* Setup hooking enviroment. */
    exl::hook::Initialize();

    //StubCopyright::InstallAtFuncPtr(nn::oe::SetCopyrightVisibility);

    /* Alternative install funcs: */
    /* InstallAtPtr takes an absolute address as a uintptr_t. */
    /* InstallAtOffset takes an offset into the main module. */
    rootNodeInit::InstallAtOffset(0x16a2a60);
}

extern "C" NORETURN void exl_exception_entry() {
    /* TODO: exception handling */
    EXL_ABORT(0x420);
}