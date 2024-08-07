/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class DAC_PARAM_FIFOSZ : uint8_t
{
    _0 /*!< FIFO depth is 2 */,
    _1 = 1 /*!< FIFO depth is 4 */,
    _2 = 2 /*!< FIFO depth is 8 */,
    _3 = 3 /*!< FIFO depth is 16 */,
    _4 = 4 /*!< FIFO depth is 32 */,
    _5 = 5 /*!< FIFO depth is 64 */,
    _6 = 6 /*!< FIFO depth is 128 */,
    _7 = 7 /*!< FIFO depth is 256 */
};
static_assert(sizeof(DAC_PARAM_FIFOSZ) == 1);

/**
 * Converts DAC_PARAM_FIFOSZ to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(DAC_PARAM_FIFOSZ instance)
{
    const char *result = "UNKNOWN DAC_PARAM_FIFOSZ";

    switch (instance)
    {
    case DAC_PARAM_FIFOSZ::_0:
        result = "_0";
        break;
    case DAC_PARAM_FIFOSZ::_1:
        result = "_1";
        break;
    case DAC_PARAM_FIFOSZ::_2:
        result = "_2";
        break;
    case DAC_PARAM_FIFOSZ::_3:
        result = "_3";
        break;
    case DAC_PARAM_FIFOSZ::_4:
        result = "_4";
        break;
    case DAC_PARAM_FIFOSZ::_5:
        result = "_5";
        break;
    case DAC_PARAM_FIFOSZ::_6:
        result = "_6";
        break;
    case DAC_PARAM_FIFOSZ::_7:
        result = "_7";
        break;
    }

    return result;
}

/**
 * Converts a C string to DAC_PARAM_FIFOSZ.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, DAC_PARAM_FIFOSZ &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_0", 2)))
    {
        output = DAC_PARAM_FIFOSZ::_0;
    }
    else if ((result = !strncmp(data, "_1", 2)))
    {
        output = DAC_PARAM_FIFOSZ::_1;
    }
    else if ((result = !strncmp(data, "_2", 2)))
    {
        output = DAC_PARAM_FIFOSZ::_2;
    }
    else if ((result = !strncmp(data, "_3", 2)))
    {
        output = DAC_PARAM_FIFOSZ::_3;
    }
    else if ((result = !strncmp(data, "_4", 2)))
    {
        output = DAC_PARAM_FIFOSZ::_4;
    }
    else if ((result = !strncmp(data, "_5", 2)))
    {
        output = DAC_PARAM_FIFOSZ::_5;
    }
    else if ((result = !strncmp(data, "_6", 2)))
    {
        output = DAC_PARAM_FIFOSZ::_6;
    }
    else if ((result = !strncmp(data, "_7", 2)))
    {
        output = DAC_PARAM_FIFOSZ::_7;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7
