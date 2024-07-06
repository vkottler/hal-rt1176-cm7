/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class IOMUXC_FLEXSPI1_I_DQS_FA_SELECT_INPUT_DAISY : uint8_t
{
    EMC_B2_18_ALT6 /*!< Selecting Pad: GPIO_EMC_B2_18 for Mode: ALT6 */,
    AD_17_ALT3 = 1 /*!< Selecting Pad: GPIO_AD_17 for Mode: ALT3 */,
    SD_B2_05_ALT1 = 2 /*!< Selecting Pad: GPIO_SD_B2_05 for Mode: ALT1 */
};
static_assert(sizeof(IOMUXC_FLEXSPI1_I_DQS_FA_SELECT_INPUT_DAISY) == 1);

/**
 * Converts IOMUXC_FLEXSPI1_I_DQS_FA_SELECT_INPUT_DAISY to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(
    IOMUXC_FLEXSPI1_I_DQS_FA_SELECT_INPUT_DAISY instance)
{
    const char *result = "UNKNOWN IOMUXC_FLEXSPI1_I_DQS_FA_SELECT_INPUT_DAISY";

    switch (instance)
    {
    case IOMUXC_FLEXSPI1_I_DQS_FA_SELECT_INPUT_DAISY::EMC_B2_18_ALT6:
        result = "EMC_B2_18_ALT6";
        break;
    case IOMUXC_FLEXSPI1_I_DQS_FA_SELECT_INPUT_DAISY::AD_17_ALT3:
        result = "AD_17_ALT3";
        break;
    case IOMUXC_FLEXSPI1_I_DQS_FA_SELECT_INPUT_DAISY::SD_B2_05_ALT1:
        result = "SD_B2_05_ALT1";
        break;
    }

    return result;
}

/**
 * Converts a C string to IOMUXC_FLEXSPI1_I_DQS_FA_SELECT_INPUT_DAISY.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        IOMUXC_FLEXSPI1_I_DQS_FA_SELECT_INPUT_DAISY &output)
{
    bool result = false;

    if ((result = !strncmp(data, "EMC_B2_18_ALT6", 14)))
    {
        output = IOMUXC_FLEXSPI1_I_DQS_FA_SELECT_INPUT_DAISY::EMC_B2_18_ALT6;
    }
    else if ((result = !strncmp(data, "AD_17_ALT3", 10)))
    {
        output = IOMUXC_FLEXSPI1_I_DQS_FA_SELECT_INPUT_DAISY::AD_17_ALT3;
    }
    else if ((result = !strncmp(data, "SD_B2_05_ALT1", 13)))
    {
        output = IOMUXC_FLEXSPI1_I_DQS_FA_SELECT_INPUT_DAISY::SD_B2_05_ALT1;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7
