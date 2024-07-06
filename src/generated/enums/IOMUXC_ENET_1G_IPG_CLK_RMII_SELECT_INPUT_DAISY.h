/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class IOMUXC_ENET_1G_IPG_CLK_RMII_SELECT_INPUT_DAISY : uint8_t
{
    EMC_B2_19_ALT3 /*!< Selecting Pad: GPIO_EMC_B2_19 for Mode: ALT3 */,
    SD_B2_11_ALT3 = 1 /*!< Selecting Pad: GPIO_SD_B2_11 for Mode: ALT3 */,
    DISP_B1_11_ALT2 = 2 /*!< Selecting Pad: GPIO_DISP_B1_11 for Mode: ALT2 */,
    DISP_B2_14_ALT4 = 3 /*!< Selecting Pad: GPIO_DISP_B2_14 for Mode: ALT4 */
};
static_assert(sizeof(IOMUXC_ENET_1G_IPG_CLK_RMII_SELECT_INPUT_DAISY) == 1);

/**
 * Converts IOMUXC_ENET_1G_IPG_CLK_RMII_SELECT_INPUT_DAISY to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(
    IOMUXC_ENET_1G_IPG_CLK_RMII_SELECT_INPUT_DAISY instance)
{
    const char *result =
        "UNKNOWN IOMUXC_ENET_1G_IPG_CLK_RMII_SELECT_INPUT_DAISY";

    switch (instance)
    {
    case IOMUXC_ENET_1G_IPG_CLK_RMII_SELECT_INPUT_DAISY::EMC_B2_19_ALT3:
        result = "EMC_B2_19_ALT3";
        break;
    case IOMUXC_ENET_1G_IPG_CLK_RMII_SELECT_INPUT_DAISY::SD_B2_11_ALT3:
        result = "SD_B2_11_ALT3";
        break;
    case IOMUXC_ENET_1G_IPG_CLK_RMII_SELECT_INPUT_DAISY::DISP_B1_11_ALT2:
        result = "DISP_B1_11_ALT2";
        break;
    case IOMUXC_ENET_1G_IPG_CLK_RMII_SELECT_INPUT_DAISY::DISP_B2_14_ALT4:
        result = "DISP_B2_14_ALT4";
        break;
    }

    return result;
}

/**
 * Converts a C string to IOMUXC_ENET_1G_IPG_CLK_RMII_SELECT_INPUT_DAISY.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        IOMUXC_ENET_1G_IPG_CLK_RMII_SELECT_INPUT_DAISY &output)
{
    bool result = false;

    if ((result = !strncmp(data, "EMC_B2_19_ALT3", 14)))
    {
        output =
            IOMUXC_ENET_1G_IPG_CLK_RMII_SELECT_INPUT_DAISY::EMC_B2_19_ALT3;
    }
    else if ((result = !strncmp(data, "SD_B2_11_ALT3", 13)))
    {
        output = IOMUXC_ENET_1G_IPG_CLK_RMII_SELECT_INPUT_DAISY::SD_B2_11_ALT3;
    }
    else if ((result = !strncmp(data, "DISP_B1_11_ALT2", 15)))
    {
        output =
            IOMUXC_ENET_1G_IPG_CLK_RMII_SELECT_INPUT_DAISY::DISP_B1_11_ALT2;
    }
    else if ((result = !strncmp(data, "DISP_B2_14_ALT4", 15)))
    {
        output =
            IOMUXC_ENET_1G_IPG_CLK_RMII_SELECT_INPUT_DAISY::DISP_B2_14_ALT4;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7