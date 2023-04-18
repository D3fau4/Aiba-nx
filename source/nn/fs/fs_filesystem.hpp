#pragma once

#include "fs_types.hpp"

namespace nn::fs
{
    Result GetEntryType(DirectoryEntryType* outValue, const char* path);
}
