#pragma once

#include <string>

namespace Hato::logger {
    class SdLogger {
    public:
        SdLogger(std::string);

        void Log(std::string str);

        void Log(const char *data, size_t size);

        void LogFormat(const char *format, ...);
    };
};