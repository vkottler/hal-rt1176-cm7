/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class KEY_MANAGER__PUF_KEYINDEX_KEYIDX : uint8_t
{
    _0 /*!< USE INDEX0 */,
    _1 = 1 /*!< USE INDEX1 */,
    _2 = 2 /*!< USE INDEX2 */,
    _3 = 3 /*!< USE INDEX3 */,
    _4 = 4 /*!< USE INDEX4 */,
    _5 = 5 /*!< USE INDEX5 */,
    _6 = 6 /*!< USE INDEX6 */,
    _7 = 7 /*!< USE INDEX7 */,
    _8 = 8 /*!< USE INDEX8 */,
    _9 = 9 /*!< USE INDEX9 */,
    _10 = 10 /*!< USE INDEX10 */,
    _11 = 11 /*!< USE INDEX11 */,
    _12 = 12 /*!< USE INDEX12 */,
    _13 = 13 /*!< USE INDEX13 */,
    _14 = 14 /*!< USE INDEX14 */,
    _15 = 15 /*!< USE INDEX15 */
};
static_assert(sizeof(KEY_MANAGER__PUF_KEYINDEX_KEYIDX) == 1);

/**
 * Converts KEY_MANAGER__PUF_KEYINDEX_KEYIDX to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(KEY_MANAGER__PUF_KEYINDEX_KEYIDX instance)
{
    const char *result = "UNKNOWN KEY_MANAGER__PUF_KEYINDEX_KEYIDX";

    switch (instance)
    {
    case KEY_MANAGER__PUF_KEYINDEX_KEYIDX::_0:
        result = "_0";
        break;
    case KEY_MANAGER__PUF_KEYINDEX_KEYIDX::_1:
        result = "_1";
        break;
    case KEY_MANAGER__PUF_KEYINDEX_KEYIDX::_2:
        result = "_2";
        break;
    case KEY_MANAGER__PUF_KEYINDEX_KEYIDX::_3:
        result = "_3";
        break;
    case KEY_MANAGER__PUF_KEYINDEX_KEYIDX::_4:
        result = "_4";
        break;
    case KEY_MANAGER__PUF_KEYINDEX_KEYIDX::_5:
        result = "_5";
        break;
    case KEY_MANAGER__PUF_KEYINDEX_KEYIDX::_6:
        result = "_6";
        break;
    case KEY_MANAGER__PUF_KEYINDEX_KEYIDX::_7:
        result = "_7";
        break;
    case KEY_MANAGER__PUF_KEYINDEX_KEYIDX::_8:
        result = "_8";
        break;
    case KEY_MANAGER__PUF_KEYINDEX_KEYIDX::_9:
        result = "_9";
        break;
    case KEY_MANAGER__PUF_KEYINDEX_KEYIDX::_10:
        result = "_10";
        break;
    case KEY_MANAGER__PUF_KEYINDEX_KEYIDX::_11:
        result = "_11";
        break;
    case KEY_MANAGER__PUF_KEYINDEX_KEYIDX::_12:
        result = "_12";
        break;
    case KEY_MANAGER__PUF_KEYINDEX_KEYIDX::_13:
        result = "_13";
        break;
    case KEY_MANAGER__PUF_KEYINDEX_KEYIDX::_14:
        result = "_14";
        break;
    case KEY_MANAGER__PUF_KEYINDEX_KEYIDX::_15:
        result = "_15";
        break;
    }

    return result;
}

/**
 * Converts a C string to KEY_MANAGER__PUF_KEYINDEX_KEYIDX.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        KEY_MANAGER__PUF_KEYINDEX_KEYIDX &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_0", 2)))
    {
        output = KEY_MANAGER__PUF_KEYINDEX_KEYIDX::_0;
    }
    else if ((result = !strncmp(data, "_1", 2)))
    {
        output = KEY_MANAGER__PUF_KEYINDEX_KEYIDX::_1;
    }
    else if ((result = !strncmp(data, "_2", 2)))
    {
        output = KEY_MANAGER__PUF_KEYINDEX_KEYIDX::_2;
    }
    else if ((result = !strncmp(data, "_3", 2)))
    {
        output = KEY_MANAGER__PUF_KEYINDEX_KEYIDX::_3;
    }
    else if ((result = !strncmp(data, "_4", 2)))
    {
        output = KEY_MANAGER__PUF_KEYINDEX_KEYIDX::_4;
    }
    else if ((result = !strncmp(data, "_5", 2)))
    {
        output = KEY_MANAGER__PUF_KEYINDEX_KEYIDX::_5;
    }
    else if ((result = !strncmp(data, "_6", 2)))
    {
        output = KEY_MANAGER__PUF_KEYINDEX_KEYIDX::_6;
    }
    else if ((result = !strncmp(data, "_7", 2)))
    {
        output = KEY_MANAGER__PUF_KEYINDEX_KEYIDX::_7;
    }
    else if ((result = !strncmp(data, "_8", 2)))
    {
        output = KEY_MANAGER__PUF_KEYINDEX_KEYIDX::_8;
    }
    else if ((result = !strncmp(data, "_9", 2)))
    {
        output = KEY_MANAGER__PUF_KEYINDEX_KEYIDX::_9;
    }
    else if ((result = !strncmp(data, "_10", 3)))
    {
        output = KEY_MANAGER__PUF_KEYINDEX_KEYIDX::_10;
    }
    else if ((result = !strncmp(data, "_11", 3)))
    {
        output = KEY_MANAGER__PUF_KEYINDEX_KEYIDX::_11;
    }
    else if ((result = !strncmp(data, "_12", 3)))
    {
        output = KEY_MANAGER__PUF_KEYINDEX_KEYIDX::_12;
    }
    else if ((result = !strncmp(data, "_13", 3)))
    {
        output = KEY_MANAGER__PUF_KEYINDEX_KEYIDX::_13;
    }
    else if ((result = !strncmp(data, "_14", 3)))
    {
        output = KEY_MANAGER__PUF_KEYINDEX_KEYIDX::_14;
    }
    else if ((result = !strncmp(data, "_15", 3)))
    {
        output = KEY_MANAGER__PUF_KEYINDEX_KEYIDX::_15;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7
