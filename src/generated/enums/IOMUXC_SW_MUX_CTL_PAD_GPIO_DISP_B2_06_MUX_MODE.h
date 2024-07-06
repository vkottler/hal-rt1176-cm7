/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_06_MUX_MODE : uint8_t
{
    _0_video_mux_LCDIF_DATA14 /*!< Select mux mode: ALT0 mux port:
                                 VIDEO_MUX_LCDIF_DATA14 of instance: VIDEO_MUX
                               */
        ,
    _1_ENET_RX_DATA0 = 1 /*!< Select mux mode: ALT1 mux port: ENET_RX_DATA00 of
                            instance: ENET */
        ,
    _2_lpuart7_TX = 2 /*!< Select mux mode: ALT2 mux port: LPUART7_TXD of
                         instance: LPUART7 */
        ,
    _3_ARM_TRACE_CLK = 3 /*!< Select mux mode: ALT3 mux port: ARM_TRACE_CLK of
                            instance: ARM */
        ,
    _4_sai1_RX_DATA0 = 4 /*!< Select mux mode: ALT4 mux port: SAI1_RX_DATA00 of
                            instance: SAI1 */
        ,
    _5_gpio_mux5_IO7 = 5 /*!< Select mux mode: ALT5 mux port: GPIO_MUX5_IO07 of
                            instance: GPIO_MUX5 */
        ,
    _8_ENET_QOS_RX_DATA0 = 8 /*!< Select mux mode: ALT8 mux port:
                                ENET_QOS_RX_DATA00 of instance: ENET_QOS */
        ,
    _10_gpio11_IO7 = 10 /*!< Select mux mode: ALT10 mux port: GPIO11_IO07 of
                           instance: GPIO11 */
};
static_assert(sizeof(IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_06_MUX_MODE) == 1);

/**
 * Converts IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_06_MUX_MODE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(
    IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_06_MUX_MODE instance)
{
    const char *result =
        "UNKNOWN IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_06_MUX_MODE";

    switch (instance)
    {
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_06_MUX_MODE::
        _0_video_mux_LCDIF_DATA14:
        result = "_0_video_mux_LCDIF_DATA14";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_06_MUX_MODE::_1_ENET_RX_DATA0:
        result = "_1_ENET_RX_DATA0";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_06_MUX_MODE::_2_lpuart7_TX:
        result = "_2_lpuart7_TX";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_06_MUX_MODE::_3_ARM_TRACE_CLK:
        result = "_3_ARM_TRACE_CLK";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_06_MUX_MODE::_4_sai1_RX_DATA0:
        result = "_4_sai1_RX_DATA0";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_06_MUX_MODE::_5_gpio_mux5_IO7:
        result = "_5_gpio_mux5_IO7";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_06_MUX_MODE::_8_ENET_QOS_RX_DATA0:
        result = "_8_ENET_QOS_RX_DATA0";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_06_MUX_MODE::_10_gpio11_IO7:
        result = "_10_gpio11_IO7";
        break;
    }

    return result;
}

/**
 * Converts a C string to IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_06_MUX_MODE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_06_MUX_MODE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_0_video_mux_LCDIF_DATA14", 25)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_06_MUX_MODE::
            _0_video_mux_LCDIF_DATA14;
    }
    else if ((result = !strncmp(data, "_1_ENET_RX_DATA0", 16)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_06_MUX_MODE::_1_ENET_RX_DATA0;
    }
    else if ((result = !strncmp(data, "_2_lpuart7_TX", 13)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_06_MUX_MODE::_2_lpuart7_TX;
    }
    else if ((result = !strncmp(data, "_3_ARM_TRACE_CLK", 16)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_06_MUX_MODE::_3_ARM_TRACE_CLK;
    }
    else if ((result = !strncmp(data, "_4_sai1_RX_DATA0", 16)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_06_MUX_MODE::_4_sai1_RX_DATA0;
    }
    else if ((result = !strncmp(data, "_5_gpio_mux5_IO7", 16)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_06_MUX_MODE::_5_gpio_mux5_IO7;
    }
    else if ((result = !strncmp(data, "_8_ENET_QOS_RX_DATA0", 20)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_06_MUX_MODE::
            _8_ENET_QOS_RX_DATA0;
    }
    else if ((result = !strncmp(data, "_10_gpio11_IO7", 14)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_06_MUX_MODE::_10_gpio11_IO7;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7