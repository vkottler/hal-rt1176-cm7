/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class IOMUXC_FLEXCAN1_RX_SELECT_INPUT_DAISY : uint8_t
{
    AD_07_ALT1 /*!< Selecting Pad: GPIO_AD_07 for Mode: ALT1 */,
    DISP_B2_13_ALT2 = 1 /*!< Selecting Pad: GPIO_DISP_B2_13 for Mode: ALT2 */,
    DISP_B2_15_ALT6 = 2 /*!< Selecting Pad: GPIO_DISP_B2_15 for Mode: ALT6 */
};
static_assert(sizeof(IOMUXC_FLEXCAN1_RX_SELECT_INPUT_DAISY) == 1);

/**
 * Converts IOMUXC_FLEXCAN1_RX_SELECT_INPUT_DAISY to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(IOMUXC_FLEXCAN1_RX_SELECT_INPUT_DAISY instance)
{
    const char *result = "UNKNOWN IOMUXC_FLEXCAN1_RX_SELECT_INPUT_DAISY";

    switch (instance)
    {
    case IOMUXC_FLEXCAN1_RX_SELECT_INPUT_DAISY::AD_07_ALT1:
        result = "AD_07_ALT1";
        break;
    case IOMUXC_FLEXCAN1_RX_SELECT_INPUT_DAISY::DISP_B2_13_ALT2:
        result = "DISP_B2_13_ALT2";
        break;
    case IOMUXC_FLEXCAN1_RX_SELECT_INPUT_DAISY::DISP_B2_15_ALT6:
        result = "DISP_B2_15_ALT6";
        break;
    }

    return result;
}

/**
 * Converts a C string to IOMUXC_FLEXCAN1_RX_SELECT_INPUT_DAISY.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        IOMUXC_FLEXCAN1_RX_SELECT_INPUT_DAISY &output)
{
    bool result = false;

    if ((result = !strncmp(data, "AD_07_ALT1", 10)))
    {
        output = IOMUXC_FLEXCAN1_RX_SELECT_INPUT_DAISY::AD_07_ALT1;
    }
    else if ((result = !strncmp(data, "DISP_B2_13_ALT2", 15)))
    {
        output = IOMUXC_FLEXCAN1_RX_SELECT_INPUT_DAISY::DISP_B2_13_ALT2;
    }
    else if ((result = !strncmp(data, "DISP_B2_15_ALT6", 15)))
    {
        output = IOMUXC_FLEXCAN1_RX_SELECT_INPUT_DAISY::DISP_B2_15_ALT6;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7
