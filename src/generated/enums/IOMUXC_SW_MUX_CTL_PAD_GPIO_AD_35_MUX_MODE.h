/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_35_MUX_MODE : uint8_t
{
    _0_enet_1g_1588_EVENT0_OUT /*!< Select mux mode: ALT0 mux port:
                                  ENET_1G_1588_EVENT0_OUT of instance: ENET_1G
                                */
        ,
    _1_usb_OTG1_OC =
        1 /*!< Select mux mode: ALT1 mux port: USB_OTG1_OC of instance: USB */,
    _2_XBAR1_INOUT19 = 2 /*!< Select mux mode: ALT2 mux port: XBAR1_INOUT19 of
                            instance: XBAR1 */
        ,
    _3_enet_1588_EVENT0_OUT = 3 /*!< Select mux mode: ALT3 mux port:
                                   ENET_1588_EVENT0_OUT of instance: ENET */
        ,
    _4_usdhc1_RESET_B = 4 /*!< Select mux mode: ALT4 mux port: USDHC1_RESET_B
                             of instance: USDHC1 */
        ,
    _5_gpio_mux4_IO2 = 5 /*!< Select mux mode: ALT5 mux port: GPIO_MUX4_IO02 of
                            instance: GPIO_MUX4 */
        ,
    _6_kpp_COL0 =
        6 /*!< Select mux mode: ALT6 mux port: KPP_COL00 of instance: KPP */,
    _8_lpuart10_RTS_B = 8 /*!< Select mux mode: ALT8 mux port: LPUART10_RTS_B
                             of instance: LPUART10 */
        ,
    _9_flexspi1_B_SS1_B = 9 /*!< Select mux mode: ALT9 mux port:
                               FLEXSPI1_B_SS1_B of instance: FLEXSPI1 */
        ,
    _10_gpio10_IO2 = 10 /*!< Select mux mode: ALT10 mux port: GPIO10_IO02 of
                           instance: GPIO10 */
};
static_assert(sizeof(IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_35_MUX_MODE) == 1);

/**
 * Converts IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_35_MUX_MODE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(
    IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_35_MUX_MODE instance)
{
    const char *result = "UNKNOWN IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_35_MUX_MODE";

    switch (instance)
    {
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_35_MUX_MODE::_0_enet_1g_1588_EVENT0_OUT:
        result = "_0_enet_1g_1588_EVENT0_OUT";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_35_MUX_MODE::_1_usb_OTG1_OC:
        result = "_1_usb_OTG1_OC";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_35_MUX_MODE::_2_XBAR1_INOUT19:
        result = "_2_XBAR1_INOUT19";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_35_MUX_MODE::_3_enet_1588_EVENT0_OUT:
        result = "_3_enet_1588_EVENT0_OUT";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_35_MUX_MODE::_4_usdhc1_RESET_B:
        result = "_4_usdhc1_RESET_B";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_35_MUX_MODE::_5_gpio_mux4_IO2:
        result = "_5_gpio_mux4_IO2";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_35_MUX_MODE::_6_kpp_COL0:
        result = "_6_kpp_COL0";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_35_MUX_MODE::_8_lpuart10_RTS_B:
        result = "_8_lpuart10_RTS_B";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_35_MUX_MODE::_9_flexspi1_B_SS1_B:
        result = "_9_flexspi1_B_SS1_B";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_35_MUX_MODE::_10_gpio10_IO2:
        result = "_10_gpio10_IO2";
        break;
    }

    return result;
}

/**
 * Converts a C string to IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_35_MUX_MODE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_35_MUX_MODE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_0_enet_1g_1588_EVENT0_OUT", 26)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_35_MUX_MODE::
            _0_enet_1g_1588_EVENT0_OUT;
    }
    else if ((result = !strncmp(data, "_1_usb_OTG1_OC", 14)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_35_MUX_MODE::_1_usb_OTG1_OC;
    }
    else if ((result = !strncmp(data, "_2_XBAR1_INOUT19", 16)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_35_MUX_MODE::_2_XBAR1_INOUT19;
    }
    else if ((result = !strncmp(data, "_3_enet_1588_EVENT0_OUT", 23)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_35_MUX_MODE::_3_enet_1588_EVENT0_OUT;
    }
    else if ((result = !strncmp(data, "_4_usdhc1_RESET_B", 17)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_35_MUX_MODE::_4_usdhc1_RESET_B;
    }
    else if ((result = !strncmp(data, "_5_gpio_mux4_IO2", 16)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_35_MUX_MODE::_5_gpio_mux4_IO2;
    }
    else if ((result = !strncmp(data, "_6_kpp_COL0", 11)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_35_MUX_MODE::_6_kpp_COL0;
    }
    else if ((result = !strncmp(data, "_8_lpuart10_RTS_B", 17)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_35_MUX_MODE::_8_lpuart10_RTS_B;
    }
    else if ((result = !strncmp(data, "_9_flexspi1_B_SS1_B", 19)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_35_MUX_MODE::_9_flexspi1_B_SS1_B;
    }
    else if ((result = !strncmp(data, "_10_gpio10_IO2", 14)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_35_MUX_MODE::_10_gpio10_IO2;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7
