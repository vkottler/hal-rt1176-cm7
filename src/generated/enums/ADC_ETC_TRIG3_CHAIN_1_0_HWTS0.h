/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class ADC_ETC_TRIG3_CHAIN_1_0_HWTS0 : uint8_t
{
    _0 /*!< no trigger selected */,
    _1 = 1 /*!< ADC TRIG0 selected */,
    _2 = 2 /*!< ADC TRIG1 selected */,
    _4 = 4 /*!< ADC TRIG2 selected */,
    _8 = 8 /*!< ADC TRIG3 selected */,
    _16 = 16 /*!< ADC TRIG4 selected */,
    _32 = 32 /*!< ADC TRIG5 selected */,
    _64 = 64 /*!< ADC TRIG6 selected */,
    _128 = 128 /*!< ADC TRIG7 selected */
};
static_assert(sizeof(ADC_ETC_TRIG3_CHAIN_1_0_HWTS0) == 1);

/**
 * Converts ADC_ETC_TRIG3_CHAIN_1_0_HWTS0 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(ADC_ETC_TRIG3_CHAIN_1_0_HWTS0 instance)
{
    const char *result = "UNKNOWN ADC_ETC_TRIG3_CHAIN_1_0_HWTS0";

    switch (instance)
    {
    case ADC_ETC_TRIG3_CHAIN_1_0_HWTS0::_0:
        result = "_0";
        break;
    case ADC_ETC_TRIG3_CHAIN_1_0_HWTS0::_1:
        result = "_1";
        break;
    case ADC_ETC_TRIG3_CHAIN_1_0_HWTS0::_2:
        result = "_2";
        break;
    case ADC_ETC_TRIG3_CHAIN_1_0_HWTS0::_4:
        result = "_4";
        break;
    case ADC_ETC_TRIG3_CHAIN_1_0_HWTS0::_8:
        result = "_8";
        break;
    case ADC_ETC_TRIG3_CHAIN_1_0_HWTS0::_16:
        result = "_16";
        break;
    case ADC_ETC_TRIG3_CHAIN_1_0_HWTS0::_32:
        result = "_32";
        break;
    case ADC_ETC_TRIG3_CHAIN_1_0_HWTS0::_64:
        result = "_64";
        break;
    case ADC_ETC_TRIG3_CHAIN_1_0_HWTS0::_128:
        result = "_128";
        break;
    }

    return result;
}

/**
 * Converts a C string to ADC_ETC_TRIG3_CHAIN_1_0_HWTS0.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        ADC_ETC_TRIG3_CHAIN_1_0_HWTS0 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_0", 2)))
    {
        output = ADC_ETC_TRIG3_CHAIN_1_0_HWTS0::_0;
    }
    else if ((result = !strncmp(data, "_1", 2)))
    {
        output = ADC_ETC_TRIG3_CHAIN_1_0_HWTS0::_1;
    }
    else if ((result = !strncmp(data, "_2", 2)))
    {
        output = ADC_ETC_TRIG3_CHAIN_1_0_HWTS0::_2;
    }
    else if ((result = !strncmp(data, "_4", 2)))
    {
        output = ADC_ETC_TRIG3_CHAIN_1_0_HWTS0::_4;
    }
    else if ((result = !strncmp(data, "_8", 2)))
    {
        output = ADC_ETC_TRIG3_CHAIN_1_0_HWTS0::_8;
    }
    else if ((result = !strncmp(data, "_16", 3)))
    {
        output = ADC_ETC_TRIG3_CHAIN_1_0_HWTS0::_16;
    }
    else if ((result = !strncmp(data, "_32", 3)))
    {
        output = ADC_ETC_TRIG3_CHAIN_1_0_HWTS0::_32;
    }
    else if ((result = !strncmp(data, "_64", 3)))
    {
        output = ADC_ETC_TRIG3_CHAIN_1_0_HWTS0::_64;
    }
    else if ((result = !strncmp(data, "_128", 4)))
    {
        output = ADC_ETC_TRIG3_CHAIN_1_0_HWTS0::_128;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7
