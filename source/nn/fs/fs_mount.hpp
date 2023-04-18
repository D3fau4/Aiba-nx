#pragma once

#include "fs_types.hpp"

namespace nn::fs {

    /*
        Mount SD card. Must have explicit permission.
        mount: drive to mount to.
    */
    Result MountSdCardForDebug(char const* mount);
    Result MountRom(const char* name, void* pCacheBuffer, size_t cacheBufferSize);
    void Unmount(const char* name);
};