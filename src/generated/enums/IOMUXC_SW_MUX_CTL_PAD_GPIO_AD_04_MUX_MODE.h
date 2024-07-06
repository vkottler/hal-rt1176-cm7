/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_04_MUX_MODE : uint8_t
{
    _0_EMVSIM1_PD /*!< Select mux mode: ALT0 mux port: EMVSIM1_PD of instance:
                     EMVSIM1 */
        ,
    _1_lpuart8_CTS_B = 1 /*!< Select mux mode: ALT1 mux port: LPUART8_CTS_B of
                            instance: LPUART8 */
        ,
    _2_enet_1g_1588_EVENT3_IN =
        2 /*!< Select mux mode: ALT2 mux port: ENET_1G_1588_EVENT3_IN of
             instance: ENET_1G */
        ,
    _3_gpt2_COMPARE3 = 3 /*!< Select mux mode: ALT3 mux port: GPT2_COMPARE3 of
                            instance: GPT2 */
        ,
    _4_flexpwm1_PWMA2 = 4 /*!< Select mux mode: ALT4 mux port: FLEXPWM1_PWM2_A
                             of instance: FLEXPWM1 */
        ,
    _5_gpio_mux3_IO3 = 5 /*!< Select mux mode: ALT5 mux port: GPIO_MUX3_IO03 of
                            instance: GPIO_MUX3 */
        ,
    _6_WDOG1_B =
        6 /*!< Select mux mode: ALT6 mux port: WDOG1_B of instance: WDOG1 */,
    _8_flexio2_FLEXIO4 = 8 /*!< Select mux mode: ALT8 mux port: FLEXIO2_D04 of
                              instance: FLEXIO2 */
        ,
    _9_qtimer4_TIMER0 =
        9 /*!< Select mux mode: ALT9 mux port: TMR4_TIMER0 of instance: TMR4 */
        ,
    _10_gpio9_IO3 = 10 /*!< Select mux mode: ALT10 mux port: GPIO9_IO03 of
                          instance: GPIO9 */
};
static_assert(sizeof(IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_04_MUX_MODE) == 1);

/**
 * Converts IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_04_MUX_MODE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(
    IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_04_MUX_MODE instance)
{
    const char *result = "UNKNOWN IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_04_MUX_MODE";

    switch (instance)
    {
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_04_MUX_MODE::_0_EMVSIM1_PD:
        result = "_0_EMVSIM1_PD";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_04_MUX_MODE::_1_lpuart8_CTS_B:
        result = "_1_lpuart8_CTS_B";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_04_MUX_MODE::_2_enet_1g_1588_EVENT3_IN:
        result = "_2_enet_1g_1588_EVENT3_IN";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_04_MUX_MODE::_3_gpt2_COMPARE3:
        result = "_3_gpt2_COMPARE3";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_04_MUX_MODE::_4_flexpwm1_PWMA2:
        result = "_4_flexpwm1_PWMA2";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_04_MUX_MODE::_5_gpio_mux3_IO3:
        result = "_5_gpio_mux3_IO3";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_04_MUX_MODE::_6_WDOG1_B:
        result = "_6_WDOG1_B";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_04_MUX_MODE::_8_flexio2_FLEXIO4:
        result = "_8_flexio2_FLEXIO4";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_04_MUX_MODE::_9_qtimer4_TIMER0:
        result = "_9_qtimer4_TIMER0";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_04_MUX_MODE::_10_gpio9_IO3:
        result = "_10_gpio9_IO3";
        break;
    }

    return result;
}

/**
 * Converts a C string to IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_04_MUX_MODE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_04_MUX_MODE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_0_EMVSIM1_PD", 13)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_04_MUX_MODE::_0_EMVSIM1_PD;
    }
    else if ((result = !strncmp(data, "_1_lpuart8_CTS_B", 16)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_04_MUX_MODE::_1_lpuart8_CTS_B;
    }
    else if ((result = !strncmp(data, "_2_enet_1g_1588_EVENT3_IN", 25)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_04_MUX_MODE::
            _2_enet_1g_1588_EVENT3_IN;
    }
    else if ((result = !strncmp(data, "_3_gpt2_COMPARE3", 16)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_04_MUX_MODE::_3_gpt2_COMPARE3;
    }
    else if ((result = !strncmp(data, "_4_flexpwm1_PWMA2", 17)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_04_MUX_MODE::_4_flexpwm1_PWMA2;
    }
    else if ((result = !strncmp(data, "_5_gpio_mux3_IO3", 16)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_04_MUX_MODE::_5_gpio_mux3_IO3;
    }
    else if ((result = !strncmp(data, "_6_WDOG1_B", 10)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_04_MUX_MODE::_6_WDOG1_B;
    }
    else if ((result = !strncmp(data, "_8_flexio2_FLEXIO4", 18)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_04_MUX_MODE::_8_flexio2_FLEXIO4;
    }
    else if ((result = !strncmp(data, "_9_qtimer4_TIMER0", 17)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_04_MUX_MODE::_9_qtimer4_TIMER0;
    }
    else if ((result = !strncmp(data, "_10_gpio9_IO3", 13)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_04_MUX_MODE::_10_gpio9_IO3;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7