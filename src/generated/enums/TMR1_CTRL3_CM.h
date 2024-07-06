/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class TMR1_CTRL3_CM : uint8_t
{
    NOOP /*!< No operation */,
    RISING_ONLY = 1 /*!< Count rising edges of primary sourceRising edges are
                       counted only when SCTRL[IPS] = 0. Falling edges are
                       counted when SCTRL[IPS] = 1. If the primary count source
                       is IP bus clock divide by 1, only rising edges are
                       counted regardless of the value of SCTRL[IPS]. */
        ,
    RISING_AND_FALLING = 2 /*!< Count rising and falling edges of primary
                              sourceIP bus clock divide by 1 cannot be used as
                              a primary count source in edge count mode. */
        ,
    RISING_WHILE_SEC_HIGH = 3 /*!< Count rising edges of primary source while
                                 secondary input high active */
        ,
    QUADRATURE =
        4 /*!< Quadrature count mode, uses primary and secondary sources */,
    RISING_SEC_DIR =
        5 /*!< Count rising edges of primary source; secondary source specifies
             directionRising edges are counted only when SCTRL[IPS] = 0.
             Falling edges are counted when SCTRL[IPS] = 1. */
        ,
    SECONDARY =
        6 /*!< Edge of secondary source triggers primary count until compare */
        ,
    CASCADE = 7 /*!< Cascaded counter mode (up/down)The primary count source
                   must be set to one of the counter outputs. */
};
static_assert(sizeof(TMR1_CTRL3_CM) == 1);

/**
 * Converts TMR1_CTRL3_CM to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(TMR1_CTRL3_CM instance)
{
    const char *result = "UNKNOWN TMR1_CTRL3_CM";

    switch (instance)
    {
    case TMR1_CTRL3_CM::NOOP:
        result = "NOOP";
        break;
    case TMR1_CTRL3_CM::RISING_ONLY:
        result = "RISING_ONLY";
        break;
    case TMR1_CTRL3_CM::RISING_AND_FALLING:
        result = "RISING_AND_FALLING";
        break;
    case TMR1_CTRL3_CM::RISING_WHILE_SEC_HIGH:
        result = "RISING_WHILE_SEC_HIGH";
        break;
    case TMR1_CTRL3_CM::QUADRATURE:
        result = "QUADRATURE";
        break;
    case TMR1_CTRL3_CM::RISING_SEC_DIR:
        result = "RISING_SEC_DIR";
        break;
    case TMR1_CTRL3_CM::SECONDARY:
        result = "SECONDARY";
        break;
    case TMR1_CTRL3_CM::CASCADE:
        result = "CASCADE";
        break;
    }

    return result;
}

/**
 * Converts a C string to TMR1_CTRL3_CM.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, TMR1_CTRL3_CM &output)
{
    bool result = false;

    if ((result = !strncmp(data, "NOOP", 4)))
    {
        output = TMR1_CTRL3_CM::NOOP;
    }
    else if ((result = !strncmp(data, "RISING_ONLY", 11)))
    {
        output = TMR1_CTRL3_CM::RISING_ONLY;
    }
    else if ((result = !strncmp(data, "RISING_AND_FALLING", 18)))
    {
        output = TMR1_CTRL3_CM::RISING_AND_FALLING;
    }
    else if ((result = !strncmp(data, "RISING_WHILE_SEC_HIGH", 21)))
    {
        output = TMR1_CTRL3_CM::RISING_WHILE_SEC_HIGH;
    }
    else if ((result = !strncmp(data, "QUADRATURE", 10)))
    {
        output = TMR1_CTRL3_CM::QUADRATURE;
    }
    else if ((result = !strncmp(data, "RISING_SEC_DIR", 14)))
    {
        output = TMR1_CTRL3_CM::RISING_SEC_DIR;
    }
    else if ((result = !strncmp(data, "SECONDARY", 9)))
    {
        output = TMR1_CTRL3_CM::SECONDARY;
    }
    else if ((result = !strncmp(data, "CASCADE", 7)))
    {
        output = TMR1_CTRL3_CM::CASCADE;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7
