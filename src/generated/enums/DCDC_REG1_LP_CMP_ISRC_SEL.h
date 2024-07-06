/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class DCDC_REG1_LP_CMP_ISRC_SEL : uint8_t
{
    _0 /*!< 50nA */,
    _1 = 1 /*!< 100nA */,
    _2 = 2 /*!< 200nA */,
    _3 = 3 /*!< 400nA */
};
static_assert(sizeof(DCDC_REG1_LP_CMP_ISRC_SEL) == 1);

/**
 * Converts DCDC_REG1_LP_CMP_ISRC_SEL to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(DCDC_REG1_LP_CMP_ISRC_SEL instance)
{
    const char *result = "UNKNOWN DCDC_REG1_LP_CMP_ISRC_SEL";

    switch (instance)
    {
    case DCDC_REG1_LP_CMP_ISRC_SEL::_0:
        result = "_0";
        break;
    case DCDC_REG1_LP_CMP_ISRC_SEL::_1:
        result = "_1";
        break;
    case DCDC_REG1_LP_CMP_ISRC_SEL::_2:
        result = "_2";
        break;
    case DCDC_REG1_LP_CMP_ISRC_SEL::_3:
        result = "_3";
        break;
    }

    return result;
}

/**
 * Converts a C string to DCDC_REG1_LP_CMP_ISRC_SEL.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, DCDC_REG1_LP_CMP_ISRC_SEL &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_0", 2)))
    {
        output = DCDC_REG1_LP_CMP_ISRC_SEL::_0;
    }
    else if ((result = !strncmp(data, "_1", 2)))
    {
        output = DCDC_REG1_LP_CMP_ISRC_SEL::_1;
    }
    else if ((result = !strncmp(data, "_2", 2)))
    {
        output = DCDC_REG1_LP_CMP_ISRC_SEL::_2;
    }
    else if ((result = !strncmp(data, "_3", 2)))
    {
        output = DCDC_REG1_LP_CMP_ISRC_SEL::_3;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7
