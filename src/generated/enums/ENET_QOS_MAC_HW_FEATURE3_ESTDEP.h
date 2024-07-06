/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class ENET_QOS_MAC_HW_FEATURE3_ESTDEP : uint8_t
{
    NODEPTH /*!< No Depth configured */,
    DEPTH64 = 1 /*!< 64 */,
    DEPTH128 = 2 /*!< 128 */,
    DEPTH256 = 3 /*!< 256 */,
    DEPTH512 = 4 /*!< 512 */,
    DEPTH1024 = 5 /*!< 1024 */
};
static_assert(sizeof(ENET_QOS_MAC_HW_FEATURE3_ESTDEP) == 1);

/**
 * Converts ENET_QOS_MAC_HW_FEATURE3_ESTDEP to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(ENET_QOS_MAC_HW_FEATURE3_ESTDEP instance)
{
    const char *result = "UNKNOWN ENET_QOS_MAC_HW_FEATURE3_ESTDEP";

    switch (instance)
    {
    case ENET_QOS_MAC_HW_FEATURE3_ESTDEP::NODEPTH:
        result = "NODEPTH";
        break;
    case ENET_QOS_MAC_HW_FEATURE3_ESTDEP::DEPTH64:
        result = "DEPTH64";
        break;
    case ENET_QOS_MAC_HW_FEATURE3_ESTDEP::DEPTH128:
        result = "DEPTH128";
        break;
    case ENET_QOS_MAC_HW_FEATURE3_ESTDEP::DEPTH256:
        result = "DEPTH256";
        break;
    case ENET_QOS_MAC_HW_FEATURE3_ESTDEP::DEPTH512:
        result = "DEPTH512";
        break;
    case ENET_QOS_MAC_HW_FEATURE3_ESTDEP::DEPTH1024:
        result = "DEPTH1024";
        break;
    }

    return result;
}

/**
 * Converts a C string to ENET_QOS_MAC_HW_FEATURE3_ESTDEP.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        ENET_QOS_MAC_HW_FEATURE3_ESTDEP &output)
{
    bool result = false;

    if ((result = !strncmp(data, "NODEPTH", 7)))
    {
        output = ENET_QOS_MAC_HW_FEATURE3_ESTDEP::NODEPTH;
    }
    else if ((result = !strncmp(data, "DEPTH64", 7)))
    {
        output = ENET_QOS_MAC_HW_FEATURE3_ESTDEP::DEPTH64;
    }
    else if ((result = !strncmp(data, "DEPTH128", 8)))
    {
        output = ENET_QOS_MAC_HW_FEATURE3_ESTDEP::DEPTH128;
    }
    else if ((result = !strncmp(data, "DEPTH256", 8)))
    {
        output = ENET_QOS_MAC_HW_FEATURE3_ESTDEP::DEPTH256;
    }
    else if ((result = !strncmp(data, "DEPTH512", 8)))
    {
        output = ENET_QOS_MAC_HW_FEATURE3_ESTDEP::DEPTH512;
    }
    else if ((result = !strncmp(data, "DEPTH1024", 9)))
    {
        output = ENET_QOS_MAC_HW_FEATURE3_ESTDEP::DEPTH1024;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7
