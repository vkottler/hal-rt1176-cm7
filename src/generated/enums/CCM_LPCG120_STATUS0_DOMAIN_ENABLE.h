/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class CCM_LPCG120_STATUS0_DOMAIN_ENABLE : uint8_t
{
    NO /*!< No domain request */,
    ZERO = 1 /*!< Request from Domain0 */,
    TWO = 2 /*!< Request from Domain1 */,
    THREE = 3 /*!< Request from Domain0 and Domain1 */,
    FOUR = 4 /*!< Request from Domain2 */,
    FIVE = 5 /*!< Request from Domain0 and Domain2 */,
    SIX = 6 /*!< Request from Domain1 and Domain2 */,
    SEVEN = 7 /*!< Request from Domain0, Domain1 and Domain 2 */,
    EIGHT = 8 /*!< Request from Domain3 */,
    NINE = 9 /*!< Request from Domain0 and Domain3 */,
    TEN = 10 /*!< Request from Domain1 and Domain3 */,
    ELV = 11 /*!< Request from Domain2 and Domain3 */,
    TW = 12 /*!< Request from Domain0, Domain 1, and Domain3 */,
    TH = 13 /*!< Request from Domain0, Domain 2, and Domain3 */,
    FR = 14 /*!< Request from Domain1, Domain 2, and Domain3 */,
    all = 15 /*!< Request from all domains */
};
static_assert(sizeof(CCM_LPCG120_STATUS0_DOMAIN_ENABLE) == 1);

/**
 * Converts CCM_LPCG120_STATUS0_DOMAIN_ENABLE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CCM_LPCG120_STATUS0_DOMAIN_ENABLE instance)
{
    const char *result = "UNKNOWN CCM_LPCG120_STATUS0_DOMAIN_ENABLE";

    switch (instance)
    {
    case CCM_LPCG120_STATUS0_DOMAIN_ENABLE::NO:
        result = "NO";
        break;
    case CCM_LPCG120_STATUS0_DOMAIN_ENABLE::ZERO:
        result = "ZERO";
        break;
    case CCM_LPCG120_STATUS0_DOMAIN_ENABLE::TWO:
        result = "TWO";
        break;
    case CCM_LPCG120_STATUS0_DOMAIN_ENABLE::THREE:
        result = "THREE";
        break;
    case CCM_LPCG120_STATUS0_DOMAIN_ENABLE::FOUR:
        result = "FOUR";
        break;
    case CCM_LPCG120_STATUS0_DOMAIN_ENABLE::FIVE:
        result = "FIVE";
        break;
    case CCM_LPCG120_STATUS0_DOMAIN_ENABLE::SIX:
        result = "SIX";
        break;
    case CCM_LPCG120_STATUS0_DOMAIN_ENABLE::SEVEN:
        result = "SEVEN";
        break;
    case CCM_LPCG120_STATUS0_DOMAIN_ENABLE::EIGHT:
        result = "EIGHT";
        break;
    case CCM_LPCG120_STATUS0_DOMAIN_ENABLE::NINE:
        result = "NINE";
        break;
    case CCM_LPCG120_STATUS0_DOMAIN_ENABLE::TEN:
        result = "TEN";
        break;
    case CCM_LPCG120_STATUS0_DOMAIN_ENABLE::ELV:
        result = "ELV";
        break;
    case CCM_LPCG120_STATUS0_DOMAIN_ENABLE::TW:
        result = "TW";
        break;
    case CCM_LPCG120_STATUS0_DOMAIN_ENABLE::TH:
        result = "TH";
        break;
    case CCM_LPCG120_STATUS0_DOMAIN_ENABLE::FR:
        result = "FR";
        break;
    case CCM_LPCG120_STATUS0_DOMAIN_ENABLE::all:
        result = "all";
        break;
    }

    return result;
}

/**
 * Converts a C string to CCM_LPCG120_STATUS0_DOMAIN_ENABLE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        CCM_LPCG120_STATUS0_DOMAIN_ENABLE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "NO", 2)))
    {
        output = CCM_LPCG120_STATUS0_DOMAIN_ENABLE::NO;
    }
    else if ((result = !strncmp(data, "ZERO", 4)))
    {
        output = CCM_LPCG120_STATUS0_DOMAIN_ENABLE::ZERO;
    }
    else if ((result = !strncmp(data, "TWO", 3)))
    {
        output = CCM_LPCG120_STATUS0_DOMAIN_ENABLE::TWO;
    }
    else if ((result = !strncmp(data, "THREE", 5)))
    {
        output = CCM_LPCG120_STATUS0_DOMAIN_ENABLE::THREE;
    }
    else if ((result = !strncmp(data, "FOUR", 4)))
    {
        output = CCM_LPCG120_STATUS0_DOMAIN_ENABLE::FOUR;
    }
    else if ((result = !strncmp(data, "FIVE", 4)))
    {
        output = CCM_LPCG120_STATUS0_DOMAIN_ENABLE::FIVE;
    }
    else if ((result = !strncmp(data, "SIX", 3)))
    {
        output = CCM_LPCG120_STATUS0_DOMAIN_ENABLE::SIX;
    }
    else if ((result = !strncmp(data, "SEVEN", 5)))
    {
        output = CCM_LPCG120_STATUS0_DOMAIN_ENABLE::SEVEN;
    }
    else if ((result = !strncmp(data, "EIGHT", 5)))
    {
        output = CCM_LPCG120_STATUS0_DOMAIN_ENABLE::EIGHT;
    }
    else if ((result = !strncmp(data, "NINE", 4)))
    {
        output = CCM_LPCG120_STATUS0_DOMAIN_ENABLE::NINE;
    }
    else if ((result = !strncmp(data, "TEN", 3)))
    {
        output = CCM_LPCG120_STATUS0_DOMAIN_ENABLE::TEN;
    }
    else if ((result = !strncmp(data, "ELV", 3)))
    {
        output = CCM_LPCG120_STATUS0_DOMAIN_ENABLE::ELV;
    }
    else if ((result = !strncmp(data, "TW", 2)))
    {
        output = CCM_LPCG120_STATUS0_DOMAIN_ENABLE::TW;
    }
    else if ((result = !strncmp(data, "TH", 2)))
    {
        output = CCM_LPCG120_STATUS0_DOMAIN_ENABLE::TH;
    }
    else if ((result = !strncmp(data, "FR", 2)))
    {
        output = CCM_LPCG120_STATUS0_DOMAIN_ENABLE::FR;
    }
    else if ((result = !strncmp(data, "all", 3)))
    {
        output = CCM_LPCG120_STATUS0_DOMAIN_ENABLE::all;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7
