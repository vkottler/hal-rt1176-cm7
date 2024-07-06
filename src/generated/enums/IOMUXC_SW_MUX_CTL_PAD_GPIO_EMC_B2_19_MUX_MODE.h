/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_19_MUX_MODE : uint8_t
{
    _0_semc_CLKX0 /*!< Select mux mode: ALT0 mux port: SEMC_CLKX00 of instance:
                     SEMC */
        ,
    _1_enet_MDC =
        1 /*!< Select mux mode: ALT1 mux port: ENET_MDC of instance: ENET */,
    _2_enet_1g_MDC = 2 /*!< Select mux mode: ALT2 mux port: ENET_1G_MDC of
                          instance: ENET_1G */
        ,
    _3_enet_1g_REF_CLK = 3 /*!< Select mux mode: ALT3 mux port: ENET_1G_REF_CLK
                              of instance: ENET_1G */
        ,
    _4_flexspi2_A_DATA6 = 4 /*!< Select mux mode: ALT4 mux port:
                               FLEXSPI2_A_DATA06 of instance: FLEXSPI2 */
        ,
    _5_gpio_mux2_IO29 = 5 /*!< Select mux mode: ALT5 mux port: GPIO_MUX2_IO29
                             of instance: GPIO_MUX2 */
        ,
    _8_enet_qos_MDC = 8 /*!< Select mux mode: ALT8 mux port: ENET_QOS_MDC of
                           instance: ENET_QOS */
        ,
    _9_qtimer3_TIMER2 =
        9 /*!< Select mux mode: ALT9 mux port: TMR3_TIMER2 of instance: TMR3 */
        ,
    _10_gpio8_IO29 = 10 /*!< Select mux mode: ALT10 mux port: GPIO8_IO29 of
                           instance: GPIO8 */
};
static_assert(sizeof(IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_19_MUX_MODE) == 1);

/**
 * Converts IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_19_MUX_MODE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(
    IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_19_MUX_MODE instance)
{
    const char *result =
        "UNKNOWN IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_19_MUX_MODE";

    switch (instance)
    {
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_19_MUX_MODE::_0_semc_CLKX0:
        result = "_0_semc_CLKX0";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_19_MUX_MODE::_1_enet_MDC:
        result = "_1_enet_MDC";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_19_MUX_MODE::_2_enet_1g_MDC:
        result = "_2_enet_1g_MDC";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_19_MUX_MODE::_3_enet_1g_REF_CLK:
        result = "_3_enet_1g_REF_CLK";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_19_MUX_MODE::_4_flexspi2_A_DATA6:
        result = "_4_flexspi2_A_DATA6";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_19_MUX_MODE::_5_gpio_mux2_IO29:
        result = "_5_gpio_mux2_IO29";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_19_MUX_MODE::_8_enet_qos_MDC:
        result = "_8_enet_qos_MDC";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_19_MUX_MODE::_9_qtimer3_TIMER2:
        result = "_9_qtimer3_TIMER2";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_19_MUX_MODE::_10_gpio8_IO29:
        result = "_10_gpio8_IO29";
        break;
    }

    return result;
}

/**
 * Converts a C string to IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_19_MUX_MODE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_19_MUX_MODE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_0_semc_CLKX0", 13)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_19_MUX_MODE::_0_semc_CLKX0;
    }
    else if ((result = !strncmp(data, "_1_enet_MDC", 11)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_19_MUX_MODE::_1_enet_MDC;
    }
    else if ((result = !strncmp(data, "_2_enet_1g_MDC", 14)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_19_MUX_MODE::_2_enet_1g_MDC;
    }
    else if ((result = !strncmp(data, "_3_enet_1g_REF_CLK", 18)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_19_MUX_MODE::_3_enet_1g_REF_CLK;
    }
    else if ((result = !strncmp(data, "_4_flexspi2_A_DATA6", 19)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_19_MUX_MODE::_4_flexspi2_A_DATA6;
    }
    else if ((result = !strncmp(data, "_5_gpio_mux2_IO29", 17)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_19_MUX_MODE::_5_gpio_mux2_IO29;
    }
    else if ((result = !strncmp(data, "_8_enet_qos_MDC", 15)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_19_MUX_MODE::_8_enet_qos_MDC;
    }
    else if ((result = !strncmp(data, "_9_qtimer3_TIMER2", 17)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_19_MUX_MODE::_9_qtimer3_TIMER2;
    }
    else if ((result = !strncmp(data, "_10_gpio8_IO29", 14)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_19_MUX_MODE::_10_gpio8_IO29;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7
