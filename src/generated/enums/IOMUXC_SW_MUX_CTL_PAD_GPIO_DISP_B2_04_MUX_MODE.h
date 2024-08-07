/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_04_MUX_MODE : uint8_t
{
    _0_video_mux_LCDIF_DATA12 /*!< Select mux mode: ALT0 mux port:
                                 VIDEO_MUX_LCDIF_DATA12 of instance: VIDEO_MUX
                               */
        ,
    _1_enet_TX_EN =
        1 /*!< Select mux mode: ALT1 mux port: ENET_TX_EN of instance: ENET */,
    _2_pit1_TRIGGER1 = 2 /*!< Select mux mode: ALT2 mux port: PIT1_TRIGGER1 of
                            instance: PIT1 */
        ,
    _3_ARM_TRACE2 =
        3 /*!< Select mux mode: ALT3 mux port: ARM_TRACE02 of instance: ARM */,
    _4_sai1_RX_SYNC = 4 /*!< Select mux mode: ALT4 mux port: SAI1_RX_SYNC of
                           instance: SAI1 */
        ,
    _5_gpio_mux5_IO5 = 5 /*!< Select mux mode: ALT5 mux port: GPIO_MUX5_IO05 of
                            instance: GPIO_MUX5 */
        ,
    _6_src_BT_CFG10 =
        6 /*!< Select mux mode: ALT6 mux port: SRC_BT_CFG10 of instance: SRC */
        ,
    _8_enet_qos_TX_EN = 8 /*!< Select mux mode: ALT8 mux port: ENET_QOS_TX_EN
                             of instance: ENET_QOS */
        ,
    _10_gpio11_IO5 = 10 /*!< Select mux mode: ALT10 mux port: GPIO11_IO05 of
                           instance: GPIO11 */
};
static_assert(sizeof(IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_04_MUX_MODE) == 1);

/**
 * Converts IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_04_MUX_MODE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(
    IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_04_MUX_MODE instance)
{
    const char *result =
        "UNKNOWN IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_04_MUX_MODE";

    switch (instance)
    {
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_04_MUX_MODE::
        _0_video_mux_LCDIF_DATA12:
        result = "_0_video_mux_LCDIF_DATA12";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_04_MUX_MODE::_1_enet_TX_EN:
        result = "_1_enet_TX_EN";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_04_MUX_MODE::_2_pit1_TRIGGER1:
        result = "_2_pit1_TRIGGER1";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_04_MUX_MODE::_3_ARM_TRACE2:
        result = "_3_ARM_TRACE2";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_04_MUX_MODE::_4_sai1_RX_SYNC:
        result = "_4_sai1_RX_SYNC";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_04_MUX_MODE::_5_gpio_mux5_IO5:
        result = "_5_gpio_mux5_IO5";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_04_MUX_MODE::_6_src_BT_CFG10:
        result = "_6_src_BT_CFG10";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_04_MUX_MODE::_8_enet_qos_TX_EN:
        result = "_8_enet_qos_TX_EN";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_04_MUX_MODE::_10_gpio11_IO5:
        result = "_10_gpio11_IO5";
        break;
    }

    return result;
}

/**
 * Converts a C string to IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_04_MUX_MODE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_04_MUX_MODE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_0_video_mux_LCDIF_DATA12", 25)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_04_MUX_MODE::
            _0_video_mux_LCDIF_DATA12;
    }
    else if ((result = !strncmp(data, "_1_enet_TX_EN", 13)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_04_MUX_MODE::_1_enet_TX_EN;
    }
    else if ((result = !strncmp(data, "_2_pit1_TRIGGER1", 16)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_04_MUX_MODE::_2_pit1_TRIGGER1;
    }
    else if ((result = !strncmp(data, "_3_ARM_TRACE2", 13)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_04_MUX_MODE::_3_ARM_TRACE2;
    }
    else if ((result = !strncmp(data, "_4_sai1_RX_SYNC", 15)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_04_MUX_MODE::_4_sai1_RX_SYNC;
    }
    else if ((result = !strncmp(data, "_5_gpio_mux5_IO5", 16)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_04_MUX_MODE::_5_gpio_mux5_IO5;
    }
    else if ((result = !strncmp(data, "_6_src_BT_CFG10", 15)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_04_MUX_MODE::_6_src_BT_CFG10;
    }
    else if ((result = !strncmp(data, "_8_enet_qos_TX_EN", 17)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_04_MUX_MODE::_8_enet_qos_TX_EN;
    }
    else if ((result = !strncmp(data, "_10_gpio11_IO5", 14)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_04_MUX_MODE::_10_gpio11_IO5;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7
