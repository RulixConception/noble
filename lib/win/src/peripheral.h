#pragma once

using Data = std::vector<uint8_t>;

enum AddressType
{
    PUBLIC,
    RANDOM,
    UNKNOWN,
};

class Peripheral
{
public:
    std::string address = "unknown";
    AddressType addressType = UNKNOWN;
    bool connectable = false;
    std::string name;
    int txPowerLevel = 0;
    Data manufacturerData;
    Data customData;
    int customDataLength = 0;
    Data dataSections;
    std::vector<std::pair<std::string, Data>> serviceData;
    std::vector<std::string> serviceUuids;
};
