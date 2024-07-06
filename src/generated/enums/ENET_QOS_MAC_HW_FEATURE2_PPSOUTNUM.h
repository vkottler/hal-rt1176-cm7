/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class ENET_QOS_MAC_HW_FEATURE2_PPSOUTNUM : uint8_t
{
    NO_PPSO /*!< No PPS output */,
    bf_1_PPSO = 1 /*!< 1 PPS output */,
    bf_2_PPSO = 2 /*!< 2 PPS output */,
    bf_3_PPSO = 3 /*!< 3 PPS output */,
    bf_4_PPSO = 4 /*!< 4 PPS output */
};
static_assert(sizeof(ENET_QOS_MAC_HW_FEATURE2_PPSOUTNUM) == 1);

/**
 * Converts ENET_QOS_MAC_HW_FEATURE2_PPSOUTNUM to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(ENET_QOS_MAC_HW_FEATURE2_PPSOUTNUM instance)
{
    const char *result = "UNKNOWN ENET_QOS_MAC_HW_FEATURE2_PPSOUTNUM";

    switch (instance)
    {
    case ENET_QOS_MAC_HW_FEATURE2_PPSOUTNUM::NO_PPSO:
        result = "NO_PPSO";
        break;
    case ENET_QOS_MAC_HW_FEATURE2_PPSOUTNUM::bf_1_PPSO:
        result = "bf_1_PPSO";
        break;
    case ENET_QOS_MAC_HW_FEATURE2_PPSOUTNUM::bf_2_PPSO:
        result = "bf_2_PPSO";
        break;
    case ENET_QOS_MAC_HW_FEATURE2_PPSOUTNUM::bf_3_PPSO:
        result = "bf_3_PPSO";
        break;
    case ENET_QOS_MAC_HW_FEATURE2_PPSOUTNUM::bf_4_PPSO:
        result = "bf_4_PPSO";
        break;
    }

    return result;
}

/**
 * Converts a C string to ENET_QOS_MAC_HW_FEATURE2_PPSOUTNUM.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        ENET_QOS_MAC_HW_FEATURE2_PPSOUTNUM &output)
{
    bool result = false;

    if ((result = !strncmp(data, "NO_PPSO", 7)))
    {
        output = ENET_QOS_MAC_HW_FEATURE2_PPSOUTNUM::NO_PPSO;
    }
    else if ((result = !strncmp(data, "bf_1_PPSO", 9)))
    {
        output = ENET_QOS_MAC_HW_FEATURE2_PPSOUTNUM::bf_1_PPSO;
    }
    else if ((result = !strncmp(data, "bf_2_PPSO", 9)))
    {
        output = ENET_QOS_MAC_HW_FEATURE2_PPSOUTNUM::bf_2_PPSO;
    }
    else if ((result = !strncmp(data, "bf_3_PPSO", 9)))
    {
        output = ENET_QOS_MAC_HW_FEATURE2_PPSOUTNUM::bf_3_PPSO;
    }
    else if ((result = !strncmp(data, "bf_4_PPSO", 9)))
    {
        output = ENET_QOS_MAC_HW_FEATURE2_PPSOUTNUM::bf_4_PPSO;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7
