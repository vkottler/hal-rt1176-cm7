/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_08_MUX_MODE : uint8_t
{
    _0_usbphy2_OTG_ID /*!< Select mux mode: ALT0 mux port: USBPHY2_OTG_ID of
                         instance: USBPHY2 */
        ,
    _1_lpi2c1_SCL = 1 /*!< Select mux mode: ALT1 mux port: LPI2C1_SCL of
                         instance: LPI2C1 */
        ,
    _2_EMVSIM2_RST_B = 2 /*!< Select mux mode: ALT2 mux port: EMVSIM2_RST of
                            instance: EMVSIM2 */
        ,
    _3_gpt3_COMPARE1 = 3 /*!< Select mux mode: ALT3 mux port: GPT3_COMPARE1 of
                            instance: GPT3 */
        ,
    _4_video_mux_CSI_DATA13 =
        4 /*!< Select mux mode: ALT4 mux port: VIDEO_MUX_CSI_DATA13 of
             instance: VIDEO_MUX */
        ,
    _5_gpio_mux3_IO7 = 5 /*!< Select mux mode: ALT5 mux port: GPIO_MUX3_IO07 of
                            instance: GPIO_MUX3 */
        ,
    _6_enet_1588_EVENT2_IN = 6 /*!< Select mux mode: ALT6 mux port:
                                  ENET_1588_EVENT2_IN of instance: ENET */
        ,
    _8_flexio2_FLEXIO8 = 8 /*!< Select mux mode: ALT8 mux port: FLEXIO2_D08 of
                              instance: FLEXIO2 */
        ,
    _10_gpio9_IO7 = 10 /*!< Select mux mode: ALT10 mux port: GPIO9_IO07 of
                          instance: GPIO9 */
        ,
    _11_flexpwm1_PWMX2 = 11 /*!< Select mux mode: ALT11 mux port:
                               FLEXPWM1_PWM2_X of instance: FLEXPWM1 */
};
static_assert(sizeof(IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_08_MUX_MODE) == 1);

/**
 * Converts IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_08_MUX_MODE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(
    IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_08_MUX_MODE instance)
{
    const char *result = "UNKNOWN IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_08_MUX_MODE";

    switch (instance)
    {
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_08_MUX_MODE::_0_usbphy2_OTG_ID:
        result = "_0_usbphy2_OTG_ID";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_08_MUX_MODE::_1_lpi2c1_SCL:
        result = "_1_lpi2c1_SCL";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_08_MUX_MODE::_2_EMVSIM2_RST_B:
        result = "_2_EMVSIM2_RST_B";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_08_MUX_MODE::_3_gpt3_COMPARE1:
        result = "_3_gpt3_COMPARE1";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_08_MUX_MODE::_4_video_mux_CSI_DATA13:
        result = "_4_video_mux_CSI_DATA13";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_08_MUX_MODE::_5_gpio_mux3_IO7:
        result = "_5_gpio_mux3_IO7";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_08_MUX_MODE::_6_enet_1588_EVENT2_IN:
        result = "_6_enet_1588_EVENT2_IN";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_08_MUX_MODE::_8_flexio2_FLEXIO8:
        result = "_8_flexio2_FLEXIO8";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_08_MUX_MODE::_10_gpio9_IO7:
        result = "_10_gpio9_IO7";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_08_MUX_MODE::_11_flexpwm1_PWMX2:
        result = "_11_flexpwm1_PWMX2";
        break;
    }

    return result;
}

/**
 * Converts a C string to IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_08_MUX_MODE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_08_MUX_MODE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_0_usbphy2_OTG_ID", 17)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_08_MUX_MODE::_0_usbphy2_OTG_ID;
    }
    else if ((result = !strncmp(data, "_1_lpi2c1_SCL", 13)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_08_MUX_MODE::_1_lpi2c1_SCL;
    }
    else if ((result = !strncmp(data, "_2_EMVSIM2_RST_B", 16)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_08_MUX_MODE::_2_EMVSIM2_RST_B;
    }
    else if ((result = !strncmp(data, "_3_gpt3_COMPARE1", 16)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_08_MUX_MODE::_3_gpt3_COMPARE1;
    }
    else if ((result = !strncmp(data, "_4_video_mux_CSI_DATA13", 23)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_08_MUX_MODE::_4_video_mux_CSI_DATA13;
    }
    else if ((result = !strncmp(data, "_5_gpio_mux3_IO7", 16)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_08_MUX_MODE::_5_gpio_mux3_IO7;
    }
    else if ((result = !strncmp(data, "_6_enet_1588_EVENT2_IN", 22)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_08_MUX_MODE::_6_enet_1588_EVENT2_IN;
    }
    else if ((result = !strncmp(data, "_8_flexio2_FLEXIO8", 18)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_08_MUX_MODE::_8_flexio2_FLEXIO8;
    }
    else if ((result = !strncmp(data, "_10_gpio9_IO7", 13)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_08_MUX_MODE::_10_gpio9_IO7;
    }
    else if ((result = !strncmp(data, "_11_flexpwm1_PWMX2", 18)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_08_MUX_MODE::_11_flexpwm1_PWMX2;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7
