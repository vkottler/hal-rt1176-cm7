/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class MUA_CR_RIEn : uint8_t
{
    disable /*!< Disables Processor A Receive Interrupt n. (default) */,
    enable = 1 /*!< Enables Processor A Receive Interrupt n. */
};
static_assert(sizeof(MUA_CR_RIEn) == 1);

/**
 * Converts MUA_CR_RIEn to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(MUA_CR_RIEn instance)
{
    const char *result = "UNKNOWN MUA_CR_RIEn";

    switch (instance)
    {
    case MUA_CR_RIEn::disable:
        result = "disable";
        break;
    case MUA_CR_RIEn::enable:
        result = "enable";
        break;
    }

    return result;
}

/**
 * Converts a C string to MUA_CR_RIEn.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, MUA_CR_RIEn &output)
{
    bool result = false;

    if ((result = !strncmp(data, "disable", 7)))
    {
        output = MUA_CR_RIEn::disable;
    }
    else if ((result = !strncmp(data, "enable", 6)))
    {
        output = MUA_CR_RIEn::enable;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7
