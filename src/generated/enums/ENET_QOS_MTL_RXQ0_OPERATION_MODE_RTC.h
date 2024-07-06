/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class ENET_QOS_MTL_RXQ0_OPERATION_MODE_RTC : uint8_t
{
    _64BYTE /*!< 64 */,
    _32BYTE = 1 /*!< 32 */,
    _96BYTE = 2 /*!< 96 */,
    _128BYTE = 3 /*!< 128 */
};
static_assert(sizeof(ENET_QOS_MTL_RXQ0_OPERATION_MODE_RTC) == 1);

/**
 * Converts ENET_QOS_MTL_RXQ0_OPERATION_MODE_RTC to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(ENET_QOS_MTL_RXQ0_OPERATION_MODE_RTC instance)
{
    const char *result = "UNKNOWN ENET_QOS_MTL_RXQ0_OPERATION_MODE_RTC";

    switch (instance)
    {
    case ENET_QOS_MTL_RXQ0_OPERATION_MODE_RTC::_64BYTE:
        result = "_64BYTE";
        break;
    case ENET_QOS_MTL_RXQ0_OPERATION_MODE_RTC::_32BYTE:
        result = "_32BYTE";
        break;
    case ENET_QOS_MTL_RXQ0_OPERATION_MODE_RTC::_96BYTE:
        result = "_96BYTE";
        break;
    case ENET_QOS_MTL_RXQ0_OPERATION_MODE_RTC::_128BYTE:
        result = "_128BYTE";
        break;
    }

    return result;
}

/**
 * Converts a C string to ENET_QOS_MTL_RXQ0_OPERATION_MODE_RTC.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        ENET_QOS_MTL_RXQ0_OPERATION_MODE_RTC &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_64BYTE", 7)))
    {
        output = ENET_QOS_MTL_RXQ0_OPERATION_MODE_RTC::_64BYTE;
    }
    else if ((result = !strncmp(data, "_32BYTE", 7)))
    {
        output = ENET_QOS_MTL_RXQ0_OPERATION_MODE_RTC::_32BYTE;
    }
    else if ((result = !strncmp(data, "_96BYTE", 7)))
    {
        output = ENET_QOS_MTL_RXQ0_OPERATION_MODE_RTC::_96BYTE;
    }
    else if ((result = !strncmp(data, "_128BYTE", 8)))
    {
        output = ENET_QOS_MTL_RXQ0_OPERATION_MODE_RTC::_128BYTE;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7
