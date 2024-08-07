/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class IOMUXC_LPUART1_LPUART_TXD_SELECT_INPUT_DAISY : uint8_t
{
    AD_24_ALT0 /*!< Selecting Pad: GPIO_AD_24 for Mode: ALT0 */,
    DISP_B1_02_ALT9 = 1 /*!< Selecting Pad: GPIO_DISP_B1_02 for Mode: ALT9 */,
    DISP_B2_08_ALT9 = 2 /*!< Selecting Pad: GPIO_DISP_B2_08 for Mode: ALT9 */
};
static_assert(sizeof(IOMUXC_LPUART1_LPUART_TXD_SELECT_INPUT_DAISY) == 1);

/**
 * Converts IOMUXC_LPUART1_LPUART_TXD_SELECT_INPUT_DAISY to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(
    IOMUXC_LPUART1_LPUART_TXD_SELECT_INPUT_DAISY instance)
{
    const char *result =
        "UNKNOWN IOMUXC_LPUART1_LPUART_TXD_SELECT_INPUT_DAISY";

    switch (instance)
    {
    case IOMUXC_LPUART1_LPUART_TXD_SELECT_INPUT_DAISY::AD_24_ALT0:
        result = "AD_24_ALT0";
        break;
    case IOMUXC_LPUART1_LPUART_TXD_SELECT_INPUT_DAISY::DISP_B1_02_ALT9:
        result = "DISP_B1_02_ALT9";
        break;
    case IOMUXC_LPUART1_LPUART_TXD_SELECT_INPUT_DAISY::DISP_B2_08_ALT9:
        result = "DISP_B2_08_ALT9";
        break;
    }

    return result;
}

/**
 * Converts a C string to IOMUXC_LPUART1_LPUART_TXD_SELECT_INPUT_DAISY.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        IOMUXC_LPUART1_LPUART_TXD_SELECT_INPUT_DAISY &output)
{
    bool result = false;

    if ((result = !strncmp(data, "AD_24_ALT0", 10)))
    {
        output = IOMUXC_LPUART1_LPUART_TXD_SELECT_INPUT_DAISY::AD_24_ALT0;
    }
    else if ((result = !strncmp(data, "DISP_B1_02_ALT9", 15)))
    {
        output = IOMUXC_LPUART1_LPUART_TXD_SELECT_INPUT_DAISY::DISP_B1_02_ALT9;
    }
    else if ((result = !strncmp(data, "DISP_B2_08_ALT9", 15)))
    {
        output = IOMUXC_LPUART1_LPUART_TXD_SELECT_INPUT_DAISY::DISP_B2_08_ALT9;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7
