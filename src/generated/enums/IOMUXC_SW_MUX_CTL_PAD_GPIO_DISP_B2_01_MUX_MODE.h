/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_01_MUX_MODE : uint8_t
{
    _0_video_mux_LCDIF_DATA9 /*!< Select mux mode: ALT0 mux port:
                                VIDEO_MUX_LCDIF_DATA09 of instance: VIDEO_MUX
                              */
        ,
    _1_usdhc1_VSELECT = 1 /*!< Select mux mode: ALT1 mux port: USDHC1_VSELECT
                             of instance: USDHC1 */
        ,
    _2_mqs_LEFT =
        2 /*!< Select mux mode: ALT2 mux port: MQS_LEFT of instance: MQS */,
    _3_WDOG2_B =
        3 /*!< Select mux mode: ALT3 mux port: WDOG2_B of instance: WDOG2 */,
    _4_sai1_TX_DATA2 = 4 /*!< Select mux mode: ALT4 mux port: SAI1_TX_DATA02 of
                            instance: SAI1 */
        ,
    _5_gpio_mux5_IO2 = 5 /*!< Select mux mode: ALT5 mux port: GPIO_MUX5_IO02 of
                            instance: GPIO_MUX5 */
        ,
    _6_src_BT_CFG7 =
        6 /*!< Select mux mode: ALT6 mux port: SRC_BT_CFG07 of instance: SRC */
        ,
    _8_EWM_OUT_B =
        8 /*!< Select mux mode: ALT8 mux port: EWM_OUT_B of instance: EWM */,
    _9_CCM_ENET_REF_CLK_25M = 9 /*!< Select mux mode: ALT9 mux port:
                                   CCM_ENET_REF_CLK_25M of instance: CCM */
        ,
    _10_gpio11_IO2 = 10 /*!< Select mux mode: ALT10 mux port: GPIO11_IO02 of
                           instance: GPIO11 */
};
static_assert(sizeof(IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_01_MUX_MODE) == 1);

/**
 * Converts IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_01_MUX_MODE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(
    IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_01_MUX_MODE instance)
{
    const char *result =
        "UNKNOWN IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_01_MUX_MODE";

    switch (instance)
    {
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_01_MUX_MODE::
        _0_video_mux_LCDIF_DATA9:
        result = "_0_video_mux_LCDIF_DATA9";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_01_MUX_MODE::_1_usdhc1_VSELECT:
        result = "_1_usdhc1_VSELECT";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_01_MUX_MODE::_2_mqs_LEFT:
        result = "_2_mqs_LEFT";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_01_MUX_MODE::_3_WDOG2_B:
        result = "_3_WDOG2_B";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_01_MUX_MODE::_4_sai1_TX_DATA2:
        result = "_4_sai1_TX_DATA2";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_01_MUX_MODE::_5_gpio_mux5_IO2:
        result = "_5_gpio_mux5_IO2";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_01_MUX_MODE::_6_src_BT_CFG7:
        result = "_6_src_BT_CFG7";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_01_MUX_MODE::_8_EWM_OUT_B:
        result = "_8_EWM_OUT_B";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_01_MUX_MODE::
        _9_CCM_ENET_REF_CLK_25M:
        result = "_9_CCM_ENET_REF_CLK_25M";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_01_MUX_MODE::_10_gpio11_IO2:
        result = "_10_gpio11_IO2";
        break;
    }

    return result;
}

/**
 * Converts a C string to IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_01_MUX_MODE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_01_MUX_MODE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_0_video_mux_LCDIF_DATA9", 24)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_01_MUX_MODE::
            _0_video_mux_LCDIF_DATA9;
    }
    else if ((result = !strncmp(data, "_1_usdhc1_VSELECT", 17)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_01_MUX_MODE::_1_usdhc1_VSELECT;
    }
    else if ((result = !strncmp(data, "_2_mqs_LEFT", 11)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_01_MUX_MODE::_2_mqs_LEFT;
    }
    else if ((result = !strncmp(data, "_3_WDOG2_B", 10)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_01_MUX_MODE::_3_WDOG2_B;
    }
    else if ((result = !strncmp(data, "_4_sai1_TX_DATA2", 16)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_01_MUX_MODE::_4_sai1_TX_DATA2;
    }
    else if ((result = !strncmp(data, "_5_gpio_mux5_IO2", 16)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_01_MUX_MODE::_5_gpio_mux5_IO2;
    }
    else if ((result = !strncmp(data, "_6_src_BT_CFG7", 14)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_01_MUX_MODE::_6_src_BT_CFG7;
    }
    else if ((result = !strncmp(data, "_8_EWM_OUT_B", 12)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_01_MUX_MODE::_8_EWM_OUT_B;
    }
    else if ((result = !strncmp(data, "_9_CCM_ENET_REF_CLK_25M", 23)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_01_MUX_MODE::
            _9_CCM_ENET_REF_CLK_25M;
    }
    else if ((result = !strncmp(data, "_10_gpio11_IO2", 14)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_01_MUX_MODE::_10_gpio11_IO2;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7
