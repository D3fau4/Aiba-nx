#include "lib.hpp"
#include "nn.hpp"
#include "fs.hpp"
#include "Hato/logger/SdLogger.hpp"

extern Hato::logger::SdLogger* s_instance;

void SaveFile(std::string path, void *buff, int size) {
    s_instance->LogFormat("[Hato] Saving file: %s", path.c_str());
    nn::fs::FileHandle fileHandle;
    nn::fs::DirectoryEntryType type;
    Result rc = nn::fs::GetEntryType(&type, path.c_str());

    if (rc == 0x202) { // Path does not exist
        rc = nn::fs::CreateFile(path.c_str(), 0);
    } else if (R_FAILED(rc))
        return;

    if (type == nn::fs::DirectoryEntryType_Directory)
        return;

    rc = nn::fs::OpenFile(&fileHandle, path.c_str(), nn::fs::OpenMode_ReadWrite | nn::fs::OpenMode_Append);
    nn::fs::SetFileSize(fileHandle, size);

    nn::fs::WriteFile(fileHandle, 0, buff, size,
                      nn::fs::WriteOption::CreateOption(nn::fs::WriteOptionFlag_Flush));

    nn::fs::CloseFile(fileHandle);
    s_instance->LogFormat("[Hato] Done!");
}