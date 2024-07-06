/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_00_MUX_MODE : uint8_t
{
    _0_usdhc2_DATA3 /*!< Select mux mode: ALT0 mux port: USDHC2_DATA3 of
                       instance: USDHC2 */
        ,
    _1_flexspi1_B_DATA3 = 1 /*!< Select mux mode: ALT1 mux port:
                               FLEXSPI1_B_DATA03 of instance: FLEXSPI1 */
        ,
    _2_enet_1g_RX_EN = 2 /*!< Select mux mode: ALT2 mux port: ENET_1G_RX_EN of
                            instance: ENET_1G */
        ,
    _3_lpuart9_TX = 3 /*!< Select mux mode: ALT3 mux port: LPUART9_TXD of
                         instance: LPUART9 */
        ,
    _4_lpspi4_SCK = 4 /*!< Select mux mode: ALT4 mux port: LPSPI4_SCK of
                         instance: LPSPI4 */
        ,
    _5_gpio_mux4_IO9 = 5 /*!< Select mux mode: ALT5 mux port: GPIO_MUX4_IO09 of
                            instance: GPIO_MUX4 */
        ,
    _10_gpio10_IO9 = 10 /*!< Select mux mode: ALT10 mux port: GPIO10_IO09 of
                           instance: GPIO10 */
};
static_assert(sizeof(IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_00_MUX_MODE) == 1);

/**
 * Converts IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_00_MUX_MODE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(
    IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_00_MUX_MODE instance)
{
    const char *result =
        "UNKNOWN IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_00_MUX_MODE";

    switch (instance)
    {
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_00_MUX_MODE::_0_usdhc2_DATA3:
        result = "_0_usdhc2_DATA3";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_00_MUX_MODE::_1_flexspi1_B_DATA3:
        result = "_1_flexspi1_B_DATA3";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_00_MUX_MODE::_2_enet_1g_RX_EN:
        result = "_2_enet_1g_RX_EN";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_00_MUX_MODE::_3_lpuart9_TX:
        result = "_3_lpuart9_TX";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_00_MUX_MODE::_4_lpspi4_SCK:
        result = "_4_lpspi4_SCK";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_00_MUX_MODE::_5_gpio_mux4_IO9:
        result = "_5_gpio_mux4_IO9";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_00_MUX_MODE::_10_gpio10_IO9:
        result = "_10_gpio10_IO9";
        break;
    }

    return result;
}

/**
 * Converts a C string to IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_00_MUX_MODE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_00_MUX_MODE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_0_usdhc2_DATA3", 15)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_00_MUX_MODE::_0_usdhc2_DATA3;
    }
    else if ((result = !strncmp(data, "_1_flexspi1_B_DATA3", 19)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_00_MUX_MODE::_1_flexspi1_B_DATA3;
    }
    else if ((result = !strncmp(data, "_2_enet_1g_RX_EN", 16)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_00_MUX_MODE::_2_enet_1g_RX_EN;
    }
    else if ((result = !strncmp(data, "_3_lpuart9_TX", 13)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_00_MUX_MODE::_3_lpuart9_TX;
    }
    else if ((result = !strncmp(data, "_4_lpspi4_SCK", 13)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_00_MUX_MODE::_4_lpspi4_SCK;
    }
    else if ((result = !strncmp(data, "_5_gpio_mux4_IO9", 16)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_00_MUX_MODE::_5_gpio_mux4_IO9;
    }
    else if ((result = !strncmp(data, "_10_gpio10_IO9", 14)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_00_MUX_MODE::_10_gpio10_IO9;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7
