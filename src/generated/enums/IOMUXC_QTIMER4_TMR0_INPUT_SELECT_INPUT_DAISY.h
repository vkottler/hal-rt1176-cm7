/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class IOMUXC_QTIMER4_TMR0_INPUT_SELECT_INPUT_DAISY : uint8_t
{
    EMC_B1_20_ALT2 /*!< Selecting Pad: GPIO_EMC_B1_20 for Mode: ALT2 */,
    AD_04_ALT9 = 1 /*!< Selecting Pad: GPIO_AD_04 for Mode: ALT9 */,
    DISP_B1_09_ALT3 = 2 /*!< Selecting Pad: GPIO_DISP_B1_09 for Mode: ALT3 */
};
static_assert(sizeof(IOMUXC_QTIMER4_TMR0_INPUT_SELECT_INPUT_DAISY) == 1);

/**
 * Converts IOMUXC_QTIMER4_TMR0_INPUT_SELECT_INPUT_DAISY to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(
    IOMUXC_QTIMER4_TMR0_INPUT_SELECT_INPUT_DAISY instance)
{
    const char *result =
        "UNKNOWN IOMUXC_QTIMER4_TMR0_INPUT_SELECT_INPUT_DAISY";

    switch (instance)
    {
    case IOMUXC_QTIMER4_TMR0_INPUT_SELECT_INPUT_DAISY::EMC_B1_20_ALT2:
        result = "EMC_B1_20_ALT2";
        break;
    case IOMUXC_QTIMER4_TMR0_INPUT_SELECT_INPUT_DAISY::AD_04_ALT9:
        result = "AD_04_ALT9";
        break;
    case IOMUXC_QTIMER4_TMR0_INPUT_SELECT_INPUT_DAISY::DISP_B1_09_ALT3:
        result = "DISP_B1_09_ALT3";
        break;
    }

    return result;
}

/**
 * Converts a C string to IOMUXC_QTIMER4_TMR0_INPUT_SELECT_INPUT_DAISY.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        IOMUXC_QTIMER4_TMR0_INPUT_SELECT_INPUT_DAISY &output)
{
    bool result = false;

    if ((result = !strncmp(data, "EMC_B1_20_ALT2", 14)))
    {
        output = IOMUXC_QTIMER4_TMR0_INPUT_SELECT_INPUT_DAISY::EMC_B1_20_ALT2;
    }
    else if ((result = !strncmp(data, "AD_04_ALT9", 10)))
    {
        output = IOMUXC_QTIMER4_TMR0_INPUT_SELECT_INPUT_DAISY::AD_04_ALT9;
    }
    else if ((result = !strncmp(data, "DISP_B1_09_ALT3", 15)))
    {
        output = IOMUXC_QTIMER4_TMR0_INPUT_SELECT_INPUT_DAISY::DISP_B1_09_ALT3;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7
