/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class CCM_LPCG70_DOMAIN_LEVEL3 : uint8_t
{
    NO /*!< This clock source is not needed in any mode, and can be turned off
        */
        ,
    R = 1 /*!< This clock source is needed in RUN mode, but not needed in WAIT,
             STOP mode */
        ,
    RW = 2 /*!< This clock source is needed in RUN and WAIT mode, but not
              needed in STOP mode */
        ,
    RWS = 3 /*!< This clock source is needed in RUN, WAIT and STOP mode */,
    ALL = 4 /*!< This clock source is always on in any mode (including SUSPEND)
             */
};
static_assert(sizeof(CCM_LPCG70_DOMAIN_LEVEL3) == 1);

/**
 * Converts CCM_LPCG70_DOMAIN_LEVEL3 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CCM_LPCG70_DOMAIN_LEVEL3 instance)
{
    const char *result = "UNKNOWN CCM_LPCG70_DOMAIN_LEVEL3";

    switch (instance)
    {
    case CCM_LPCG70_DOMAIN_LEVEL3::NO:
        result = "NO";
        break;
    case CCM_LPCG70_DOMAIN_LEVEL3::R:
        result = "R";
        break;
    case CCM_LPCG70_DOMAIN_LEVEL3::RW:
        result = "RW";
        break;
    case CCM_LPCG70_DOMAIN_LEVEL3::RWS:
        result = "RWS";
        break;
    case CCM_LPCG70_DOMAIN_LEVEL3::ALL:
        result = "ALL";
        break;
    }

    return result;
}

/**
 * Converts a C string to CCM_LPCG70_DOMAIN_LEVEL3.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CCM_LPCG70_DOMAIN_LEVEL3 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "NO", 2)))
    {
        output = CCM_LPCG70_DOMAIN_LEVEL3::NO;
    }
    else if ((result = !strncmp(data, "R", 1)))
    {
        output = CCM_LPCG70_DOMAIN_LEVEL3::R;
    }
    else if ((result = !strncmp(data, "RW", 2)))
    {
        output = CCM_LPCG70_DOMAIN_LEVEL3::RW;
    }
    else if ((result = !strncmp(data, "RWS", 3)))
    {
        output = CCM_LPCG70_DOMAIN_LEVEL3::RWS;
    }
    else if ((result = !strncmp(data, "ALL", 3)))
    {
        output = CCM_LPCG70_DOMAIN_LEVEL3::ALL;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7
