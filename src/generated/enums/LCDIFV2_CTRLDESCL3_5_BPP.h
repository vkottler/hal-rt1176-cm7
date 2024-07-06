/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class LCDIFV2_CTRLDESCL3_5_BPP : uint8_t
{
    _0 /*!< 1 bpp */,
    _1 = 1 /*!< 2 bpp */,
    _2 = 2 /*!< 4 bpp */,
    _3 = 3 /*!< 8 bpp */,
    _4 = 4 /*!< 16 bpp (RGB565) */,
    _5 = 5 /*!< 16 bpp (ARGB1555) */,
    _6 = 6 /*!< 16 bpp (ARGB4444) */,
    _7 = 7 /*!< YCbCr422 (Only layer 0/1 can support this format) */,
    _8 = 8 /*!< 24 bpp (RGB888) */,
    _9 = 9 /*!< 32 bpp (ARGB8888) */,
    _10 = 10 /*!< 32 bpp (ABGR8888) */
};
static_assert(sizeof(LCDIFV2_CTRLDESCL3_5_BPP) == 1);

/**
 * Converts LCDIFV2_CTRLDESCL3_5_BPP to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(LCDIFV2_CTRLDESCL3_5_BPP instance)
{
    const char *result = "UNKNOWN LCDIFV2_CTRLDESCL3_5_BPP";

    switch (instance)
    {
    case LCDIFV2_CTRLDESCL3_5_BPP::_0:
        result = "_0";
        break;
    case LCDIFV2_CTRLDESCL3_5_BPP::_1:
        result = "_1";
        break;
    case LCDIFV2_CTRLDESCL3_5_BPP::_2:
        result = "_2";
        break;
    case LCDIFV2_CTRLDESCL3_5_BPP::_3:
        result = "_3";
        break;
    case LCDIFV2_CTRLDESCL3_5_BPP::_4:
        result = "_4";
        break;
    case LCDIFV2_CTRLDESCL3_5_BPP::_5:
        result = "_5";
        break;
    case LCDIFV2_CTRLDESCL3_5_BPP::_6:
        result = "_6";
        break;
    case LCDIFV2_CTRLDESCL3_5_BPP::_7:
        result = "_7";
        break;
    case LCDIFV2_CTRLDESCL3_5_BPP::_8:
        result = "_8";
        break;
    case LCDIFV2_CTRLDESCL3_5_BPP::_9:
        result = "_9";
        break;
    case LCDIFV2_CTRLDESCL3_5_BPP::_10:
        result = "_10";
        break;
    }

    return result;
}

/**
 * Converts a C string to LCDIFV2_CTRLDESCL3_5_BPP.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, LCDIFV2_CTRLDESCL3_5_BPP &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_0", 2)))
    {
        output = LCDIFV2_CTRLDESCL3_5_BPP::_0;
    }
    else if ((result = !strncmp(data, "_1", 2)))
    {
        output = LCDIFV2_CTRLDESCL3_5_BPP::_1;
    }
    else if ((result = !strncmp(data, "_2", 2)))
    {
        output = LCDIFV2_CTRLDESCL3_5_BPP::_2;
    }
    else if ((result = !strncmp(data, "_3", 2)))
    {
        output = LCDIFV2_CTRLDESCL3_5_BPP::_3;
    }
    else if ((result = !strncmp(data, "_4", 2)))
    {
        output = LCDIFV2_CTRLDESCL3_5_BPP::_4;
    }
    else if ((result = !strncmp(data, "_5", 2)))
    {
        output = LCDIFV2_CTRLDESCL3_5_BPP::_5;
    }
    else if ((result = !strncmp(data, "_6", 2)))
    {
        output = LCDIFV2_CTRLDESCL3_5_BPP::_6;
    }
    else if ((result = !strncmp(data, "_7", 2)))
    {
        output = LCDIFV2_CTRLDESCL3_5_BPP::_7;
    }
    else if ((result = !strncmp(data, "_8", 2)))
    {
        output = LCDIFV2_CTRLDESCL3_5_BPP::_8;
    }
    else if ((result = !strncmp(data, "_9", 2)))
    {
        output = LCDIFV2_CTRLDESCL3_5_BPP::_9;
    }
    else if ((result = !strncmp(data, "_10", 3)))
    {
        output = LCDIFV2_CTRLDESCL3_5_BPP::_10;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7
