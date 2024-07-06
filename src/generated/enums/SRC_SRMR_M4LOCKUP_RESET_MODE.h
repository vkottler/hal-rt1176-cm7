/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class SRC_SRMR_M4LOCKUP_RESET_MODE : uint8_t
{
    _0 /*!< reset system */,
    _3 = 3 /*!< do not reset anything */
};
static_assert(sizeof(SRC_SRMR_M4LOCKUP_RESET_MODE) == 1);

/**
 * Converts SRC_SRMR_M4LOCKUP_RESET_MODE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SRC_SRMR_M4LOCKUP_RESET_MODE instance)
{
    const char *result = "UNKNOWN SRC_SRMR_M4LOCKUP_RESET_MODE";

    switch (instance)
    {
    case SRC_SRMR_M4LOCKUP_RESET_MODE::_0:
        result = "_0";
        break;
    case SRC_SRMR_M4LOCKUP_RESET_MODE::_3:
        result = "_3";
        break;
    }

    return result;
}

/**
 * Converts a C string to SRC_SRMR_M4LOCKUP_RESET_MODE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SRC_SRMR_M4LOCKUP_RESET_MODE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_0", 2)))
    {
        output = SRC_SRMR_M4LOCKUP_RESET_MODE::_0;
    }
    else if ((result = !strncmp(data, "_3", 2)))
    {
        output = SRC_SRMR_M4LOCKUP_RESET_MODE::_3;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7
