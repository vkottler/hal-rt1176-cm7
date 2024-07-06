/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_11_MUX_MODE : uint8_t
{
    _0_usdhc2_DATA7 /*!< Select mux mode: ALT0 mux port: USDHC2_DATA7 of
                       instance: USDHC2 */
        ,
    _1_flexspi1_A_DATA3 = 1 /*!< Select mux mode: ALT1 mux port:
                               FLEXSPI1_A_DATA03 of instance: FLEXSPI1 */
        ,
    _2_enet_1g_TX_CLK_IO = 2 /*!< Select mux mode: ALT2 mux port:
                                ENET_1G_TX_CLK_IO of instance: ENET_1G */
        ,
    _3_enet_1g_REF_CLK = 3 /*!< Select mux mode: ALT3 mux port: ENET_1G_REF_CLK
                              of instance: ENET_1G */
        ,
    _4_gpt6_CLK =
        4 /*!< Select mux mode: ALT4 mux port: GPT6_CLK of instance: GPT6 */,
    _5_gpio_mux4_IO20 = 5 /*!< Select mux mode: ALT5 mux port: GPIO_MUX4_IO20
                             of instance: GPIO_MUX4 */
        ,
    _6_lpspi2_PCS1 = 6 /*!< Select mux mode: ALT6 mux port: LPSPI2_PCS1 of
                          instance: LPSPI2 */
        ,
    _10_gpio10_IO20 = 10 /*!< Select mux mode: ALT10 mux port: GPIO10_IO20 of
                            instance: GPIO10 */
};
static_assert(sizeof(IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_11_MUX_MODE) == 1);

/**
 * Converts IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_11_MUX_MODE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(
    IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_11_MUX_MODE instance)
{
    const char *result =
        "UNKNOWN IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_11_MUX_MODE";

    switch (instance)
    {
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_11_MUX_MODE::_0_usdhc2_DATA7:
        result = "_0_usdhc2_DATA7";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_11_MUX_MODE::_1_flexspi1_A_DATA3:
        result = "_1_flexspi1_A_DATA3";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_11_MUX_MODE::_2_enet_1g_TX_CLK_IO:
        result = "_2_enet_1g_TX_CLK_IO";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_11_MUX_MODE::_3_enet_1g_REF_CLK:
        result = "_3_enet_1g_REF_CLK";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_11_MUX_MODE::_4_gpt6_CLK:
        result = "_4_gpt6_CLK";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_11_MUX_MODE::_5_gpio_mux4_IO20:
        result = "_5_gpio_mux4_IO20";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_11_MUX_MODE::_6_lpspi2_PCS1:
        result = "_6_lpspi2_PCS1";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_11_MUX_MODE::_10_gpio10_IO20:
        result = "_10_gpio10_IO20";
        break;
    }

    return result;
}

/**
 * Converts a C string to IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_11_MUX_MODE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_11_MUX_MODE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_0_usdhc2_DATA7", 15)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_11_MUX_MODE::_0_usdhc2_DATA7;
    }
    else if ((result = !strncmp(data, "_1_flexspi1_A_DATA3", 19)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_11_MUX_MODE::_1_flexspi1_A_DATA3;
    }
    else if ((result = !strncmp(data, "_2_enet_1g_TX_CLK_IO", 20)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_11_MUX_MODE::_2_enet_1g_TX_CLK_IO;
    }
    else if ((result = !strncmp(data, "_3_enet_1g_REF_CLK", 18)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_11_MUX_MODE::_3_enet_1g_REF_CLK;
    }
    else if ((result = !strncmp(data, "_4_gpt6_CLK", 11)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_11_MUX_MODE::_4_gpt6_CLK;
    }
    else if ((result = !strncmp(data, "_5_gpio_mux4_IO20", 17)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_11_MUX_MODE::_5_gpio_mux4_IO20;
    }
    else if ((result = !strncmp(data, "_6_lpspi2_PCS1", 14)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_11_MUX_MODE::_6_lpspi2_PCS1;
    }
    else if ((result = !strncmp(data, "_10_gpio10_IO20", 15)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_11_MUX_MODE::_10_gpio10_IO20;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7
