/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_02_MUX_MODE : uint8_t
{
    _0_EMVSIM1_RST_B /*!< Select mux mode: ALT0 mux port: EMVSIM1_RST of
                        instance: EMVSIM1 */
        ,
    _1_lpuart7_CTS_B = 1 /*!< Select mux mode: ALT1 mux port: LPUART7_CTS_B of
                            instance: LPUART7 */
        ,
    _2_enet_1g_1588_EVENT2_IN =
        2 /*!< Select mux mode: ALT2 mux port: ENET_1G_1588_EVENT2_IN of
             instance: ENET_1G */
        ,
    _3_gpt2_COMPARE1 = 3 /*!< Select mux mode: ALT3 mux port: GPT2_COMPARE1 of
                            instance: GPT2 */
        ,
    _4_flexpwm1_PWMA1 = 4 /*!< Select mux mode: ALT4 mux port: FLEXPWM1_PWM1_A
                             of instance: FLEXPWM1 */
        ,
    _5_gpio_mux3_IO1 = 5 /*!< Select mux mode: ALT5 mux port: GPIO_MUX3_IO01 of
                            instance: GPIO_MUX3 */
        ,
    _6_lpuart8_TX = 6 /*!< Select mux mode: ALT6 mux port: LPUART8_TXD of
                         instance: LPUART8 */
        ,
    _8_flexio2_FLEXIO2 = 8 /*!< Select mux mode: ALT8 mux port: FLEXIO2_D02 of
                              instance: FLEXIO2 */
        ,
    _9_video_mux_EXT_DCIC1 = 9 /*!< Select mux mode: ALT9 mux port:
                                  VIDEO_MUX_EXT_DCIC1 of instance: VIDEO_MUX */
        ,
    _10_gpio9_IO1 = 10 /*!< Select mux mode: ALT10 mux port: GPIO9_IO01 of
                          instance: GPIO9 */
};
static_assert(sizeof(IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_02_MUX_MODE) == 1);

/**
 * Converts IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_02_MUX_MODE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(
    IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_02_MUX_MODE instance)
{
    const char *result = "UNKNOWN IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_02_MUX_MODE";

    switch (instance)
    {
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_02_MUX_MODE::_0_EMVSIM1_RST_B:
        result = "_0_EMVSIM1_RST_B";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_02_MUX_MODE::_1_lpuart7_CTS_B:
        result = "_1_lpuart7_CTS_B";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_02_MUX_MODE::_2_enet_1g_1588_EVENT2_IN:
        result = "_2_enet_1g_1588_EVENT2_IN";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_02_MUX_MODE::_3_gpt2_COMPARE1:
        result = "_3_gpt2_COMPARE1";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_02_MUX_MODE::_4_flexpwm1_PWMA1:
        result = "_4_flexpwm1_PWMA1";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_02_MUX_MODE::_5_gpio_mux3_IO1:
        result = "_5_gpio_mux3_IO1";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_02_MUX_MODE::_6_lpuart8_TX:
        result = "_6_lpuart8_TX";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_02_MUX_MODE::_8_flexio2_FLEXIO2:
        result = "_8_flexio2_FLEXIO2";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_02_MUX_MODE::_9_video_mux_EXT_DCIC1:
        result = "_9_video_mux_EXT_DCIC1";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_02_MUX_MODE::_10_gpio9_IO1:
        result = "_10_gpio9_IO1";
        break;
    }

    return result;
}

/**
 * Converts a C string to IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_02_MUX_MODE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_02_MUX_MODE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_0_EMVSIM1_RST_B", 16)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_02_MUX_MODE::_0_EMVSIM1_RST_B;
    }
    else if ((result = !strncmp(data, "_1_lpuart7_CTS_B", 16)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_02_MUX_MODE::_1_lpuart7_CTS_B;
    }
    else if ((result = !strncmp(data, "_2_enet_1g_1588_EVENT2_IN", 25)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_02_MUX_MODE::
            _2_enet_1g_1588_EVENT2_IN;
    }
    else if ((result = !strncmp(data, "_3_gpt2_COMPARE1", 16)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_02_MUX_MODE::_3_gpt2_COMPARE1;
    }
    else if ((result = !strncmp(data, "_4_flexpwm1_PWMA1", 17)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_02_MUX_MODE::_4_flexpwm1_PWMA1;
    }
    else if ((result = !strncmp(data, "_5_gpio_mux3_IO1", 16)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_02_MUX_MODE::_5_gpio_mux3_IO1;
    }
    else if ((result = !strncmp(data, "_6_lpuart8_TX", 13)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_02_MUX_MODE::_6_lpuart8_TX;
    }
    else if ((result = !strncmp(data, "_8_flexio2_FLEXIO2", 18)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_02_MUX_MODE::_8_flexio2_FLEXIO2;
    }
    else if ((result = !strncmp(data, "_9_video_mux_EXT_DCIC1", 22)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_02_MUX_MODE::_9_video_mux_EXT_DCIC1;
    }
    else if ((result = !strncmp(data, "_10_gpio9_IO1", 13)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_02_MUX_MODE::_10_gpio9_IO1;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7
