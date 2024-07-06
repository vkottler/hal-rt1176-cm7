/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class ADC_ETC_TRIG3_CHAIN_5_4_CSEL5 : uint8_t
{
    _0 /*!< Not a valid selection from the command buffer. Trigger event is
          ignored. */
        ,
    _1 = 1 /*!< ADC CMD1 selected. */,
    _2 = 2 /*!< ADC CMD2 selected. */,
    _3 = 3 /*!< ADC CMD3 selected. */,
    _4 = 4 /*!< ADC CMD4 selected. */,
    _5 = 5 /*!< ADC CMD5 selected. */,
    _6 = 6 /*!< ADC CMD6 selected. */,
    _7 = 7 /*!< ADC CMD7 selected. */,
    _8 = 8 /*!< ADC CMD8 selected. */,
    _9 = 9 /*!< ADC CMD9 selected. */,
    _10 = 10 /*!< ADC CMD10 selected. */,
    _11 = 11 /*!< ADC CMD11 selected. */,
    _12 = 12 /*!< ADC CMD12 selected. */,
    _13 = 13 /*!< ADC CMD13 selected. */,
    _14 = 14 /*!< ADC CMD14 selected. */,
    _15 = 15 /*!< ADC CMD15 selected. */
};
static_assert(sizeof(ADC_ETC_TRIG3_CHAIN_5_4_CSEL5) == 1);

/**
 * Converts ADC_ETC_TRIG3_CHAIN_5_4_CSEL5 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(ADC_ETC_TRIG3_CHAIN_5_4_CSEL5 instance)
{
    const char *result = "UNKNOWN ADC_ETC_TRIG3_CHAIN_5_4_CSEL5";

    switch (instance)
    {
    case ADC_ETC_TRIG3_CHAIN_5_4_CSEL5::_0:
        result = "_0";
        break;
    case ADC_ETC_TRIG3_CHAIN_5_4_CSEL5::_1:
        result = "_1";
        break;
    case ADC_ETC_TRIG3_CHAIN_5_4_CSEL5::_2:
        result = "_2";
        break;
    case ADC_ETC_TRIG3_CHAIN_5_4_CSEL5::_3:
        result = "_3";
        break;
    case ADC_ETC_TRIG3_CHAIN_5_4_CSEL5::_4:
        result = "_4";
        break;
    case ADC_ETC_TRIG3_CHAIN_5_4_CSEL5::_5:
        result = "_5";
        break;
    case ADC_ETC_TRIG3_CHAIN_5_4_CSEL5::_6:
        result = "_6";
        break;
    case ADC_ETC_TRIG3_CHAIN_5_4_CSEL5::_7:
        result = "_7";
        break;
    case ADC_ETC_TRIG3_CHAIN_5_4_CSEL5::_8:
        result = "_8";
        break;
    case ADC_ETC_TRIG3_CHAIN_5_4_CSEL5::_9:
        result = "_9";
        break;
    case ADC_ETC_TRIG3_CHAIN_5_4_CSEL5::_10:
        result = "_10";
        break;
    case ADC_ETC_TRIG3_CHAIN_5_4_CSEL5::_11:
        result = "_11";
        break;
    case ADC_ETC_TRIG3_CHAIN_5_4_CSEL5::_12:
        result = "_12";
        break;
    case ADC_ETC_TRIG3_CHAIN_5_4_CSEL5::_13:
        result = "_13";
        break;
    case ADC_ETC_TRIG3_CHAIN_5_4_CSEL5::_14:
        result = "_14";
        break;
    case ADC_ETC_TRIG3_CHAIN_5_4_CSEL5::_15:
        result = "_15";
        break;
    }

    return result;
}

/**
 * Converts a C string to ADC_ETC_TRIG3_CHAIN_5_4_CSEL5.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        ADC_ETC_TRIG3_CHAIN_5_4_CSEL5 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_0", 2)))
    {
        output = ADC_ETC_TRIG3_CHAIN_5_4_CSEL5::_0;
    }
    else if ((result = !strncmp(data, "_1", 2)))
    {
        output = ADC_ETC_TRIG3_CHAIN_5_4_CSEL5::_1;
    }
    else if ((result = !strncmp(data, "_2", 2)))
    {
        output = ADC_ETC_TRIG3_CHAIN_5_4_CSEL5::_2;
    }
    else if ((result = !strncmp(data, "_3", 2)))
    {
        output = ADC_ETC_TRIG3_CHAIN_5_4_CSEL5::_3;
    }
    else if ((result = !strncmp(data, "_4", 2)))
    {
        output = ADC_ETC_TRIG3_CHAIN_5_4_CSEL5::_4;
    }
    else if ((result = !strncmp(data, "_5", 2)))
    {
        output = ADC_ETC_TRIG3_CHAIN_5_4_CSEL5::_5;
    }
    else if ((result = !strncmp(data, "_6", 2)))
    {
        output = ADC_ETC_TRIG3_CHAIN_5_4_CSEL5::_6;
    }
    else if ((result = !strncmp(data, "_7", 2)))
    {
        output = ADC_ETC_TRIG3_CHAIN_5_4_CSEL5::_7;
    }
    else if ((result = !strncmp(data, "_8", 2)))
    {
        output = ADC_ETC_TRIG3_CHAIN_5_4_CSEL5::_8;
    }
    else if ((result = !strncmp(data, "_9", 2)))
    {
        output = ADC_ETC_TRIG3_CHAIN_5_4_CSEL5::_9;
    }
    else if ((result = !strncmp(data, "_10", 3)))
    {
        output = ADC_ETC_TRIG3_CHAIN_5_4_CSEL5::_10;
    }
    else if ((result = !strncmp(data, "_11", 3)))
    {
        output = ADC_ETC_TRIG3_CHAIN_5_4_CSEL5::_11;
    }
    else if ((result = !strncmp(data, "_12", 3)))
    {
        output = ADC_ETC_TRIG3_CHAIN_5_4_CSEL5::_12;
    }
    else if ((result = !strncmp(data, "_13", 3)))
    {
        output = ADC_ETC_TRIG3_CHAIN_5_4_CSEL5::_13;
    }
    else if ((result = !strncmp(data, "_14", 3)))
    {
        output = ADC_ETC_TRIG3_CHAIN_5_4_CSEL5::_14;
    }
    else if ((result = !strncmp(data, "_15", 3)))
    {
        output = ADC_ETC_TRIG3_CHAIN_5_4_CSEL5::_15;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7
