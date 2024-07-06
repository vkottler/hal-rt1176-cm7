/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class PXP_PS_CTRL_FORMAT : uint8_t
{
    RGB888_ARGB8888 = 4 /*!< 32-bit pixels (unpacked 24-bit format with/without
                           alpha at high 8bits) */
        ,
    RGB555_ARGB1555 = 12 /*!< 16-bit pixels with/without alpha at high 1bit */,
    RGB444_ARGB4444 =
        13 /*!< 16-bit pixels with/without alpha at high 4 bits */,
    RGB565 = 14 /*!< 16-bit pixels */,
    YUV1P444 = 16 /*!< 32-bit pixels (1-plane XYUV unpacked) */,
    UYVY1P422 =
        18 /*!< 16-bit pixels (1-plane U0,Y0,V0,Y1 interleaved bytes) */,
    VYUY1P422 =
        19 /*!< 16-bit pixels (1-plane V0,Y0,U0,Y1 interleaved bytes) */,
    Y8 = 20 /*!< 8-bit monochrome pixels (1-plane Y luma output) */,
    Y4 = 21 /*!< 4-bit monochrome pixels (1-plane Y luma, 4 bit truncation) */,
    YUV2P422 = 24 /*!< 16-bit pixels (2-plane UV interleaved bytes) */,
    YUV2P420 = 25 /*!< 16-bit pixels (2-plane UV) */,
    YVU2P422 = 26 /*!< 16-bit pixels (2-plane VU interleaved bytes) */,
    YVU2P420 = 27 /*!< 16-bit pixels (2-plane VU) */,
    YUV422 = 30 /*!< 16-bit pixels (3-plane format) */,
    YUV420 = 31 /*!< 16-bit pixels (3-plane format) */,
    RGBA8888 = 36 /*!< 2-bit pixels with alpha at the low 8 bits */,
    RGBA5551 = 44 /*!< 16-bit pixels with alpha at the low 1bits */,
    RGBA4444 = 45 /*!< 16-bit pixels with alpha at the low 4 bits */
};
static_assert(sizeof(PXP_PS_CTRL_FORMAT) == 1);

/**
 * Converts PXP_PS_CTRL_FORMAT to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PXP_PS_CTRL_FORMAT instance)
{
    const char *result = "UNKNOWN PXP_PS_CTRL_FORMAT";

    switch (instance)
    {
    case PXP_PS_CTRL_FORMAT::RGB888_ARGB8888:
        result = "RGB888_ARGB8888";
        break;
    case PXP_PS_CTRL_FORMAT::RGB555_ARGB1555:
        result = "RGB555_ARGB1555";
        break;
    case PXP_PS_CTRL_FORMAT::RGB444_ARGB4444:
        result = "RGB444_ARGB4444";
        break;
    case PXP_PS_CTRL_FORMAT::RGB565:
        result = "RGB565";
        break;
    case PXP_PS_CTRL_FORMAT::YUV1P444:
        result = "YUV1P444";
        break;
    case PXP_PS_CTRL_FORMAT::UYVY1P422:
        result = "UYVY1P422";
        break;
    case PXP_PS_CTRL_FORMAT::VYUY1P422:
        result = "VYUY1P422";
        break;
    case PXP_PS_CTRL_FORMAT::Y8:
        result = "Y8";
        break;
    case PXP_PS_CTRL_FORMAT::Y4:
        result = "Y4";
        break;
    case PXP_PS_CTRL_FORMAT::YUV2P422:
        result = "YUV2P422";
        break;
    case PXP_PS_CTRL_FORMAT::YUV2P420:
        result = "YUV2P420";
        break;
    case PXP_PS_CTRL_FORMAT::YVU2P422:
        result = "YVU2P422";
        break;
    case PXP_PS_CTRL_FORMAT::YVU2P420:
        result = "YVU2P420";
        break;
    case PXP_PS_CTRL_FORMAT::YUV422:
        result = "YUV422";
        break;
    case PXP_PS_CTRL_FORMAT::YUV420:
        result = "YUV420";
        break;
    case PXP_PS_CTRL_FORMAT::RGBA8888:
        result = "RGBA8888";
        break;
    case PXP_PS_CTRL_FORMAT::RGBA5551:
        result = "RGBA5551";
        break;
    case PXP_PS_CTRL_FORMAT::RGBA4444:
        result = "RGBA4444";
        break;
    }

    return result;
}

/**
 * Converts a C string to PXP_PS_CTRL_FORMAT.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, PXP_PS_CTRL_FORMAT &output)
{
    bool result = false;

    if ((result = !strncmp(data, "RGB888_ARGB8888", 15)))
    {
        output = PXP_PS_CTRL_FORMAT::RGB888_ARGB8888;
    }
    else if ((result = !strncmp(data, "RGB555_ARGB1555", 15)))
    {
        output = PXP_PS_CTRL_FORMAT::RGB555_ARGB1555;
    }
    else if ((result = !strncmp(data, "RGB444_ARGB4444", 15)))
    {
        output = PXP_PS_CTRL_FORMAT::RGB444_ARGB4444;
    }
    else if ((result = !strncmp(data, "RGB565", 6)))
    {
        output = PXP_PS_CTRL_FORMAT::RGB565;
    }
    else if ((result = !strncmp(data, "YUV1P444", 8)))
    {
        output = PXP_PS_CTRL_FORMAT::YUV1P444;
    }
    else if ((result = !strncmp(data, "UYVY1P422", 9)))
    {
        output = PXP_PS_CTRL_FORMAT::UYVY1P422;
    }
    else if ((result = !strncmp(data, "VYUY1P422", 9)))
    {
        output = PXP_PS_CTRL_FORMAT::VYUY1P422;
    }
    else if ((result = !strncmp(data, "Y8", 2)))
    {
        output = PXP_PS_CTRL_FORMAT::Y8;
    }
    else if ((result = !strncmp(data, "Y4", 2)))
    {
        output = PXP_PS_CTRL_FORMAT::Y4;
    }
    else if ((result = !strncmp(data, "YUV2P422", 8)))
    {
        output = PXP_PS_CTRL_FORMAT::YUV2P422;
    }
    else if ((result = !strncmp(data, "YUV2P420", 8)))
    {
        output = PXP_PS_CTRL_FORMAT::YUV2P420;
    }
    else if ((result = !strncmp(data, "YVU2P422", 8)))
    {
        output = PXP_PS_CTRL_FORMAT::YVU2P422;
    }
    else if ((result = !strncmp(data, "YVU2P420", 8)))
    {
        output = PXP_PS_CTRL_FORMAT::YVU2P420;
    }
    else if ((result = !strncmp(data, "YUV422", 6)))
    {
        output = PXP_PS_CTRL_FORMAT::YUV422;
    }
    else if ((result = !strncmp(data, "YUV420", 6)))
    {
        output = PXP_PS_CTRL_FORMAT::YUV420;
    }
    else if ((result = !strncmp(data, "RGBA8888", 8)))
    {
        output = PXP_PS_CTRL_FORMAT::RGBA8888;
    }
    else if ((result = !strncmp(data, "RGBA5551", 8)))
    {
        output = PXP_PS_CTRL_FORMAT::RGBA5551;
    }
    else if ((result = !strncmp(data, "RGBA4444", 8)))
    {
        output = PXP_PS_CTRL_FORMAT::RGBA4444;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7
