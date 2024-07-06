/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class CSI_CR2_BTS : uint8_t
{
    _0 /*!< GR */,
    _1 = 1 /*!< RG */,
    _2 = 2 /*!< BG */,
    _3 = 3 /*!< GB */
};
static_assert(sizeof(CSI_CR2_BTS) == 1);

/**
 * Converts CSI_CR2_BTS to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CSI_CR2_BTS instance)
{
    const char *result = "UNKNOWN CSI_CR2_BTS";

    switch (instance)
    {
    case CSI_CR2_BTS::_0:
        result = "_0";
        break;
    case CSI_CR2_BTS::_1:
        result = "_1";
        break;
    case CSI_CR2_BTS::_2:
        result = "_2";
        break;
    case CSI_CR2_BTS::_3:
        result = "_3";
        break;
    }

    return result;
}

/**
 * Converts a C string to CSI_CR2_BTS.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CSI_CR2_BTS &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_0", 2)))
    {
        output = CSI_CR2_BTS::_0;
    }
    else if ((result = !strncmp(data, "_1", 2)))
    {
        output = CSI_CR2_BTS::_1;
    }
    else if ((result = !strncmp(data, "_2", 2)))
    {
        output = CSI_CR2_BTS::_2;
    }
    else if ((result = !strncmp(data, "_3", 2)))
    {
        output = CSI_CR2_BTS::_3;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7
