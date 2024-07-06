/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_10_MUX_MODE : uint8_t
{
    _0_usdhc2_DATA6 /*!< Select mux mode: ALT0 mux port: USDHC2_DATA6 of
                       instance: USDHC2 */
        ,
    _1_flexspi1_A_DATA2 = 1 /*!< Select mux mode: ALT1 mux port:
                               FLEXSPI1_A_DATA02 of instance: FLEXSPI1 */
        ,
    _2_enet_1g_TX_EN = 2 /*!< Select mux mode: ALT2 mux port: ENET_1G_TX_EN of
                            instance: ENET_1G */
        ,
    _3_lpuart5_RTS_B = 3 /*!< Select mux mode: ALT3 mux port: LPUART5_RTS_B of
                            instance: LPUART5 */
        ,
    _4_gpt6_COMPARE3 = 4 /*!< Select mux mode: ALT4 mux port: GPT6_COMPARE3 of
                            instance: GPT6 */
        ,
    _5_gpio_mux4_IO19 = 5 /*!< Select mux mode: ALT5 mux port: GPIO_MUX4_IO19
                             of instance: GPIO_MUX4 */
        ,
    _6_lpspi2_SDI = 6 /*!< Select mux mode: ALT6 mux port: LPSPI2_SIN of
                         instance: LPSPI2 */
        ,
    _10_gpio10_IO19 = 10 /*!< Select mux mode: ALT10 mux port: GPIO10_IO19 of
                            instance: GPIO10 */
};
static_assert(sizeof(IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_10_MUX_MODE) == 1);

/**
 * Converts IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_10_MUX_MODE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(
    IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_10_MUX_MODE instance)
{
    const char *result =
        "UNKNOWN IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_10_MUX_MODE";

    switch (instance)
    {
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_10_MUX_MODE::_0_usdhc2_DATA6:
        result = "_0_usdhc2_DATA6";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_10_MUX_MODE::_1_flexspi1_A_DATA2:
        result = "_1_flexspi1_A_DATA2";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_10_MUX_MODE::_2_enet_1g_TX_EN:
        result = "_2_enet_1g_TX_EN";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_10_MUX_MODE::_3_lpuart5_RTS_B:
        result = "_3_lpuart5_RTS_B";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_10_MUX_MODE::_4_gpt6_COMPARE3:
        result = "_4_gpt6_COMPARE3";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_10_MUX_MODE::_5_gpio_mux4_IO19:
        result = "_5_gpio_mux4_IO19";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_10_MUX_MODE::_6_lpspi2_SDI:
        result = "_6_lpspi2_SDI";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_10_MUX_MODE::_10_gpio10_IO19:
        result = "_10_gpio10_IO19";
        break;
    }

    return result;
}

/**
 * Converts a C string to IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_10_MUX_MODE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_10_MUX_MODE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_0_usdhc2_DATA6", 15)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_10_MUX_MODE::_0_usdhc2_DATA6;
    }
    else if ((result = !strncmp(data, "_1_flexspi1_A_DATA2", 19)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_10_MUX_MODE::_1_flexspi1_A_DATA2;
    }
    else if ((result = !strncmp(data, "_2_enet_1g_TX_EN", 16)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_10_MUX_MODE::_2_enet_1g_TX_EN;
    }
    else if ((result = !strncmp(data, "_3_lpuart5_RTS_B", 16)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_10_MUX_MODE::_3_lpuart5_RTS_B;
    }
    else if ((result = !strncmp(data, "_4_gpt6_COMPARE3", 16)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_10_MUX_MODE::_4_gpt6_COMPARE3;
    }
    else if ((result = !strncmp(data, "_5_gpio_mux4_IO19", 17)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_10_MUX_MODE::_5_gpio_mux4_IO19;
    }
    else if ((result = !strncmp(data, "_6_lpspi2_SDI", 13)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_10_MUX_MODE::_6_lpspi2_SDI;
    }
    else if ((result = !strncmp(data, "_10_gpio10_IO19", 15)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_10_MUX_MODE::_10_gpio10_IO19;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7
