/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B1_09_MUX_MODE : uint8_t
{
    _0_video_mux_LCDIF_DATA5 /*!< Select mux mode: ALT0 mux port:
                                VIDEO_MUX_LCDIF_DATA05 of instance: VIDEO_MUX
                              */
        ,
    _1_ENET_1G_TX_DATA0 = 1 /*!< Select mux mode: ALT1 mux port:
                               ENET_1G_TX_DATA00 of instance: ENET_1G */
        ,
    _2_usdhc1_WP =
        2 /*!< Select mux mode: ALT2 mux port: USDHC1_WP of instance: USDHC1 */
        ,
    _3_qtimer4_TIMER0 =
        3 /*!< Select mux mode: ALT3 mux port: TMR4_TIMER0 of instance: TMR4 */
        ,
    _4_XBAR1_INOUT35 = 4 /*!< Select mux mode: ALT4 mux port: XBAR1_INOUT35 of
                            instance: XBAR1 */
        ,
    _5_gpio_mux4_IO30 = 5 /*!< Select mux mode: ALT5 mux port: GPIO_MUX4_IO30
                             of instance: GPIO_MUX4 */
        ,
    _6_src_BT_CFG3 =
        6 /*!< Select mux mode: ALT6 mux port: SRC_BT_CFG03 of instance: SRC */
        ,
    _8_ENET_QOS_TX_DATA0 = 8 /*!< Select mux mode: ALT8 mux port:
                                ENET_QOS_TX_DATA00 of instance: ENET_QOS */
        ,
    _9_lpspi3_PCS2 = 9 /*!< Select mux mode: ALT9 mux port: LPSPI3_PCS2 of
                          instance: LPSPI3 */
        ,
    _10_gpio10_IO30 = 10 /*!< Select mux mode: ALT10 mux port: GPIO10_IO30 of
                            instance: GPIO10 */
};
static_assert(sizeof(IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B1_09_MUX_MODE) == 1);

/**
 * Converts IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B1_09_MUX_MODE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(
    IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B1_09_MUX_MODE instance)
{
    const char *result =
        "UNKNOWN IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B1_09_MUX_MODE";

    switch (instance)
    {
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B1_09_MUX_MODE::
        _0_video_mux_LCDIF_DATA5:
        result = "_0_video_mux_LCDIF_DATA5";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B1_09_MUX_MODE::_1_ENET_1G_TX_DATA0:
        result = "_1_ENET_1G_TX_DATA0";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B1_09_MUX_MODE::_2_usdhc1_WP:
        result = "_2_usdhc1_WP";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B1_09_MUX_MODE::_3_qtimer4_TIMER0:
        result = "_3_qtimer4_TIMER0";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B1_09_MUX_MODE::_4_XBAR1_INOUT35:
        result = "_4_XBAR1_INOUT35";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B1_09_MUX_MODE::_5_gpio_mux4_IO30:
        result = "_5_gpio_mux4_IO30";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B1_09_MUX_MODE::_6_src_BT_CFG3:
        result = "_6_src_BT_CFG3";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B1_09_MUX_MODE::_8_ENET_QOS_TX_DATA0:
        result = "_8_ENET_QOS_TX_DATA0";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B1_09_MUX_MODE::_9_lpspi3_PCS2:
        result = "_9_lpspi3_PCS2";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B1_09_MUX_MODE::_10_gpio10_IO30:
        result = "_10_gpio10_IO30";
        break;
    }

    return result;
}

/**
 * Converts a C string to IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B1_09_MUX_MODE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B1_09_MUX_MODE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_0_video_mux_LCDIF_DATA5", 24)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B1_09_MUX_MODE::
            _0_video_mux_LCDIF_DATA5;
    }
    else if ((result = !strncmp(data, "_1_ENET_1G_TX_DATA0", 19)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B1_09_MUX_MODE::
            _1_ENET_1G_TX_DATA0;
    }
    else if ((result = !strncmp(data, "_2_usdhc1_WP", 12)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B1_09_MUX_MODE::_2_usdhc1_WP;
    }
    else if ((result = !strncmp(data, "_3_qtimer4_TIMER0", 17)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B1_09_MUX_MODE::_3_qtimer4_TIMER0;
    }
    else if ((result = !strncmp(data, "_4_XBAR1_INOUT35", 16)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B1_09_MUX_MODE::_4_XBAR1_INOUT35;
    }
    else if ((result = !strncmp(data, "_5_gpio_mux4_IO30", 17)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B1_09_MUX_MODE::_5_gpio_mux4_IO30;
    }
    else if ((result = !strncmp(data, "_6_src_BT_CFG3", 14)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B1_09_MUX_MODE::_6_src_BT_CFG3;
    }
    else if ((result = !strncmp(data, "_8_ENET_QOS_TX_DATA0", 20)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B1_09_MUX_MODE::
            _8_ENET_QOS_TX_DATA0;
    }
    else if ((result = !strncmp(data, "_9_lpspi3_PCS2", 14)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B1_09_MUX_MODE::_9_lpspi3_PCS2;
    }
    else if ((result = !strncmp(data, "_10_gpio10_IO30", 15)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B1_09_MUX_MODE::_10_gpio10_IO30;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7