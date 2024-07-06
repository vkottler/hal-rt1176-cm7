/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class CCM_LPCG117_DOMAIN_LEVEL : uint8_t
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
static_assert(sizeof(CCM_LPCG117_DOMAIN_LEVEL) == 1);

/**
 * Converts CCM_LPCG117_DOMAIN_LEVEL to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CCM_LPCG117_DOMAIN_LEVEL instance)
{
    const char *result = "UNKNOWN CCM_LPCG117_DOMAIN_LEVEL";

    switch (instance)
    {
    case CCM_LPCG117_DOMAIN_LEVEL::NO:
        result = "NO";
        break;
    case CCM_LPCG117_DOMAIN_LEVEL::R:
        result = "R";
        break;
    case CCM_LPCG117_DOMAIN_LEVEL::RW:
        result = "RW";
        break;
    case CCM_LPCG117_DOMAIN_LEVEL::RWS:
        result = "RWS";
        break;
    case CCM_LPCG117_DOMAIN_LEVEL::ALL:
        result = "ALL";
        break;
    }

    return result;
}

/**
 * Converts a C string to CCM_LPCG117_DOMAIN_LEVEL.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CCM_LPCG117_DOMAIN_LEVEL &output)
{
    bool result = false;

    if ((result = !strncmp(data, "NO", 2)))
    {
        output = CCM_LPCG117_DOMAIN_LEVEL::NO;
    }
    else if ((result = !strncmp(data, "R", 1)))
    {
        output = CCM_LPCG117_DOMAIN_LEVEL::R;
    }
    else if ((result = !strncmp(data, "RW", 2)))
    {
        output = CCM_LPCG117_DOMAIN_LEVEL::RW;
    }
    else if ((result = !strncmp(data, "RWS", 3)))
    {
        output = CCM_LPCG117_DOMAIN_LEVEL::RWS;
    }
    else if ((result = !strncmp(data, "ALL", 3)))
    {
        output = CCM_LPCG117_DOMAIN_LEVEL::ALL;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7
