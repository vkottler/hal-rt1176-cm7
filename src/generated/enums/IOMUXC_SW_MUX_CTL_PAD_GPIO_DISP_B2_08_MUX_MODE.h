/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_08_MUX_MODE : uint8_t
{
    _0_video_mux_LCDIF_DATA16 /*!< Select mux mode: ALT0 mux port:
                                 VIDEO_MUX_LCDIF_DATA16 of instance: VIDEO_MUX
                               */
        ,
    _1_enet_RX_EN =
        1 /*!< Select mux mode: ALT1 mux port: ENET_RX_EN of instance: ENET */,
    _2_lpuart8_TX = 2 /*!< Select mux mode: ALT2 mux port: LPUART8_TXD of
                         instance: LPUART8 */
        ,
    _3_cm7_imxrt_TXEV = 3 /*!< Select mux mode: ALT3 mux port: ARM_CM7_EVENTO
                             of instance: CM7 */
        ,
    _4_sai1_TX_BCLK = 4 /*!< Select mux mode: ALT4 mux port: SAI1_TX_BCLK of
                           instance: SAI1 */
        ,
    _5_gpio_mux5_IO9 = 5 /*!< Select mux mode: ALT5 mux port: GPIO_MUX5_IO09 of
                            instance: GPIO_MUX5 */
        ,
    _8_enet_qos_RX_EN = 8 /*!< Select mux mode: ALT8 mux port: ENET_QOS_RX_EN
                             of instance: ENET_QOS */
        ,
    _9_lpuart1_TX = 9 /*!< Select mux mode: ALT9 mux port: LPUART1_TXD of
                         instance: LPUART1 */
        ,
    _10_gpio11_IO9 = 10 /*!< Select mux mode: ALT10 mux port: GPIO11_IO09 of
                           instance: GPIO11 */
};
static_assert(sizeof(IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_08_MUX_MODE) == 1);

/**
 * Converts IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_08_MUX_MODE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(
    IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_08_MUX_MODE instance)
{
    const char *result =
        "UNKNOWN IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_08_MUX_MODE";

    switch (instance)
    {
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_08_MUX_MODE::
        _0_video_mux_LCDIF_DATA16:
        result = "_0_video_mux_LCDIF_DATA16";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_08_MUX_MODE::_1_enet_RX_EN:
        result = "_1_enet_RX_EN";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_08_MUX_MODE::_2_lpuart8_TX:
        result = "_2_lpuart8_TX";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_08_MUX_MODE::_3_cm7_imxrt_TXEV:
        result = "_3_cm7_imxrt_TXEV";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_08_MUX_MODE::_4_sai1_TX_BCLK:
        result = "_4_sai1_TX_BCLK";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_08_MUX_MODE::_5_gpio_mux5_IO9:
        result = "_5_gpio_mux5_IO9";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_08_MUX_MODE::_8_enet_qos_RX_EN:
        result = "_8_enet_qos_RX_EN";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_08_MUX_MODE::_9_lpuart1_TX:
        result = "_9_lpuart1_TX";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_08_MUX_MODE::_10_gpio11_IO9:
        result = "_10_gpio11_IO9";
        break;
    }

    return result;
}

/**
 * Converts a C string to IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_08_MUX_MODE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_08_MUX_MODE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_0_video_mux_LCDIF_DATA16", 25)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_08_MUX_MODE::
            _0_video_mux_LCDIF_DATA16;
    }
    else if ((result = !strncmp(data, "_1_enet_RX_EN", 13)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_08_MUX_MODE::_1_enet_RX_EN;
    }
    else if ((result = !strncmp(data, "_2_lpuart8_TX", 13)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_08_MUX_MODE::_2_lpuart8_TX;
    }
    else if ((result = !strncmp(data, "_3_cm7_imxrt_TXEV", 17)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_08_MUX_MODE::_3_cm7_imxrt_TXEV;
    }
    else if ((result = !strncmp(data, "_4_sai1_TX_BCLK", 15)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_08_MUX_MODE::_4_sai1_TX_BCLK;
    }
    else if ((result = !strncmp(data, "_5_gpio_mux5_IO9", 16)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_08_MUX_MODE::_5_gpio_mux5_IO9;
    }
    else if ((result = !strncmp(data, "_8_enet_qos_RX_EN", 17)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_08_MUX_MODE::_8_enet_qos_RX_EN;
    }
    else if ((result = !strncmp(data, "_9_lpuart1_TX", 13)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_08_MUX_MODE::_9_lpuart1_TX;
    }
    else if ((result = !strncmp(data, "_10_gpio11_IO9", 14)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_08_MUX_MODE::_10_gpio11_IO9;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7
