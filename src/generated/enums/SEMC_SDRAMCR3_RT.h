/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class SEMC_SDRAMCR3_RT : uint8_t
{
    _0 /*!< (256+1)*(Prescaler period) */,
    _1 = 1 /*!< (RT+1)*(Prescaler period) */,
    _2 = 2 /*!< (RT+1)*(Prescaler period) */,
    _3 = 3 /*!< (RT+1)*(Prescaler period) */,
    _4 = 4 /*!< (RT+1)*(Prescaler period) */,
    _5 = 5 /*!< (RT+1)*(Prescaler period) */,
    _6 = 6 /*!< (RT+1)*(Prescaler period) */,
    _7 = 7 /*!< (RT+1)*(Prescaler period) */,
    _8 = 8 /*!< (RT+1)*(Prescaler period) */,
    _9 = 9 /*!< (RT+1)*(Prescaler period) */
};
static_assert(sizeof(SEMC_SDRAMCR3_RT) == 1);

/**
 * Converts SEMC_SDRAMCR3_RT to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SEMC_SDRAMCR3_RT instance)
{
    const char *result = "UNKNOWN SEMC_SDRAMCR3_RT";

    switch (instance)
    {
    case SEMC_SDRAMCR3_RT::_0:
        result = "_0";
        break;
    case SEMC_SDRAMCR3_RT::_1:
        result = "_1";
        break;
    case SEMC_SDRAMCR3_RT::_2:
        result = "_2";
        break;
    case SEMC_SDRAMCR3_RT::_3:
        result = "_3";
        break;
    case SEMC_SDRAMCR3_RT::_4:
        result = "_4";
        break;
    case SEMC_SDRAMCR3_RT::_5:
        result = "_5";
        break;
    case SEMC_SDRAMCR3_RT::_6:
        result = "_6";
        break;
    case SEMC_SDRAMCR3_RT::_7:
        result = "_7";
        break;
    case SEMC_SDRAMCR3_RT::_8:
        result = "_8";
        break;
    case SEMC_SDRAMCR3_RT::_9:
        result = "_9";
        break;
    }

    return result;
}

/**
 * Converts a C string to SEMC_SDRAMCR3_RT.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SEMC_SDRAMCR3_RT &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_0", 2)))
    {
        output = SEMC_SDRAMCR3_RT::_0;
    }
    else if ((result = !strncmp(data, "_1", 2)))
    {
        output = SEMC_SDRAMCR3_RT::_1;
    }
    else if ((result = !strncmp(data, "_2", 2)))
    {
        output = SEMC_SDRAMCR3_RT::_2;
    }
    else if ((result = !strncmp(data, "_3", 2)))
    {
        output = SEMC_SDRAMCR3_RT::_3;
    }
    else if ((result = !strncmp(data, "_4", 2)))
    {
        output = SEMC_SDRAMCR3_RT::_4;
    }
    else if ((result = !strncmp(data, "_5", 2)))
    {
        output = SEMC_SDRAMCR3_RT::_5;
    }
    else if ((result = !strncmp(data, "_6", 2)))
    {
        output = SEMC_SDRAMCR3_RT::_6;
    }
    else if ((result = !strncmp(data, "_7", 2)))
    {
        output = SEMC_SDRAMCR3_RT::_7;
    }
    else if ((result = !strncmp(data, "_8", 2)))
    {
        output = SEMC_SDRAMCR3_RT::_8;
    }
    else if ((result = !strncmp(data, "_9", 2)))
    {
        output = SEMC_SDRAMCR3_RT::_9;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7