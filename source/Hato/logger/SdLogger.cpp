#include "lib.hpp"
#include "nn.hpp"
#include "SdLogger.hpp"
#include <stdarg.h>

namespace Hato::logger {
    nn::fs::FileHandle fileHandle;
    s64 offset;

    void SdLogger::Log(std::string str) { Log(str.data(), str.size()); }

    void SdLogger::Log(const char *data, size_t size) {
        nn::fs::SetFileSize(fileHandle, offset + size);

        nn::fs::WriteFile(fileHandle, offset, data, size,
                          nn::fs::WriteOption::CreateOption(nn::fs::WriteOptionFlag_Flush));

        offset += size;
    }

    SdLogger::SdLogger(std::string path) {
        nn::fs::DirectoryEntryType type;
        Result rc = nn::fs::GetEntryType(&type, path.c_str());

        if (rc == 0x202) { // Path does not exist
            rc = nn::fs::CreateFile(path.c_str(), 0);
        } else if (R_FAILED(rc))
            return;

        if (type == nn::fs::DirectoryEntryType_Directory)
            return;

        rc = nn::fs::OpenFile(&fileHandle, path.c_str(), nn::fs::OpenMode_ReadWrite | nn::fs::OpenMode_Append);
    }

    void SdLogger::LogFormat(const char *format, ...) {
        va_list args;
        va_start(args, format);

        size_t len = vsnprintf(NULL, 0, format, args);
        char *ptr = new char[len + 2];
        memset(ptr, 0, len + 2);
        vsnprintf(ptr, len + 1, format, args);
        ptr[len] = '\n';

        va_end(args);
        Log(ptr, len);
        return;
    }
}