/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class PWM1_FCTRL0_FLVL : uint8_t
{
    _0 /*!< A logic 0 on the fault input indicates a fault condition. */,
    _1 = 1 /*!< A logic 1 on the fault input indicates a fault condition. */
};
static_assert(sizeof(PWM1_FCTRL0_FLVL) == 1);

/**
 * Converts PWM1_FCTRL0_FLVL to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PWM1_FCTRL0_FLVL instance)
{
    const char *result = "UNKNOWN PWM1_FCTRL0_FLVL";

    switch (instance)
    {
    case PWM1_FCTRL0_FLVL::_0:
        result = "_0";
        break;
    case PWM1_FCTRL0_FLVL::_1:
        result = "_1";
        break;
    }

    return result;
}

/**
 * Converts a C string to PWM1_FCTRL0_FLVL.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, PWM1_FCTRL0_FLVL &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_0", 2)))
    {
        output = PWM1_FCTRL0_FLVL::_0;
    }
    else if ((result = !strncmp(data, "_1", 2)))
    {
        output = PWM1_FCTRL0_FLVL::_1;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7