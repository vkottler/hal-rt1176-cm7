/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class LCDIFV2_CTRLDESCL6_5_AB_MODE : uint8_t
{
    _0 /*!< No alpha Blending (The SAFETY_EN bit need set to 1) */,
    _1 = 1 /*!< Blend with global ALPHA */,
    _2 = 2 /*!< Blend with embedded ALPHA */,
    _3 = 3 /*!< Blend with PoterDuff enable */
};
static_assert(sizeof(LCDIFV2_CTRLDESCL6_5_AB_MODE) == 1);

/**
 * Converts LCDIFV2_CTRLDESCL6_5_AB_MODE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(LCDIFV2_CTRLDESCL6_5_AB_MODE instance)
{
    const char *result = "UNKNOWN LCDIFV2_CTRLDESCL6_5_AB_MODE";

    switch (instance)
    {
    case LCDIFV2_CTRLDESCL6_5_AB_MODE::_0:
        result = "_0";
        break;
    case LCDIFV2_CTRLDESCL6_5_AB_MODE::_1:
        result = "_1";
        break;
    case LCDIFV2_CTRLDESCL6_5_AB_MODE::_2:
        result = "_2";
        break;
    case LCDIFV2_CTRLDESCL6_5_AB_MODE::_3:
        result = "_3";
        break;
    }

    return result;
}

/**
 * Converts a C string to LCDIFV2_CTRLDESCL6_5_AB_MODE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, LCDIFV2_CTRLDESCL6_5_AB_MODE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_0", 2)))
    {
        output = LCDIFV2_CTRLDESCL6_5_AB_MODE::_0;
    }
    else if ((result = !strncmp(data, "_1", 2)))
    {
        output = LCDIFV2_CTRLDESCL6_5_AB_MODE::_1;
    }
    else if ((result = !strncmp(data, "_2", 2)))
    {
        output = LCDIFV2_CTRLDESCL6_5_AB_MODE::_2;
    }
    else if ((result = !strncmp(data, "_3", 2)))
    {
        output = LCDIFV2_CTRLDESCL6_5_AB_MODE::_3;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7
