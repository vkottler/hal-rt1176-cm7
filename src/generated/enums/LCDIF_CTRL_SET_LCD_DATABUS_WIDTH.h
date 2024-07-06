/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class LCDIF_CTRL_SET_LCD_DATABUS_WIDTH : uint8_t
{
    _16_BIT /*!< 16-bit data bus mode. */,
    _8_BIT = 1 /*!< 8-bit data bus mode. */,
    _18_BIT = 2 /*!< 18-bit data bus mode. */,
    _24_BIT = 3 /*!< 24-bit data bus mode. */
};
static_assert(sizeof(LCDIF_CTRL_SET_LCD_DATABUS_WIDTH) == 1);

/**
 * Converts LCDIF_CTRL_SET_LCD_DATABUS_WIDTH to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(LCDIF_CTRL_SET_LCD_DATABUS_WIDTH instance)
{
    const char *result = "UNKNOWN LCDIF_CTRL_SET_LCD_DATABUS_WIDTH";

    switch (instance)
    {
    case LCDIF_CTRL_SET_LCD_DATABUS_WIDTH::_16_BIT:
        result = "_16_BIT";
        break;
    case LCDIF_CTRL_SET_LCD_DATABUS_WIDTH::_8_BIT:
        result = "_8_BIT";
        break;
    case LCDIF_CTRL_SET_LCD_DATABUS_WIDTH::_18_BIT:
        result = "_18_BIT";
        break;
    case LCDIF_CTRL_SET_LCD_DATABUS_WIDTH::_24_BIT:
        result = "_24_BIT";
        break;
    }

    return result;
}

/**
 * Converts a C string to LCDIF_CTRL_SET_LCD_DATABUS_WIDTH.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        LCDIF_CTRL_SET_LCD_DATABUS_WIDTH &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_16_BIT", 7)))
    {
        output = LCDIF_CTRL_SET_LCD_DATABUS_WIDTH::_16_BIT;
    }
    else if ((result = !strncmp(data, "_8_BIT", 6)))
    {
        output = LCDIF_CTRL_SET_LCD_DATABUS_WIDTH::_8_BIT;
    }
    else if ((result = !strncmp(data, "_18_BIT", 7)))
    {
        output = LCDIF_CTRL_SET_LCD_DATABUS_WIDTH::_18_BIT;
    }
    else if ((result = !strncmp(data, "_24_BIT", 7)))
    {
        output = LCDIF_CTRL_SET_LCD_DATABUS_WIDTH::_24_BIT;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7
