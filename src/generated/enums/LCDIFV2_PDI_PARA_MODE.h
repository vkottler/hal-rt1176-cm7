/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class LCDIFV2_PDI_PARA_MODE : uint8_t
{
    _0 /*!< 32 bpp (ARGB8888) */,
    _1 = 1 /*!< 24 bpp (RGB888) */,
    _2 = 2 /*!< 24 bpp (RGB666) */,
    _3 = 3 /*!< 16 bpp (RGB565) */,
    _4 = 4 /*!< 16 bpp (RGB444) */,
    _5 = 5 /*!< 16 bpp (RGB555) */,
    _6 = 6 /*!< 16 bpp (YCbCr422) */
};
static_assert(sizeof(LCDIFV2_PDI_PARA_MODE) == 1);

/**
 * Converts LCDIFV2_PDI_PARA_MODE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(LCDIFV2_PDI_PARA_MODE instance)
{
    const char *result = "UNKNOWN LCDIFV2_PDI_PARA_MODE";

    switch (instance)
    {
    case LCDIFV2_PDI_PARA_MODE::_0:
        result = "_0";
        break;
    case LCDIFV2_PDI_PARA_MODE::_1:
        result = "_1";
        break;
    case LCDIFV2_PDI_PARA_MODE::_2:
        result = "_2";
        break;
    case LCDIFV2_PDI_PARA_MODE::_3:
        result = "_3";
        break;
    case LCDIFV2_PDI_PARA_MODE::_4:
        result = "_4";
        break;
    case LCDIFV2_PDI_PARA_MODE::_5:
        result = "_5";
        break;
    case LCDIFV2_PDI_PARA_MODE::_6:
        result = "_6";
        break;
    }

    return result;
}

/**
 * Converts a C string to LCDIFV2_PDI_PARA_MODE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, LCDIFV2_PDI_PARA_MODE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_0", 2)))
    {
        output = LCDIFV2_PDI_PARA_MODE::_0;
    }
    else if ((result = !strncmp(data, "_1", 2)))
    {
        output = LCDIFV2_PDI_PARA_MODE::_1;
    }
    else if ((result = !strncmp(data, "_2", 2)))
    {
        output = LCDIFV2_PDI_PARA_MODE::_2;
    }
    else if ((result = !strncmp(data, "_3", 2)))
    {
        output = LCDIFV2_PDI_PARA_MODE::_3;
    }
    else if ((result = !strncmp(data, "_4", 2)))
    {
        output = LCDIFV2_PDI_PARA_MODE::_4;
    }
    else if ((result = !strncmp(data, "_5", 2)))
    {
        output = LCDIFV2_PDI_PARA_MODE::_5;
    }
    else if ((result = !strncmp(data, "_6", 2)))
    {
        output = LCDIFV2_PDI_PARA_MODE::_6;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7