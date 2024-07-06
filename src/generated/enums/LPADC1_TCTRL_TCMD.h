/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class LPADC1_TCTRL_TCMD : uint8_t
{
    _0 /*!< Not a valid selection from the command buffer. Trigger event is
          ignored. */
        ,
    _1 = 1 /*!< CMD1 is executed */,
    _2 = 2 /*!< Corresponding CMD is executed */,
    _3 = 3 /*!< Corresponding CMD is executed */,
    _4 = 4 /*!< Corresponding CMD is executed */,
    _5 = 5 /*!< Corresponding CMD is executed */,
    _6 = 6 /*!< Corresponding CMD is executed */,
    _7 = 7 /*!< Corresponding CMD is executed */,
    _8 = 8 /*!< Corresponding CMD is executed */,
    _9 = 9 /*!< Corresponding CMD is executed */,
    _15 = 15 /*!< CMD15 is executed */
};
static_assert(sizeof(LPADC1_TCTRL_TCMD) == 1);

/**
 * Converts LPADC1_TCTRL_TCMD to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(LPADC1_TCTRL_TCMD instance)
{
    const char *result = "UNKNOWN LPADC1_TCTRL_TCMD";

    switch (instance)
    {
    case LPADC1_TCTRL_TCMD::_0:
        result = "_0";
        break;
    case LPADC1_TCTRL_TCMD::_1:
        result = "_1";
        break;
    case LPADC1_TCTRL_TCMD::_2:
        result = "_2";
        break;
    case LPADC1_TCTRL_TCMD::_3:
        result = "_3";
        break;
    case LPADC1_TCTRL_TCMD::_4:
        result = "_4";
        break;
    case LPADC1_TCTRL_TCMD::_5:
        result = "_5";
        break;
    case LPADC1_TCTRL_TCMD::_6:
        result = "_6";
        break;
    case LPADC1_TCTRL_TCMD::_7:
        result = "_7";
        break;
    case LPADC1_TCTRL_TCMD::_8:
        result = "_8";
        break;
    case LPADC1_TCTRL_TCMD::_9:
        result = "_9";
        break;
    case LPADC1_TCTRL_TCMD::_15:
        result = "_15";
        break;
    }

    return result;
}

/**
 * Converts a C string to LPADC1_TCTRL_TCMD.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, LPADC1_TCTRL_TCMD &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_0", 2)))
    {
        output = LPADC1_TCTRL_TCMD::_0;
    }
    else if ((result = !strncmp(data, "_1", 2)))
    {
        output = LPADC1_TCTRL_TCMD::_1;
    }
    else if ((result = !strncmp(data, "_2", 2)))
    {
        output = LPADC1_TCTRL_TCMD::_2;
    }
    else if ((result = !strncmp(data, "_3", 2)))
    {
        output = LPADC1_TCTRL_TCMD::_3;
    }
    else if ((result = !strncmp(data, "_4", 2)))
    {
        output = LPADC1_TCTRL_TCMD::_4;
    }
    else if ((result = !strncmp(data, "_5", 2)))
    {
        output = LPADC1_TCTRL_TCMD::_5;
    }
    else if ((result = !strncmp(data, "_6", 2)))
    {
        output = LPADC1_TCTRL_TCMD::_6;
    }
    else if ((result = !strncmp(data, "_7", 2)))
    {
        output = LPADC1_TCTRL_TCMD::_7;
    }
    else if ((result = !strncmp(data, "_8", 2)))
    {
        output = LPADC1_TCTRL_TCMD::_8;
    }
    else if ((result = !strncmp(data, "_9", 2)))
    {
        output = LPADC1_TCTRL_TCMD::_9;
    }
    else if ((result = !strncmp(data, "_15", 3)))
    {
        output = LPADC1_TCTRL_TCMD::_15;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7
