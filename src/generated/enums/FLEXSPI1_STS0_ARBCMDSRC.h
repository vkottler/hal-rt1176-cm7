/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class FLEXSPI1_STS0_ARBCMDSRC : uint8_t
{
    _0 /*!< Triggered by AHB read command (triggered by AHB read). */,
    _1 = 1 /*!< Triggered by AHB write command (triggered by AHB Write). */,
    _2 = 2 /*!< Triggered by IP command (triggered by setting register bit
              IPCMD.TRG). */
        ,
    _3 = 3 /*!< Triggered by suspended command (resumed). */
};
static_assert(sizeof(FLEXSPI1_STS0_ARBCMDSRC) == 1);

/**
 * Converts FLEXSPI1_STS0_ARBCMDSRC to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(FLEXSPI1_STS0_ARBCMDSRC instance)
{
    const char *result = "UNKNOWN FLEXSPI1_STS0_ARBCMDSRC";

    switch (instance)
    {
    case FLEXSPI1_STS0_ARBCMDSRC::_0:
        result = "_0";
        break;
    case FLEXSPI1_STS0_ARBCMDSRC::_1:
        result = "_1";
        break;
    case FLEXSPI1_STS0_ARBCMDSRC::_2:
        result = "_2";
        break;
    case FLEXSPI1_STS0_ARBCMDSRC::_3:
        result = "_3";
        break;
    }

    return result;
}

/**
 * Converts a C string to FLEXSPI1_STS0_ARBCMDSRC.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, FLEXSPI1_STS0_ARBCMDSRC &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_0", 2)))
    {
        output = FLEXSPI1_STS0_ARBCMDSRC::_0;
    }
    else if ((result = !strncmp(data, "_1", 2)))
    {
        output = FLEXSPI1_STS0_ARBCMDSRC::_1;
    }
    else if ((result = !strncmp(data, "_2", 2)))
    {
        output = FLEXSPI1_STS0_ARBCMDSRC::_2;
    }
    else if ((result = !strncmp(data, "_3", 2)))
    {
        output = FLEXSPI1_STS0_ARBCMDSRC::_3;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7
