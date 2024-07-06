/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class VIDEO_PLL_CTRL0_POST_DIV_SEL : uint8_t
{
    _1 /*!< Divide by 1 */,
    _2 = 1 /*!< Divide by 2 */,
    _4 = 2 /*!< Divide by 4 */,
    _8 = 3 /*!< Divide by 8 */,
    _16 = 4 /*!< Divide by 16 */,
    _32 = 5 /*!< Divide by 32 */
};
static_assert(sizeof(VIDEO_PLL_CTRL0_POST_DIV_SEL) == 1);

/**
 * Converts VIDEO_PLL_CTRL0_POST_DIV_SEL to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(VIDEO_PLL_CTRL0_POST_DIV_SEL instance)
{
    const char *result = "UNKNOWN VIDEO_PLL_CTRL0_POST_DIV_SEL";

    switch (instance)
    {
    case VIDEO_PLL_CTRL0_POST_DIV_SEL::_1:
        result = "_1";
        break;
    case VIDEO_PLL_CTRL0_POST_DIV_SEL::_2:
        result = "_2";
        break;
    case VIDEO_PLL_CTRL0_POST_DIV_SEL::_4:
        result = "_4";
        break;
    case VIDEO_PLL_CTRL0_POST_DIV_SEL::_8:
        result = "_8";
        break;
    case VIDEO_PLL_CTRL0_POST_DIV_SEL::_16:
        result = "_16";
        break;
    case VIDEO_PLL_CTRL0_POST_DIV_SEL::_32:
        result = "_32";
        break;
    }

    return result;
}

/**
 * Converts a C string to VIDEO_PLL_CTRL0_POST_DIV_SEL.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, VIDEO_PLL_CTRL0_POST_DIV_SEL &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_1", 2)))
    {
        output = VIDEO_PLL_CTRL0_POST_DIV_SEL::_1;
    }
    else if ((result = !strncmp(data, "_2", 2)))
    {
        output = VIDEO_PLL_CTRL0_POST_DIV_SEL::_2;
    }
    else if ((result = !strncmp(data, "_4", 2)))
    {
        output = VIDEO_PLL_CTRL0_POST_DIV_SEL::_4;
    }
    else if ((result = !strncmp(data, "_8", 2)))
    {
        output = VIDEO_PLL_CTRL0_POST_DIV_SEL::_8;
    }
    else if ((result = !strncmp(data, "_16", 3)))
    {
        output = VIDEO_PLL_CTRL0_POST_DIV_SEL::_16;
    }
    else if ((result = !strncmp(data, "_32", 3)))
    {
        output = VIDEO_PLL_CTRL0_POST_DIV_SEL::_32;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7
