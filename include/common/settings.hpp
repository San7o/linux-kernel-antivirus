#pragma once
#define MAX_PATH 1024
#define IPv4_LEN 10

#include <cstdint>

namespace AV
{

namespace Enums
{

enum class ScanType
{
    SIGNATURE = 0,
    RULES,
    ALL
};

enum class IpAction
{
    NO_ACTION = 0,
    BLOCK,
    UNBLOCK,
};

} // namespace Enums

struct Settings
{
     Enums::ScanType scanType;
     Enums::IpAction ipAction;
     bool quit;
     bool force_quit;
     bool update;
     bool version;
     bool scan;
     bool multithread;
     char scanFile[MAX_PATH];
     char yaraRulesPath[MAX_PATH];
     char signaturesPath[MAX_PATH];
     uint32_t ip;
};

} // namespace AV
