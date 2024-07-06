/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class ENET_QOS_MTL_DBG_STS_BYTEEN : uint8_t
{
    _VAL /*!< Byte 0 valid */,
    _1_VAL = 1 /*!< Byte 0 and Byte 1 are valid */,
    _12_VAL = 2 /*!< Byte 0, Byte 1, and Byte 2 are valid */,
    _123_VAL = 3 /*!< All four bytes are valid */
};
static_assert(sizeof(ENET_QOS_MTL_DBG_STS_BYTEEN) == 1);

/**
 * Converts ENET_QOS_MTL_DBG_STS_BYTEEN to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(ENET_QOS_MTL_DBG_STS_BYTEEN instance)
{
    const char *result = "UNKNOWN ENET_QOS_MTL_DBG_STS_BYTEEN";

    switch (instance)
    {
    case ENET_QOS_MTL_DBG_STS_BYTEEN::_VAL:
        result = "_VAL";
        break;
    case ENET_QOS_MTL_DBG_STS_BYTEEN::_1_VAL:
        result = "_1_VAL";
        break;
    case ENET_QOS_MTL_DBG_STS_BYTEEN::_12_VAL:
        result = "_12_VAL";
        break;
    case ENET_QOS_MTL_DBG_STS_BYTEEN::_123_VAL:
        result = "_123_VAL";
        break;
    }

    return result;
}

/**
 * Converts a C string to ENET_QOS_MTL_DBG_STS_BYTEEN.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, ENET_QOS_MTL_DBG_STS_BYTEEN &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_VAL", 4)))
    {
        output = ENET_QOS_MTL_DBG_STS_BYTEEN::_VAL;
    }
    else if ((result = !strncmp(data, "_1_VAL", 6)))
    {
        output = ENET_QOS_MTL_DBG_STS_BYTEEN::_1_VAL;
    }
    else if ((result = !strncmp(data, "_12_VAL", 7)))
    {
        output = ENET_QOS_MTL_DBG_STS_BYTEEN::_12_VAL;
    }
    else if ((result = !strncmp(data, "_123_VAL", 8)))
    {
        output = ENET_QOS_MTL_DBG_STS_BYTEEN::_123_VAL;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7
