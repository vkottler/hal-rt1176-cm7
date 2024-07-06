/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class ENET_1G_TCSR0_TMODE : uint8_t
{
    DIS /*!< Timer Channel is disabled. */,
    RE =
        1 /*!< Timer Channel is configured for Input Capture on rising edge. */
        ,
    FE = 2 /*!< Timer Channel is configured for Input Capture on falling edge.
            */
        ,
    BE =
        3 /*!< Timer Channel is configured for Input Capture on both edges. */,
    OUT = 4 /*!< Timer Channel is configured for Output Compare - software
               only. */
        ,
    TOGGLE = 5 /*!< Timer Channel is configured for Output Compare - toggle
                  output on compare. */
        ,
    CLR = 6 /*!< Timer Channel is configured for Output Compare - clear output
               on compare. */
        ,
    SET_OUT = 7 /*!< Timer Channel is configured for Output Compare - set
                   output on compare. */
        ,
    CLR_SET1 = 11 /*!< Timer Channel is configured for Output Compare - set
                     output on compare, clear output on overflow. */
        ,
    CLR_SET = 10 /*!< Timer Channel is configured for Output Compare - clear
                    output on compare, set output on overflow. */
        ,
    OUT_CMP_LOW =
        14 /*!< Timer Channel is configured for Output Compare - pulse output
              low on compare for one 1588-clock cycle. */
        ,
    OUT_CMP_HIGH =
        15 /*!< Timer Channel is configured for Output Compare - pulse output
              high on compare for one 1588-clock cycle. */
};
static_assert(sizeof(ENET_1G_TCSR0_TMODE) == 1);

/**
 * Converts ENET_1G_TCSR0_TMODE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(ENET_1G_TCSR0_TMODE instance)
{
    const char *result = "UNKNOWN ENET_1G_TCSR0_TMODE";

    switch (instance)
    {
    case ENET_1G_TCSR0_TMODE::DIS:
        result = "DIS";
        break;
    case ENET_1G_TCSR0_TMODE::RE:
        result = "RE";
        break;
    case ENET_1G_TCSR0_TMODE::FE:
        result = "FE";
        break;
    case ENET_1G_TCSR0_TMODE::BE:
        result = "BE";
        break;
    case ENET_1G_TCSR0_TMODE::OUT:
        result = "OUT";
        break;
    case ENET_1G_TCSR0_TMODE::TOGGLE:
        result = "TOGGLE";
        break;
    case ENET_1G_TCSR0_TMODE::CLR:
        result = "CLR";
        break;
    case ENET_1G_TCSR0_TMODE::SET_OUT:
        result = "SET_OUT";
        break;
    case ENET_1G_TCSR0_TMODE::CLR_SET1:
        result = "CLR_SET1";
        break;
    case ENET_1G_TCSR0_TMODE::CLR_SET:
        result = "CLR_SET";
        break;
    case ENET_1G_TCSR0_TMODE::OUT_CMP_LOW:
        result = "OUT_CMP_LOW";
        break;
    case ENET_1G_TCSR0_TMODE::OUT_CMP_HIGH:
        result = "OUT_CMP_HIGH";
        break;
    }

    return result;
}

/**
 * Converts a C string to ENET_1G_TCSR0_TMODE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, ENET_1G_TCSR0_TMODE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "DIS", 3)))
    {
        output = ENET_1G_TCSR0_TMODE::DIS;
    }
    else if ((result = !strncmp(data, "RE", 2)))
    {
        output = ENET_1G_TCSR0_TMODE::RE;
    }
    else if ((result = !strncmp(data, "FE", 2)))
    {
        output = ENET_1G_TCSR0_TMODE::FE;
    }
    else if ((result = !strncmp(data, "BE", 2)))
    {
        output = ENET_1G_TCSR0_TMODE::BE;
    }
    else if ((result = !strncmp(data, "OUT", 3)))
    {
        output = ENET_1G_TCSR0_TMODE::OUT;
    }
    else if ((result = !strncmp(data, "TOGGLE", 6)))
    {
        output = ENET_1G_TCSR0_TMODE::TOGGLE;
    }
    else if ((result = !strncmp(data, "CLR", 3)))
    {
        output = ENET_1G_TCSR0_TMODE::CLR;
    }
    else if ((result = !strncmp(data, "SET_OUT", 7)))
    {
        output = ENET_1G_TCSR0_TMODE::SET_OUT;
    }
    else if ((result = !strncmp(data, "CLR_SET1", 8)))
    {
        output = ENET_1G_TCSR0_TMODE::CLR_SET1;
    }
    else if ((result = !strncmp(data, "CLR_SET", 7)))
    {
        output = ENET_1G_TCSR0_TMODE::CLR_SET;
    }
    else if ((result = !strncmp(data, "OUT_CMP_LOW", 11)))
    {
        output = ENET_1G_TCSR0_TMODE::OUT_CMP_LOW;
    }
    else if ((result = !strncmp(data, "OUT_CMP_HIGH", 12)))
    {
        output = ENET_1G_TCSR0_TMODE::OUT_CMP_HIGH;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7
