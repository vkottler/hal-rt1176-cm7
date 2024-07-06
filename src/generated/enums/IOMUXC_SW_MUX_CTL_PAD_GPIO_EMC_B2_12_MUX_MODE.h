/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_12_MUX_MODE : uint8_t
{
    _0_semc_DATA27 /*!< Select mux mode: ALT0 mux port: SEMC_DATA27 of
                      instance: SEMC */
        ,
    _1_spdif_OUT =
        1 /*!< Select mux mode: ALT1 mux port: SPDIF_OUT of instance: SPDIF */,
    _2_ENET_1G_TX_DATA1 = 2 /*!< Select mux mode: ALT2 mux port:
                               ENET_1G_TX_DATA01 of instance: ENET_1G */
        ,
    _3_sai3_RX_BCLK = 3 /*!< Select mux mode: ALT3 mux port: SAI3_RX_BCLK of
                           instance: SAI3 */
        ,
    _4_flexspi2_A_DQS = 4 /*!< Select mux mode: ALT4 mux port: FLEXSPI2_A_DQS
                             of instance: FLEXSPI2 */
        ,
    _5_gpio_mux2_IO22 = 5 /*!< Select mux mode: ALT5 mux port: GPIO_MUX2_IO22
                             of instance: GPIO_MUX2 */
        ,
    _6_XBAR1_INOUT32 = 6 /*!< Select mux mode: ALT6 mux port: XBAR1_INOUT32 of
                            instance: XBAR1 */
        ,
    _8_EMVSIM1_CLK = 8 /*!< Select mux mode: ALT8 mux port: EMVSIM1_CLK of
                          instance: EMVSIM1 */
        ,
    _9_qtimer1_TIMER3 =
        9 /*!< Select mux mode: ALT9 mux port: TMR1_TIMER3 of instance: TMR1 */
        ,
    _10_gpio8_IO22 = 10 /*!< Select mux mode: ALT10 mux port: GPIO8_IO22 of
                           instance: GPIO8 */
};
static_assert(sizeof(IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_12_MUX_MODE) == 1);

/**
 * Converts IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_12_MUX_MODE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(
    IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_12_MUX_MODE instance)
{
    const char *result =
        "UNKNOWN IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_12_MUX_MODE";

    switch (instance)
    {
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_12_MUX_MODE::_0_semc_DATA27:
        result = "_0_semc_DATA27";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_12_MUX_MODE::_1_spdif_OUT:
        result = "_1_spdif_OUT";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_12_MUX_MODE::_2_ENET_1G_TX_DATA1:
        result = "_2_ENET_1G_TX_DATA1";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_12_MUX_MODE::_3_sai3_RX_BCLK:
        result = "_3_sai3_RX_BCLK";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_12_MUX_MODE::_4_flexspi2_A_DQS:
        result = "_4_flexspi2_A_DQS";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_12_MUX_MODE::_5_gpio_mux2_IO22:
        result = "_5_gpio_mux2_IO22";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_12_MUX_MODE::_6_XBAR1_INOUT32:
        result = "_6_XBAR1_INOUT32";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_12_MUX_MODE::_8_EMVSIM1_CLK:
        result = "_8_EMVSIM1_CLK";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_12_MUX_MODE::_9_qtimer1_TIMER3:
        result = "_9_qtimer1_TIMER3";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_12_MUX_MODE::_10_gpio8_IO22:
        result = "_10_gpio8_IO22";
        break;
    }

    return result;
}

/**
 * Converts a C string to IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_12_MUX_MODE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_12_MUX_MODE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_0_semc_DATA27", 14)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_12_MUX_MODE::_0_semc_DATA27;
    }
    else if ((result = !strncmp(data, "_1_spdif_OUT", 12)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_12_MUX_MODE::_1_spdif_OUT;
    }
    else if ((result = !strncmp(data, "_2_ENET_1G_TX_DATA1", 19)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_12_MUX_MODE::_2_ENET_1G_TX_DATA1;
    }
    else if ((result = !strncmp(data, "_3_sai3_RX_BCLK", 15)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_12_MUX_MODE::_3_sai3_RX_BCLK;
    }
    else if ((result = !strncmp(data, "_4_flexspi2_A_DQS", 17)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_12_MUX_MODE::_4_flexspi2_A_DQS;
    }
    else if ((result = !strncmp(data, "_5_gpio_mux2_IO22", 17)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_12_MUX_MODE::_5_gpio_mux2_IO22;
    }
    else if ((result = !strncmp(data, "_6_XBAR1_INOUT32", 16)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_12_MUX_MODE::_6_XBAR1_INOUT32;
    }
    else if ((result = !strncmp(data, "_8_EMVSIM1_CLK", 14)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_12_MUX_MODE::_8_EMVSIM1_CLK;
    }
    else if ((result = !strncmp(data, "_9_qtimer1_TIMER3", 17)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_12_MUX_MODE::_9_qtimer1_TIMER3;
    }
    else if ((result = !strncmp(data, "_10_gpio8_IO22", 14)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_12_MUX_MODE::_10_gpio8_IO22;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7
