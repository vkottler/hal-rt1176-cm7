/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class CMP1_C2_FXMXCH : uint8_t
{
    _0 /*!< External Reference Input 0 is selected as the fixed reference input
          for the fixed mux port. */
        ,
    _1 = 1 /*!< External Reference Input 1 is selected as the fixed reference
              input for the fixed mux port. */
        ,
    _2 = 2 /*!< External Reference Input 2 is selected as the fixed reference
              input for the fixed mux port. */
        ,
    _3 = 3 /*!< External Reference Input 3 is selected as the fixed reference
              input for the fixed mux port. */
        ,
    _4 = 4 /*!< External Reference Input 4 is selected as the fixed reference
              input for the fixed mux port. */
        ,
    _5 = 5 /*!< External Reference Input 5 is selected as the fixed reference
              input for the fixed mux port. */
        ,
    _7 = 7 /*!< The 8bit DAC is selected as the fixed reference input for the
              fixed mux port. */
};
static_assert(sizeof(CMP1_C2_FXMXCH) == 1);

/**
 * Converts CMP1_C2_FXMXCH to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CMP1_C2_FXMXCH instance)
{
    const char *result = "UNKNOWN CMP1_C2_FXMXCH";

    switch (instance)
    {
    case CMP1_C2_FXMXCH::_0:
        result = "_0";
        break;
    case CMP1_C2_FXMXCH::_1:
        result = "_1";
        break;
    case CMP1_C2_FXMXCH::_2:
        result = "_2";
        break;
    case CMP1_C2_FXMXCH::_3:
        result = "_3";
        break;
    case CMP1_C2_FXMXCH::_4:
        result = "_4";
        break;
    case CMP1_C2_FXMXCH::_5:
        result = "_5";
        break;
    case CMP1_C2_FXMXCH::_7:
        result = "_7";
        break;
    }

    return result;
}

/**
 * Converts a C string to CMP1_C2_FXMXCH.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CMP1_C2_FXMXCH &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_0", 2)))
    {
        output = CMP1_C2_FXMXCH::_0;
    }
    else if ((result = !strncmp(data, "_1", 2)))
    {
        output = CMP1_C2_FXMXCH::_1;
    }
    else if ((result = !strncmp(data, "_2", 2)))
    {
        output = CMP1_C2_FXMXCH::_2;
    }
    else if ((result = !strncmp(data, "_3", 2)))
    {
        output = CMP1_C2_FXMXCH::_3;
    }
    else if ((result = !strncmp(data, "_4", 2)))
    {
        output = CMP1_C2_FXMXCH::_4;
    }
    else if ((result = !strncmp(data, "_5", 2)))
    {
        output = CMP1_C2_FXMXCH::_5;
    }
    else if ((result = !strncmp(data, "_7", 2)))
    {
        output = CMP1_C2_FXMXCH::_7;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7
