/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class PWM1_SMINTEN_CMPIE : uint8_t
{
    DISABLED /*!< The corresponding STS[CMPF] bit will not cause an interrupt
                request. */
        ,
    ENABLED = 1 /*!< The corresponding STS[CMPF] bit will cause an interrupt
                   request. */
};
static_assert(sizeof(PWM1_SMINTEN_CMPIE) == 1);

/**
 * Converts PWM1_SMINTEN_CMPIE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PWM1_SMINTEN_CMPIE instance)
{
    const char *result = "UNKNOWN PWM1_SMINTEN_CMPIE";

    switch (instance)
    {
    case PWM1_SMINTEN_CMPIE::DISABLED:
        result = "DISABLED";
        break;
    case PWM1_SMINTEN_CMPIE::ENABLED:
        result = "ENABLED";
        break;
    }

    return result;
}

/**
 * Converts a C string to PWM1_SMINTEN_CMPIE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, PWM1_SMINTEN_CMPIE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "DISABLED", 8)))
    {
        output = PWM1_SMINTEN_CMPIE::DISABLED;
    }
    else if ((result = !strncmp(data, "ENABLED", 7)))
    {
        output = PWM1_SMINTEN_CMPIE::ENABLED;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7
