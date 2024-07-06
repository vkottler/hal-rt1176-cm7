/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class ENET_QOS_MAC_HW_FEATURE2_TXQCNT : uint8_t
{
    _1TXQ /*!< 1 MTL Tx Queue */,
    _2TXQ = 1 /*!< 2 MTL Tx Queues */,
    _3TXQ = 2 /*!< 3 MTL Tx Queues */,
    _4TXQ = 3 /*!< 4 MTL Tx Queues */,
    _5TXQ = 4 /*!< 5 MTL Tx Queues */
};
static_assert(sizeof(ENET_QOS_MAC_HW_FEATURE2_TXQCNT) == 1);

/**
 * Converts ENET_QOS_MAC_HW_FEATURE2_TXQCNT to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(ENET_QOS_MAC_HW_FEATURE2_TXQCNT instance)
{
    const char *result = "UNKNOWN ENET_QOS_MAC_HW_FEATURE2_TXQCNT";

    switch (instance)
    {
    case ENET_QOS_MAC_HW_FEATURE2_TXQCNT::_1TXQ:
        result = "_1TXQ";
        break;
    case ENET_QOS_MAC_HW_FEATURE2_TXQCNT::_2TXQ:
        result = "_2TXQ";
        break;
    case ENET_QOS_MAC_HW_FEATURE2_TXQCNT::_3TXQ:
        result = "_3TXQ";
        break;
    case ENET_QOS_MAC_HW_FEATURE2_TXQCNT::_4TXQ:
        result = "_4TXQ";
        break;
    case ENET_QOS_MAC_HW_FEATURE2_TXQCNT::_5TXQ:
        result = "_5TXQ";
        break;
    }

    return result;
}

/**
 * Converts a C string to ENET_QOS_MAC_HW_FEATURE2_TXQCNT.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        ENET_QOS_MAC_HW_FEATURE2_TXQCNT &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_1TXQ", 5)))
    {
        output = ENET_QOS_MAC_HW_FEATURE2_TXQCNT::_1TXQ;
    }
    else if ((result = !strncmp(data, "_2TXQ", 5)))
    {
        output = ENET_QOS_MAC_HW_FEATURE2_TXQCNT::_2TXQ;
    }
    else if ((result = !strncmp(data, "_3TXQ", 5)))
    {
        output = ENET_QOS_MAC_HW_FEATURE2_TXQCNT::_3TXQ;
    }
    else if ((result = !strncmp(data, "_4TXQ", 5)))
    {
        output = ENET_QOS_MAC_HW_FEATURE2_TXQCNT::_4TXQ;
    }
    else if ((result = !strncmp(data, "_5TXQ", 5)))
    {
        output = ENET_QOS_MAC_HW_FEATURE2_TXQCNT::_5TXQ;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7
