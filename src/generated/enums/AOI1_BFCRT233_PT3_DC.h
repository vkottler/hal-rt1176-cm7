/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class AOI1_BFCRT233_PT3_DC : uint8_t
{
    _0 /*!< Force the D input in this product term to a logical zero */,
    _1 = 1 /*!< Pass the D input in this product term */,
    _2 = 2 /*!< Complement the D input in this product term */,
    _3 = 3 /*!< Force the D input in this product term to a logical one */
};
static_assert(sizeof(AOI1_BFCRT233_PT3_DC) == 1);

/**
 * Converts AOI1_BFCRT233_PT3_DC to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(AOI1_BFCRT233_PT3_DC instance)
{
    const char *result = "UNKNOWN AOI1_BFCRT233_PT3_DC";

    switch (instance)
    {
    case AOI1_BFCRT233_PT3_DC::_0:
        result = "_0";
        break;
    case AOI1_BFCRT233_PT3_DC::_1:
        result = "_1";
        break;
    case AOI1_BFCRT233_PT3_DC::_2:
        result = "_2";
        break;
    case AOI1_BFCRT233_PT3_DC::_3:
        result = "_3";
        break;
    }

    return result;
}

/**
 * Converts a C string to AOI1_BFCRT233_PT3_DC.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, AOI1_BFCRT233_PT3_DC &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_0", 2)))
    {
        output = AOI1_BFCRT233_PT3_DC::_0;
    }
    else if ((result = !strncmp(data, "_1", 2)))
    {
        output = AOI1_BFCRT233_PT3_DC::_1;
    }
    else if ((result = !strncmp(data, "_2", 2)))
    {
        output = AOI1_BFCRT233_PT3_DC::_2;
    }
    else if ((result = !strncmp(data, "_3", 2)))
    {
        output = AOI1_BFCRT233_PT3_DC::_3;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7
