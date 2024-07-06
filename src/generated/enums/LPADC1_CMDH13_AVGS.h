/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class LPADC1_CMDH13_AVGS : uint8_t
{
    _0 /*!< Single conversion. */,
    _1 = 1 /*!< 2 conversions averaged. */,
    _2 = 2 /*!< 4 conversions averaged. */,
    _3 = 3 /*!< 8 conversions averaged. */,
    _4 = 4 /*!< 16 conversions averaged. */,
    _5 = 5 /*!< 32 conversions averaged. */,
    _6 = 6 /*!< 64 conversions averaged. */,
    _7 = 7 /*!< 128 conversions averaged. */
};
static_assert(sizeof(LPADC1_CMDH13_AVGS) == 1);

/**
 * Converts LPADC1_CMDH13_AVGS to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(LPADC1_CMDH13_AVGS instance)
{
    const char *result = "UNKNOWN LPADC1_CMDH13_AVGS";

    switch (instance)
    {
    case LPADC1_CMDH13_AVGS::_0:
        result = "_0";
        break;
    case LPADC1_CMDH13_AVGS::_1:
        result = "_1";
        break;
    case LPADC1_CMDH13_AVGS::_2:
        result = "_2";
        break;
    case LPADC1_CMDH13_AVGS::_3:
        result = "_3";
        break;
    case LPADC1_CMDH13_AVGS::_4:
        result = "_4";
        break;
    case LPADC1_CMDH13_AVGS::_5:
        result = "_5";
        break;
    case LPADC1_CMDH13_AVGS::_6:
        result = "_6";
        break;
    case LPADC1_CMDH13_AVGS::_7:
        result = "_7";
        break;
    }

    return result;
}

/**
 * Converts a C string to LPADC1_CMDH13_AVGS.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, LPADC1_CMDH13_AVGS &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_0", 2)))
    {
        output = LPADC1_CMDH13_AVGS::_0;
    }
    else if ((result = !strncmp(data, "_1", 2)))
    {
        output = LPADC1_CMDH13_AVGS::_1;
    }
    else if ((result = !strncmp(data, "_2", 2)))
    {
        output = LPADC1_CMDH13_AVGS::_2;
    }
    else if ((result = !strncmp(data, "_3", 2)))
    {
        output = LPADC1_CMDH13_AVGS::_3;
    }
    else if ((result = !strncmp(data, "_4", 2)))
    {
        output = LPADC1_CMDH13_AVGS::_4;
    }
    else if ((result = !strncmp(data, "_5", 2)))
    {
        output = LPADC1_CMDH13_AVGS::_5;
    }
    else if ((result = !strncmp(data, "_6", 2)))
    {
        output = LPADC1_CMDH13_AVGS::_6;
    }
    else if ((result = !strncmp(data, "_7", 2)))
    {
        output = LPADC1_CMDH13_AVGS::_7;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7
