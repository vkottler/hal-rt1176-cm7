/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class SystemControl_CCSIDR_LINESIZE : uint8_t
{
    _0 /*!< The line length of 4 words. */,
    _1 = 1 /*!< The line length of 8 words. */,
    _2 = 2 /*!< The line length of 16 words. */,
    _3 = 3 /*!< The line length of 32 words. */,
    _4 = 4 /*!< The line length of 64 words. */,
    _5 = 5 /*!< The line length of 128 words. */,
    _6 = 6 /*!< The line length of 256 words. */,
    _7 = 7 /*!< The line length of 512 words. */
};
static_assert(sizeof(SystemControl_CCSIDR_LINESIZE) == 1);

/**
 * Converts SystemControl_CCSIDR_LINESIZE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SystemControl_CCSIDR_LINESIZE instance)
{
    const char *result = "UNKNOWN SystemControl_CCSIDR_LINESIZE";

    switch (instance)
    {
    case SystemControl_CCSIDR_LINESIZE::_0:
        result = "_0";
        break;
    case SystemControl_CCSIDR_LINESIZE::_1:
        result = "_1";
        break;
    case SystemControl_CCSIDR_LINESIZE::_2:
        result = "_2";
        break;
    case SystemControl_CCSIDR_LINESIZE::_3:
        result = "_3";
        break;
    case SystemControl_CCSIDR_LINESIZE::_4:
        result = "_4";
        break;
    case SystemControl_CCSIDR_LINESIZE::_5:
        result = "_5";
        break;
    case SystemControl_CCSIDR_LINESIZE::_6:
        result = "_6";
        break;
    case SystemControl_CCSIDR_LINESIZE::_7:
        result = "_7";
        break;
    }

    return result;
}

/**
 * Converts a C string to SystemControl_CCSIDR_LINESIZE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        SystemControl_CCSIDR_LINESIZE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_0", 2)))
    {
        output = SystemControl_CCSIDR_LINESIZE::_0;
    }
    else if ((result = !strncmp(data, "_1", 2)))
    {
        output = SystemControl_CCSIDR_LINESIZE::_1;
    }
    else if ((result = !strncmp(data, "_2", 2)))
    {
        output = SystemControl_CCSIDR_LINESIZE::_2;
    }
    else if ((result = !strncmp(data, "_3", 2)))
    {
        output = SystemControl_CCSIDR_LINESIZE::_3;
    }
    else if ((result = !strncmp(data, "_4", 2)))
    {
        output = SystemControl_CCSIDR_LINESIZE::_4;
    }
    else if ((result = !strncmp(data, "_5", 2)))
    {
        output = SystemControl_CCSIDR_LINESIZE::_5;
    }
    else if ((result = !strncmp(data, "_6", 2)))
    {
        output = SystemControl_CCSIDR_LINESIZE::_6;
    }
    else if ((result = !strncmp(data, "_7", 2)))
    {
        output = SystemControl_CCSIDR_LINESIZE::_7;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7