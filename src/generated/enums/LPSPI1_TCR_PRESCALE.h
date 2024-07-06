/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class LPSPI1_TCR_PRESCALE : uint8_t
{
    _1 /*!< Divide by 1 */,
    _2 = 1 /*!< Divide by 2 */,
    _4 = 2 /*!< Divide by 4 */,
    _8 = 3 /*!< Divide by 8 */,
    _16 = 4 /*!< Divide by 16 */,
    _32 = 5 /*!< Divide by 32 */,
    _64 = 6 /*!< Divide by 64 */,
    _128 = 7 /*!< Divide by 128 */
};
static_assert(sizeof(LPSPI1_TCR_PRESCALE) == 1);

/**
 * Converts LPSPI1_TCR_PRESCALE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(LPSPI1_TCR_PRESCALE instance)
{
    const char *result = "UNKNOWN LPSPI1_TCR_PRESCALE";

    switch (instance)
    {
    case LPSPI1_TCR_PRESCALE::_1:
        result = "_1";
        break;
    case LPSPI1_TCR_PRESCALE::_2:
        result = "_2";
        break;
    case LPSPI1_TCR_PRESCALE::_4:
        result = "_4";
        break;
    case LPSPI1_TCR_PRESCALE::_8:
        result = "_8";
        break;
    case LPSPI1_TCR_PRESCALE::_16:
        result = "_16";
        break;
    case LPSPI1_TCR_PRESCALE::_32:
        result = "_32";
        break;
    case LPSPI1_TCR_PRESCALE::_64:
        result = "_64";
        break;
    case LPSPI1_TCR_PRESCALE::_128:
        result = "_128";
        break;
    }

    return result;
}

/**
 * Converts a C string to LPSPI1_TCR_PRESCALE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, LPSPI1_TCR_PRESCALE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_1", 2)))
    {
        output = LPSPI1_TCR_PRESCALE::_1;
    }
    else if ((result = !strncmp(data, "_2", 2)))
    {
        output = LPSPI1_TCR_PRESCALE::_2;
    }
    else if ((result = !strncmp(data, "_4", 2)))
    {
        output = LPSPI1_TCR_PRESCALE::_4;
    }
    else if ((result = !strncmp(data, "_8", 2)))
    {
        output = LPSPI1_TCR_PRESCALE::_8;
    }
    else if ((result = !strncmp(data, "_16", 3)))
    {
        output = LPSPI1_TCR_PRESCALE::_16;
    }
    else if ((result = !strncmp(data, "_32", 3)))
    {
        output = LPSPI1_TCR_PRESCALE::_32;
    }
    else if ((result = !strncmp(data, "_64", 3)))
    {
        output = LPSPI1_TCR_PRESCALE::_64;
    }
    else if ((result = !strncmp(data, "_128", 4)))
    {
        output = LPSPI1_TCR_PRESCALE::_128;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7
