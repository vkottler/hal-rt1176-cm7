/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class DCDC_CTRL1_VDD1P0CTRL_TRG : uint8_t
{
    v0p6 /*!< 0.6V */,
    v1p0 = 16 /*!< 1.0V */,
    v1p375 = 31 /*!< 1.375V */
};
static_assert(sizeof(DCDC_CTRL1_VDD1P0CTRL_TRG) == 1);

/**
 * Converts DCDC_CTRL1_VDD1P0CTRL_TRG to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(DCDC_CTRL1_VDD1P0CTRL_TRG instance)
{
    const char *result = "UNKNOWN DCDC_CTRL1_VDD1P0CTRL_TRG";

    switch (instance)
    {
    case DCDC_CTRL1_VDD1P0CTRL_TRG::v0p6:
        result = "v0p6";
        break;
    case DCDC_CTRL1_VDD1P0CTRL_TRG::v1p0:
        result = "v1p0";
        break;
    case DCDC_CTRL1_VDD1P0CTRL_TRG::v1p375:
        result = "v1p375";
        break;
    }

    return result;
}

/**
 * Converts a C string to DCDC_CTRL1_VDD1P0CTRL_TRG.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, DCDC_CTRL1_VDD1P0CTRL_TRG &output)
{
    bool result = false;

    if ((result = !strncmp(data, "v0p6", 4)))
    {
        output = DCDC_CTRL1_VDD1P0CTRL_TRG::v0p6;
    }
    else if ((result = !strncmp(data, "v1p0", 4)))
    {
        output = DCDC_CTRL1_VDD1P0CTRL_TRG::v1p0;
    }
    else if ((result = !strncmp(data, "v1p375", 6)))
    {
        output = DCDC_CTRL1_VDD1P0CTRL_TRG::v1p375;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7