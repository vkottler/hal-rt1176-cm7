/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B1_11_MUX_MODE : uint8_t
{
    _0_video_mux_LCDIF_DATA7 /*!< Select mux mode: ALT0 mux port:
                                VIDEO_MUX_LCDIF_DATA07 of instance: VIDEO_MUX
                              */
        ,
    _1_enet_1g_TX_CLK_IO = 1 /*!< Select mux mode: ALT1 mux port:
                                ENET_1G_TX_CLK_IO of instance: ENET_1G */
        ,
    _2_enet_1g_REF_CLK = 2 /*!< Select mux mode: ALT2 mux port: ENET_1G_REF_CLK
                              of instance: ENET_1G */
        ,
    _3_qtimer4_TIMER2 =
        3 /*!< Select mux mode: ALT3 mux port: TMR4_TIMER2 of instance: TMR4 */
        ,
    _4_XBAR1_INOUT37 = 4 /*!< Select mux mode: ALT4 mux port: XBAR1_INOUT37 of
                            instance: XBAR1 */
        ,
    _5_gpio_mux5_IO0 = 5 /*!< Select mux mode: ALT5 mux port: GPIO_MUX5_IO00 of
                            instance: GPIO_MUX5 */
        ,
    _6_src_BT_CFG5 =
        6 /*!< Select mux mode: ALT6 mux port: SRC_BT_CFG05 of instance: SRC */
        ,
    _8_CCM_enet_qos_clock_generate_TX_CLK =
        8 /*!< Select mux mode: ALT8 mux port: ENET_QOS_TX_CLK of instance:
             ENET_QOS */
        ,
    _9_CCM_enet_qos_clock_generate_REF_CLK =
        9 /*!< Select mux mode: ALT9 mux port: ENET_QOS_REF_CLK of instance:
             ENET_QOS */
        ,
    _10_gpio11_IO0 = 10 /*!< Select mux mode: ALT10 mux port: GPIO11_IO00 of
                           instance: GPIO11 */
};
static_assert(sizeof(IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B1_11_MUX_MODE) == 1);

/**
 * Converts IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B1_11_MUX_MODE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(
    IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B1_11_MUX_MODE instance)
{
    const char *result =
        "UNKNOWN IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B1_11_MUX_MODE";

    switch (instance)
    {
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B1_11_MUX_MODE::
        _0_video_mux_LCDIF_DATA7:
        result = "_0_video_mux_LCDIF_DATA7";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B1_11_MUX_MODE::_1_enet_1g_TX_CLK_IO:
        result = "_1_enet_1g_TX_CLK_IO";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B1_11_MUX_MODE::_2_enet_1g_REF_CLK:
        result = "_2_enet_1g_REF_CLK";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B1_11_MUX_MODE::_3_qtimer4_TIMER2:
        result = "_3_qtimer4_TIMER2";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B1_11_MUX_MODE::_4_XBAR1_INOUT37:
        result = "_4_XBAR1_INOUT37";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B1_11_MUX_MODE::_5_gpio_mux5_IO0:
        result = "_5_gpio_mux5_IO0";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B1_11_MUX_MODE::_6_src_BT_CFG5:
        result = "_6_src_BT_CFG5";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B1_11_MUX_MODE::
        _8_CCM_enet_qos_clock_generate_TX_CLK:
        result = "_8_CCM_enet_qos_clock_generate_TX_CLK";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B1_11_MUX_MODE::
        _9_CCM_enet_qos_clock_generate_REF_CLK:
        result = "_9_CCM_enet_qos_clock_generate_REF_CLK";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B1_11_MUX_MODE::_10_gpio11_IO0:
        result = "_10_gpio11_IO0";
        break;
    }

    return result;
}

/**
 * Converts a C string to IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B1_11_MUX_MODE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B1_11_MUX_MODE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_0_video_mux_LCDIF_DATA7", 24)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B1_11_MUX_MODE::
            _0_video_mux_LCDIF_DATA7;
    }
    else if ((result = !strncmp(data, "_1_enet_1g_TX_CLK_IO", 20)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B1_11_MUX_MODE::
            _1_enet_1g_TX_CLK_IO;
    }
    else if ((result = !strncmp(data, "_2_enet_1g_REF_CLK", 18)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B1_11_MUX_MODE::_2_enet_1g_REF_CLK;
    }
    else if ((result = !strncmp(data, "_3_qtimer4_TIMER2", 17)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B1_11_MUX_MODE::_3_qtimer4_TIMER2;
    }
    else if ((result = !strncmp(data, "_4_XBAR1_INOUT37", 16)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B1_11_MUX_MODE::_4_XBAR1_INOUT37;
    }
    else if ((result = !strncmp(data, "_5_gpio_mux5_IO0", 16)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B1_11_MUX_MODE::_5_gpio_mux5_IO0;
    }
    else if ((result = !strncmp(data, "_6_src_BT_CFG5", 14)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B1_11_MUX_MODE::_6_src_BT_CFG5;
    }
    else if ((result =
                  !strncmp(data, "_8_CCM_enet_qos_clock_generate_TX_CLK", 37)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B1_11_MUX_MODE::
            _8_CCM_enet_qos_clock_generate_TX_CLK;
    }
    else if ((result = !strncmp(data, "_9_CCM_enet_qos_clock_generate_REF_CLK",
                                38)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B1_11_MUX_MODE::
            _9_CCM_enet_qos_clock_generate_REF_CLK;
    }
    else if ((result = !strncmp(data, "_10_gpio11_IO0", 14)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B1_11_MUX_MODE::_10_gpio11_IO0;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7