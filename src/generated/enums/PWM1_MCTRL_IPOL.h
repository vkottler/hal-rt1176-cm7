/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class PWM1_MCTRL_IPOL : uint8_t
{
    _23 /*!< PWM23 is used to generate complementary PWM pair in the
           corresponding submodule. */
        ,
    _45 = 1 /*!< PWM45 is used to generate complementary PWM pair in the
               corresponding submodule. */
};
static_assert(sizeof(PWM1_MCTRL_IPOL) == 1);

/**
 * Converts PWM1_MCTRL_IPOL to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PWM1_MCTRL_IPOL instance)
{
    const char *result = "UNKNOWN PWM1_MCTRL_IPOL";

    switch (instance)
    {
    case PWM1_MCTRL_IPOL::_23:
        result = "_23";
        break;
    case PWM1_MCTRL_IPOL::_45:
        result = "_45";
        break;
    }

    return result;
}

/**
 * Converts a C string to PWM1_MCTRL_IPOL.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, PWM1_MCTRL_IPOL &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_23", 3)))
    {
        output = PWM1_MCTRL_IPOL::_23;
    }
    else if ((result = !strncmp(data, "_45", 3)))
    {
        output = PWM1_MCTRL_IPOL::_45;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7