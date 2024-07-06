/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class ADC_ETC_CTRL_TRIG_ENABLE : uint8_t
{
    _0 /*!< disable all 8 external XBAR triggers. */,
    _1 = 1 /*!< enable external XBAR trigger0. */,
    _2 = 2 /*!< enable external XBAR trigger1. */,
    _3 = 3 /*!< enable external XBAR trigger0 and trigger1. */,
    _255 = 255 /*!< enable all 8 external XBAR triggers. */
};
static_assert(sizeof(ADC_ETC_CTRL_TRIG_ENABLE) == 1);

/**
 * Converts ADC_ETC_CTRL_TRIG_ENABLE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(ADC_ETC_CTRL_TRIG_ENABLE instance)
{
    const char *result = "UNKNOWN ADC_ETC_CTRL_TRIG_ENABLE";

    switch (instance)
    {
    case ADC_ETC_CTRL_TRIG_ENABLE::_0:
        result = "_0";
        break;
    case ADC_ETC_CTRL_TRIG_ENABLE::_1:
        result = "_1";
        break;
    case ADC_ETC_CTRL_TRIG_ENABLE::_2:
        result = "_2";
        break;
    case ADC_ETC_CTRL_TRIG_ENABLE::_3:
        result = "_3";
        break;
    case ADC_ETC_CTRL_TRIG_ENABLE::_255:
        result = "_255";
        break;
    }

    return result;
}

/**
 * Converts a C string to ADC_ETC_CTRL_TRIG_ENABLE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, ADC_ETC_CTRL_TRIG_ENABLE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_0", 2)))
    {
        output = ADC_ETC_CTRL_TRIG_ENABLE::_0;
    }
    else if ((result = !strncmp(data, "_1", 2)))
    {
        output = ADC_ETC_CTRL_TRIG_ENABLE::_1;
    }
    else if ((result = !strncmp(data, "_2", 2)))
    {
        output = ADC_ETC_CTRL_TRIG_ENABLE::_2;
    }
    else if ((result = !strncmp(data, "_3", 2)))
    {
        output = ADC_ETC_CTRL_TRIG_ENABLE::_3;
    }
    else if ((result = !strncmp(data, "_255", 4)))
    {
        output = ADC_ETC_CTRL_TRIG_ENABLE::_255;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7
