/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class LPADC1_FCTRL_FWMARK : uint8_t
{
    _0 /*!< Generates STAT[RDY] flag after 1st successful conversion - single
          conversion */
        ,
    _1 = 1 /*!< Generates STAT[RDY] flag after 2nd successful conversion */,
    _2 = 2 /*!< Generates STAT[RDY] flag after 3rd successful conversion */,
    _3 = 3 /*!< Generates STAT[RDY] flag after 4th successful conversion */,
    _4 = 4 /*!< Generates STAT[RDY] flag after 5th successful conversion */,
    _5 = 5 /*!< Generates STAT[RDY] flag after 6th successful conversion */,
    _6 = 6 /*!< Generates STAT[RDY] flag after 7th successful conversion */,
    _7 = 7 /*!< Generates STAT[RDY] flag after 8th successful conversion */,
    _8 = 8 /*!< Generates STAT[RDY] flag after 9th successful conversion */,
    _9 = 9 /*!< Generates STAT[RDY] flag after 10th successful conversion */,
    _10 = 10 /*!< Generates STAT[RDY] flag after 11th successful conversion */,
    _11 = 11 /*!< Generates STAT[RDY] flag after 12th successful conversion */,
    _12 = 12 /*!< Generates STAT[RDY] flag after 13th successful conversion */,
    _13 = 13 /*!< Generates STAT[RDY] flag after 14th successful conversion */,
    _14 = 14 /*!< Generates STAT[RDY] flag after 15th successful conversion */,
    _15 = 15 /*!< Generates STAT[RDY] flag after 16th successful conversion */
};
static_assert(sizeof(LPADC1_FCTRL_FWMARK) == 1);

/**
 * Converts LPADC1_FCTRL_FWMARK to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(LPADC1_FCTRL_FWMARK instance)
{
    const char *result = "UNKNOWN LPADC1_FCTRL_FWMARK";

    switch (instance)
    {
    case LPADC1_FCTRL_FWMARK::_0:
        result = "_0";
        break;
    case LPADC1_FCTRL_FWMARK::_1:
        result = "_1";
        break;
    case LPADC1_FCTRL_FWMARK::_2:
        result = "_2";
        break;
    case LPADC1_FCTRL_FWMARK::_3:
        result = "_3";
        break;
    case LPADC1_FCTRL_FWMARK::_4:
        result = "_4";
        break;
    case LPADC1_FCTRL_FWMARK::_5:
        result = "_5";
        break;
    case LPADC1_FCTRL_FWMARK::_6:
        result = "_6";
        break;
    case LPADC1_FCTRL_FWMARK::_7:
        result = "_7";
        break;
    case LPADC1_FCTRL_FWMARK::_8:
        result = "_8";
        break;
    case LPADC1_FCTRL_FWMARK::_9:
        result = "_9";
        break;
    case LPADC1_FCTRL_FWMARK::_10:
        result = "_10";
        break;
    case LPADC1_FCTRL_FWMARK::_11:
        result = "_11";
        break;
    case LPADC1_FCTRL_FWMARK::_12:
        result = "_12";
        break;
    case LPADC1_FCTRL_FWMARK::_13:
        result = "_13";
        break;
    case LPADC1_FCTRL_FWMARK::_14:
        result = "_14";
        break;
    case LPADC1_FCTRL_FWMARK::_15:
        result = "_15";
        break;
    }

    return result;
}

/**
 * Converts a C string to LPADC1_FCTRL_FWMARK.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, LPADC1_FCTRL_FWMARK &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_0", 2)))
    {
        output = LPADC1_FCTRL_FWMARK::_0;
    }
    else if ((result = !strncmp(data, "_1", 2)))
    {
        output = LPADC1_FCTRL_FWMARK::_1;
    }
    else if ((result = !strncmp(data, "_2", 2)))
    {
        output = LPADC1_FCTRL_FWMARK::_2;
    }
    else if ((result = !strncmp(data, "_3", 2)))
    {
        output = LPADC1_FCTRL_FWMARK::_3;
    }
    else if ((result = !strncmp(data, "_4", 2)))
    {
        output = LPADC1_FCTRL_FWMARK::_4;
    }
    else if ((result = !strncmp(data, "_5", 2)))
    {
        output = LPADC1_FCTRL_FWMARK::_5;
    }
    else if ((result = !strncmp(data, "_6", 2)))
    {
        output = LPADC1_FCTRL_FWMARK::_6;
    }
    else if ((result = !strncmp(data, "_7", 2)))
    {
        output = LPADC1_FCTRL_FWMARK::_7;
    }
    else if ((result = !strncmp(data, "_8", 2)))
    {
        output = LPADC1_FCTRL_FWMARK::_8;
    }
    else if ((result = !strncmp(data, "_9", 2)))
    {
        output = LPADC1_FCTRL_FWMARK::_9;
    }
    else if ((result = !strncmp(data, "_10", 3)))
    {
        output = LPADC1_FCTRL_FWMARK::_10;
    }
    else if ((result = !strncmp(data, "_11", 3)))
    {
        output = LPADC1_FCTRL_FWMARK::_11;
    }
    else if ((result = !strncmp(data, "_12", 3)))
    {
        output = LPADC1_FCTRL_FWMARK::_12;
    }
    else if ((result = !strncmp(data, "_13", 3)))
    {
        output = LPADC1_FCTRL_FWMARK::_13;
    }
    else if ((result = !strncmp(data, "_14", 3)))
    {
        output = LPADC1_FCTRL_FWMARK::_14;
    }
    else if ((result = !strncmp(data, "_15", 3)))
    {
        output = LPADC1_FCTRL_FWMARK::_15;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7