/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class FLEXSPI1_HMSTR7CR_MASK : uint16_t
{
    DISABLE /*!< Mask */,
    ENABLE = 1 /*!< Unmask */
};
static_assert(sizeof(FLEXSPI1_HMSTR7CR_MASK) == 2);

/**
 * Converts FLEXSPI1_HMSTR7CR_MASK to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(FLEXSPI1_HMSTR7CR_MASK instance)
{
    const char *result = "UNKNOWN FLEXSPI1_HMSTR7CR_MASK";

    switch (instance)
    {
    case FLEXSPI1_HMSTR7CR_MASK::DISABLE:
        result = "DISABLE";
        break;
    case FLEXSPI1_HMSTR7CR_MASK::ENABLE:
        result = "ENABLE";
        break;
    }

    return result;
}

/**
 * Converts a C string to FLEXSPI1_HMSTR7CR_MASK.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, FLEXSPI1_HMSTR7CR_MASK &output)
{
    bool result = false;

    if ((result = !strncmp(data, "DISABLE", 7)))
    {
        output = FLEXSPI1_HMSTR7CR_MASK::DISABLE;
    }
    else if ((result = !strncmp(data, "ENABLE", 6)))
    {
        output = FLEXSPI1_HMSTR7CR_MASK::ENABLE;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7
