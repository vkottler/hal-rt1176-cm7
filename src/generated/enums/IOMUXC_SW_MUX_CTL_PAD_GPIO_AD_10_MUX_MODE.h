/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_10_MUX_MODE : uint8_t
{
    _0_usb_OTG1_PWR /*!< Select mux mode: ALT0 mux port: USB_OTG1_PWR of
                       instance: USB */
        ,
    _1_lpi2c1_SCLS = 1 /*!< Select mux mode: ALT1 mux port: LPI2C1_SCLS of
                          instance: LPI2C1 */
        ,
    _2_EMVSIM2_PD = 2 /*!< Select mux mode: ALT2 mux port: EMVSIM2_PD of
                         instance: EMVSIM2 */
        ,
    _3_gpt3_COMPARE3 = 3 /*!< Select mux mode: ALT3 mux port: GPT3_COMPARE3 of
                            instance: GPT3 */
        ,
    _4_video_mux_CSI_DATA11 =
        4 /*!< Select mux mode: ALT4 mux port: VIDEO_MUX_CSI_DATA11 of
             instance: VIDEO_MUX */
        ,
    _5_gpio_mux3_IO9 = 5 /*!< Select mux mode: ALT5 mux port: GPIO_MUX3_IO09 of
                            instance: GPIO_MUX3 */
        ,
    _6_enet_1588_EVENT3_IN = 6 /*!< Select mux mode: ALT6 mux port:
                                  ENET_1588_EVENT3_IN of instance: ENET */
        ,
    _8_flexio2_FLEXIO10 = 8 /*!< Select mux mode: ALT8 mux port: FLEXIO2_D10 of
                               instance: FLEXIO2 */
        ,
    _10_gpio9_IO9 = 10 /*!< Select mux mode: ALT10 mux port: GPIO9_IO09 of
                          instance: GPIO9 */
        ,
    _11_flexpwm2_PWMX0 = 11 /*!< Select mux mode: ALT11 mux port:
                               FLEXPWM2_PWM0_X of instance: FLEXPWM2 */
};
static_assert(sizeof(IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_10_MUX_MODE) == 1);

/**
 * Converts IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_10_MUX_MODE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(
    IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_10_MUX_MODE instance)
{
    const char *result = "UNKNOWN IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_10_MUX_MODE";

    switch (instance)
    {
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_10_MUX_MODE::_0_usb_OTG1_PWR:
        result = "_0_usb_OTG1_PWR";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_10_MUX_MODE::_1_lpi2c1_SCLS:
        result = "_1_lpi2c1_SCLS";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_10_MUX_MODE::_2_EMVSIM2_PD:
        result = "_2_EMVSIM2_PD";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_10_MUX_MODE::_3_gpt3_COMPARE3:
        result = "_3_gpt3_COMPARE3";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_10_MUX_MODE::_4_video_mux_CSI_DATA11:
        result = "_4_video_mux_CSI_DATA11";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_10_MUX_MODE::_5_gpio_mux3_IO9:
        result = "_5_gpio_mux3_IO9";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_10_MUX_MODE::_6_enet_1588_EVENT3_IN:
        result = "_6_enet_1588_EVENT3_IN";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_10_MUX_MODE::_8_flexio2_FLEXIO10:
        result = "_8_flexio2_FLEXIO10";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_10_MUX_MODE::_10_gpio9_IO9:
        result = "_10_gpio9_IO9";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_10_MUX_MODE::_11_flexpwm2_PWMX0:
        result = "_11_flexpwm2_PWMX0";
        break;
    }

    return result;
}

/**
 * Converts a C string to IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_10_MUX_MODE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_10_MUX_MODE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_0_usb_OTG1_PWR", 15)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_10_MUX_MODE::_0_usb_OTG1_PWR;
    }
    else if ((result = !strncmp(data, "_1_lpi2c1_SCLS", 14)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_10_MUX_MODE::_1_lpi2c1_SCLS;
    }
    else if ((result = !strncmp(data, "_2_EMVSIM2_PD", 13)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_10_MUX_MODE::_2_EMVSIM2_PD;
    }
    else if ((result = !strncmp(data, "_3_gpt3_COMPARE3", 16)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_10_MUX_MODE::_3_gpt3_COMPARE3;
    }
    else if ((result = !strncmp(data, "_4_video_mux_CSI_DATA11", 23)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_10_MUX_MODE::_4_video_mux_CSI_DATA11;
    }
    else if ((result = !strncmp(data, "_5_gpio_mux3_IO9", 16)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_10_MUX_MODE::_5_gpio_mux3_IO9;
    }
    else if ((result = !strncmp(data, "_6_enet_1588_EVENT3_IN", 22)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_10_MUX_MODE::_6_enet_1588_EVENT3_IN;
    }
    else if ((result = !strncmp(data, "_8_flexio2_FLEXIO10", 19)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_10_MUX_MODE::_8_flexio2_FLEXIO10;
    }
    else if ((result = !strncmp(data, "_10_gpio9_IO9", 13)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_10_MUX_MODE::_10_gpio9_IO9;
    }
    else if ((result = !strncmp(data, "_11_flexpwm2_PWMX0", 18)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_10_MUX_MODE::_11_flexpwm2_PWMX0;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7
