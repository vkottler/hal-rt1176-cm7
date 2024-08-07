/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class ENET_QOS_MTL_TXQ0_OPERATION_MODE_TTC : uint8_t
{
    _32BYTES /*!< 32 */,
    _64BYTES = 1 /*!< 64 */,
    _96BYTES = 2 /*!< 96 */,
    _128BYTES = 3 /*!< 128 */,
    _192BYTES = 4 /*!< 192 */,
    _256BYTES = 5 /*!< 256 */,
    _384BYTES = 6 /*!< 384 */,
    _512BYTES = 7 /*!< 512 */
};
static_assert(sizeof(ENET_QOS_MTL_TXQ0_OPERATION_MODE_TTC) == 1);

/**
 * Converts ENET_QOS_MTL_TXQ0_OPERATION_MODE_TTC to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(ENET_QOS_MTL_TXQ0_OPERATION_MODE_TTC instance)
{
    const char *result = "UNKNOWN ENET_QOS_MTL_TXQ0_OPERATION_MODE_TTC";

    switch (instance)
    {
    case ENET_QOS_MTL_TXQ0_OPERATION_MODE_TTC::_32BYTES:
        result = "_32BYTES";
        break;
    case ENET_QOS_MTL_TXQ0_OPERATION_MODE_TTC::_64BYTES:
        result = "_64BYTES";
        break;
    case ENET_QOS_MTL_TXQ0_OPERATION_MODE_TTC::_96BYTES:
        result = "_96BYTES";
        break;
    case ENET_QOS_MTL_TXQ0_OPERATION_MODE_TTC::_128BYTES:
        result = "_128BYTES";
        break;
    case ENET_QOS_MTL_TXQ0_OPERATION_MODE_TTC::_192BYTES:
        result = "_192BYTES";
        break;
    case ENET_QOS_MTL_TXQ0_OPERATION_MODE_TTC::_256BYTES:
        result = "_256BYTES";
        break;
    case ENET_QOS_MTL_TXQ0_OPERATION_MODE_TTC::_384BYTES:
        result = "_384BYTES";
        break;
    case ENET_QOS_MTL_TXQ0_OPERATION_MODE_TTC::_512BYTES:
        result = "_512BYTES";
        break;
    }

    return result;
}

/**
 * Converts a C string to ENET_QOS_MTL_TXQ0_OPERATION_MODE_TTC.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        ENET_QOS_MTL_TXQ0_OPERATION_MODE_TTC &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_32BYTES", 8)))
    {
        output = ENET_QOS_MTL_TXQ0_OPERATION_MODE_TTC::_32BYTES;
    }
    else if ((result = !strncmp(data, "_64BYTES", 8)))
    {
        output = ENET_QOS_MTL_TXQ0_OPERATION_MODE_TTC::_64BYTES;
    }
    else if ((result = !strncmp(data, "_96BYTES", 8)))
    {
        output = ENET_QOS_MTL_TXQ0_OPERATION_MODE_TTC::_96BYTES;
    }
    else if ((result = !strncmp(data, "_128BYTES", 9)))
    {
        output = ENET_QOS_MTL_TXQ0_OPERATION_MODE_TTC::_128BYTES;
    }
    else if ((result = !strncmp(data, "_192BYTES", 9)))
    {
        output = ENET_QOS_MTL_TXQ0_OPERATION_MODE_TTC::_192BYTES;
    }
    else if ((result = !strncmp(data, "_256BYTES", 9)))
    {
        output = ENET_QOS_MTL_TXQ0_OPERATION_MODE_TTC::_256BYTES;
    }
    else if ((result = !strncmp(data, "_384BYTES", 9)))
    {
        output = ENET_QOS_MTL_TXQ0_OPERATION_MODE_TTC::_384BYTES;
    }
    else if ((result = !strncmp(data, "_512BYTES", 9)))
    {
        output = ENET_QOS_MTL_TXQ0_OPERATION_MODE_TTC::_512BYTES;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7
