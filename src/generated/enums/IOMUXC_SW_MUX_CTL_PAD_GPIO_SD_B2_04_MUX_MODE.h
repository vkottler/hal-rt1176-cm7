/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_04_MUX_MODE : uint8_t
{
    _0_usdhc2_CLK /*!< Select mux mode: ALT0 mux port: USDHC2_CLK of instance:
                     USDHC2 */
        ,
    _1_flexspi1_B_SCLK = 1 /*!< Select mux mode: ALT1 mux port: FLEXSPI1_B_SCLK
                              of instance: FLEXSPI1 */
        ,
    _2_ENET_1G_RX_DATA2 = 2 /*!< Select mux mode: ALT2 mux port:
                               ENET_1G_RX_DATA02 of instance: ENET_1G */
        ,
    _3_flexspi1_A_SS1_B = 3 /*!< Select mux mode: ALT3 mux port:
                               FLEXSPI1_A_SS1_B of instance: FLEXSPI1 */
        ,
    _4_lpspi4_PCS1 = 4 /*!< Select mux mode: ALT4 mux port: LPSPI4_PCS1 of
                          instance: LPSPI4 */
        ,
    _5_gpio_mux4_IO13 = 5 /*!< Select mux mode: ALT5 mux port: GPIO_MUX4_IO13
                             of instance: GPIO_MUX4 */
        ,
    _10_gpio10_IO13 = 10 /*!< Select mux mode: ALT10 mux port: GPIO10_IO13 of
                            instance: GPIO10 */
};
static_assert(sizeof(IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_04_MUX_MODE) == 1);

/**
 * Converts IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_04_MUX_MODE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(
    IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_04_MUX_MODE instance)
{
    const char *result =
        "UNKNOWN IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_04_MUX_MODE";

    switch (instance)
    {
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_04_MUX_MODE::_0_usdhc2_CLK:
        result = "_0_usdhc2_CLK";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_04_MUX_MODE::_1_flexspi1_B_SCLK:
        result = "_1_flexspi1_B_SCLK";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_04_MUX_MODE::_2_ENET_1G_RX_DATA2:
        result = "_2_ENET_1G_RX_DATA2";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_04_MUX_MODE::_3_flexspi1_A_SS1_B:
        result = "_3_flexspi1_A_SS1_B";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_04_MUX_MODE::_4_lpspi4_PCS1:
        result = "_4_lpspi4_PCS1";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_04_MUX_MODE::_5_gpio_mux4_IO13:
        result = "_5_gpio_mux4_IO13";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_04_MUX_MODE::_10_gpio10_IO13:
        result = "_10_gpio10_IO13";
        break;
    }

    return result;
}

/**
 * Converts a C string to IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_04_MUX_MODE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_04_MUX_MODE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_0_usdhc2_CLK", 13)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_04_MUX_MODE::_0_usdhc2_CLK;
    }
    else if ((result = !strncmp(data, "_1_flexspi1_B_SCLK", 18)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_04_MUX_MODE::_1_flexspi1_B_SCLK;
    }
    else if ((result = !strncmp(data, "_2_ENET_1G_RX_DATA2", 19)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_04_MUX_MODE::_2_ENET_1G_RX_DATA2;
    }
    else if ((result = !strncmp(data, "_3_flexspi1_A_SS1_B", 19)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_04_MUX_MODE::_3_flexspi1_A_SS1_B;
    }
    else if ((result = !strncmp(data, "_4_lpspi4_PCS1", 14)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_04_MUX_MODE::_4_lpspi4_PCS1;
    }
    else if ((result = !strncmp(data, "_5_gpio_mux4_IO13", 17)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_04_MUX_MODE::_5_gpio_mux4_IO13;
    }
    else if ((result = !strncmp(data, "_10_gpio10_IO13", 15)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_04_MUX_MODE::_10_gpio10_IO13;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7
