/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class ADC_ETC_TRIG6_CHAIN_5_4_IE4 : uint8_t
{
    _0 /*!< Generate interrupt on Done0 when segment 4 finish. */,
    _1 = 1 /*!< Generate interrupt on Done1 when segment 4 finish. */,
    _2 = 2 /*!< Generate interrupt on Done2 when segment 4 finish. */,
    _3 = 3 /*!< Generate interrupt on Done3 when segment 4 finish. */
};
static_assert(sizeof(ADC_ETC_TRIG6_CHAIN_5_4_IE4) == 1);

/**
 * Converts ADC_ETC_TRIG6_CHAIN_5_4_IE4 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(ADC_ETC_TRIG6_CHAIN_5_4_IE4 instance)
{
    const char *result = "UNKNOWN ADC_ETC_TRIG6_CHAIN_5_4_IE4";

    switch (instance)
    {
    case ADC_ETC_TRIG6_CHAIN_5_4_IE4::_0:
        result = "_0";
        break;
    case ADC_ETC_TRIG6_CHAIN_5_4_IE4::_1:
        result = "_1";
        break;
    case ADC_ETC_TRIG6_CHAIN_5_4_IE4::_2:
        result = "_2";
        break;
    case ADC_ETC_TRIG6_CHAIN_5_4_IE4::_3:
        result = "_3";
        break;
    }

    return result;
}

/**
 * Converts a C string to ADC_ETC_TRIG6_CHAIN_5_4_IE4.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, ADC_ETC_TRIG6_CHAIN_5_4_IE4 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_0", 2)))
    {
        output = ADC_ETC_TRIG6_CHAIN_5_4_IE4::_0;
    }
    else if ((result = !strncmp(data, "_1", 2)))
    {
        output = ADC_ETC_TRIG6_CHAIN_5_4_IE4::_1;
    }
    else if ((result = !strncmp(data, "_2", 2)))
    {
        output = ADC_ETC_TRIG6_CHAIN_5_4_IE4::_2;
    }
    else if ((result = !strncmp(data, "_3", 2)))
    {
        output = ADC_ETC_TRIG6_CHAIN_5_4_IE4::_3;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7
