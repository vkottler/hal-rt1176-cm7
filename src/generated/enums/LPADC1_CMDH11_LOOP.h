/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class LPADC1_CMDH11_LOOP : uint8_t
{
    _0 /*!< Looping not enabled. Command executes 1 time. */,
    _1 = 1 /*!< Loop 1 time. Command executes 2 times. */,
    _2 = 2 /*!< Loop 2 times. Command executes 3 times. */,
    _3 = 3 /*!< Loop corresponding number of times. Command executes LOOP+1
              times. */
        ,
    _4 = 4 /*!< Loop corresponding number of times. Command executes LOOP+1
              times. */
        ,
    _5 = 5 /*!< Loop corresponding number of times. Command executes LOOP+1
              times. */
        ,
    _6 = 6 /*!< Loop corresponding number of times. Command executes LOOP+1
              times. */
        ,
    _7 = 7 /*!< Loop corresponding number of times. Command executes LOOP+1
              times. */
        ,
    _8 = 8 /*!< Loop corresponding number of times. Command executes LOOP+1
              times. */
        ,
    _9 = 9 /*!< Loop corresponding number of times. Command executes LOOP+1
              times. */
        ,
    _15 = 15 /*!< Loop 15 times. Command executes 16 times. */
};
static_assert(sizeof(LPADC1_CMDH11_LOOP) == 1);

/**
 * Converts LPADC1_CMDH11_LOOP to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(LPADC1_CMDH11_LOOP instance)
{
    const char *result = "UNKNOWN LPADC1_CMDH11_LOOP";

    switch (instance)
    {
    case LPADC1_CMDH11_LOOP::_0:
        result = "_0";
        break;
    case LPADC1_CMDH11_LOOP::_1:
        result = "_1";
        break;
    case LPADC1_CMDH11_LOOP::_2:
        result = "_2";
        break;
    case LPADC1_CMDH11_LOOP::_3:
        result = "_3";
        break;
    case LPADC1_CMDH11_LOOP::_4:
        result = "_4";
        break;
    case LPADC1_CMDH11_LOOP::_5:
        result = "_5";
        break;
    case LPADC1_CMDH11_LOOP::_6:
        result = "_6";
        break;
    case LPADC1_CMDH11_LOOP::_7:
        result = "_7";
        break;
    case LPADC1_CMDH11_LOOP::_8:
        result = "_8";
        break;
    case LPADC1_CMDH11_LOOP::_9:
        result = "_9";
        break;
    case LPADC1_CMDH11_LOOP::_15:
        result = "_15";
        break;
    }

    return result;
}

/**
 * Converts a C string to LPADC1_CMDH11_LOOP.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, LPADC1_CMDH11_LOOP &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_0", 2)))
    {
        output = LPADC1_CMDH11_LOOP::_0;
    }
    else if ((result = !strncmp(data, "_1", 2)))
    {
        output = LPADC1_CMDH11_LOOP::_1;
    }
    else if ((result = !strncmp(data, "_2", 2)))
    {
        output = LPADC1_CMDH11_LOOP::_2;
    }
    else if ((result = !strncmp(data, "_3", 2)))
    {
        output = LPADC1_CMDH11_LOOP::_3;
    }
    else if ((result = !strncmp(data, "_4", 2)))
    {
        output = LPADC1_CMDH11_LOOP::_4;
    }
    else if ((result = !strncmp(data, "_5", 2)))
    {
        output = LPADC1_CMDH11_LOOP::_5;
    }
    else if ((result = !strncmp(data, "_6", 2)))
    {
        output = LPADC1_CMDH11_LOOP::_6;
    }
    else if ((result = !strncmp(data, "_7", 2)))
    {
        output = LPADC1_CMDH11_LOOP::_7;
    }
    else if ((result = !strncmp(data, "_8", 2)))
    {
        output = LPADC1_CMDH11_LOOP::_8;
    }
    else if ((result = !strncmp(data, "_9", 2)))
    {
        output = LPADC1_CMDH11_LOOP::_9;
    }
    else if ((result = !strncmp(data, "_15", 3)))
    {
        output = LPADC1_CMDH11_LOOP::_15;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7
