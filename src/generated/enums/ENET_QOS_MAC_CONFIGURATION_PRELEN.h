/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class ENET_QOS_MAC_CONFIGURATION_PRELEN : uint8_t
{
    _7 /*!< 7 bytes of preamble */,
    _5 = 1 /*!< 5 bytes of preamble */,
    _3 = 2 /*!< 3 bytes of preamble */
};
static_assert(sizeof(ENET_QOS_MAC_CONFIGURATION_PRELEN) == 1);

/**
 * Converts ENET_QOS_MAC_CONFIGURATION_PRELEN to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(ENET_QOS_MAC_CONFIGURATION_PRELEN instance)
{
    const char *result = "UNKNOWN ENET_QOS_MAC_CONFIGURATION_PRELEN";

    switch (instance)
    {
    case ENET_QOS_MAC_CONFIGURATION_PRELEN::_7:
        result = "_7";
        break;
    case ENET_QOS_MAC_CONFIGURATION_PRELEN::_5:
        result = "_5";
        break;
    case ENET_QOS_MAC_CONFIGURATION_PRELEN::_3:
        result = "_3";
        break;
    }

    return result;
}

/**
 * Converts a C string to ENET_QOS_MAC_CONFIGURATION_PRELEN.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        ENET_QOS_MAC_CONFIGURATION_PRELEN &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_7", 2)))
    {
        output = ENET_QOS_MAC_CONFIGURATION_PRELEN::_7;
    }
    else if ((result = !strncmp(data, "_5", 2)))
    {
        output = ENET_QOS_MAC_CONFIGURATION_PRELEN::_5;
    }
    else if ((result = !strncmp(data, "_3", 2)))
    {
        output = ENET_QOS_MAC_CONFIGURATION_PRELEN::_3;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7
