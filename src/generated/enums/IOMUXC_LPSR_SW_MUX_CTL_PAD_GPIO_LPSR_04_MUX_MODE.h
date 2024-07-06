/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class IOMUXC_LPSR_SW_MUX_CTL_PAD_GPIO_LPSR_04_MUX_MODE : uint8_t
{
    _0_lpi2c5_SDA /*!< Select mux mode: ALT0 mux port: LPI2C5_SDA of instance:
                     LPI2C5 */
        ,
    _1_lpspi5_SDO = 1 /*!< Select mux mode: ALT1 mux port: LPSPI5_SOUT of
                         instance: LPSPI5 */
        ,
    _2_sai4_TX_BCLK = 2 /*!< Select mux mode: ALT2 mux port: SAI4_TX_BCLK of
                           instance: SAI4 */
        ,
    _3_lpuart12_RTS_B = 3 /*!< Select mux mode: ALT3 mux port: LPUART12_RTS_B
                             of instance: LPUART12 */
        ,
    _5_gpio_mux6_IO4 = 5 /*!< Select mux mode: ALT5 mux port: GPIO_MUX6_IO04 of
                            instance: GPIO_MUX6 */
        ,
    _6_lpuart11_TX = 6 /*!< Select mux mode: ALT6 mux port: LPUART11_TXD of
                          instance: LPUART11 */
        ,
    _10_gpio12_IO4 = 10 /*!< Select mux mode: ALT10 mux port: GPIO12_IO04 of
                           instance: GPIO12 */
};
static_assert(sizeof(IOMUXC_LPSR_SW_MUX_CTL_PAD_GPIO_LPSR_04_MUX_MODE) == 1);

/**
 * Converts IOMUXC_LPSR_SW_MUX_CTL_PAD_GPIO_LPSR_04_MUX_MODE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(
    IOMUXC_LPSR_SW_MUX_CTL_PAD_GPIO_LPSR_04_MUX_MODE instance)
{
    const char *result =
        "UNKNOWN IOMUXC_LPSR_SW_MUX_CTL_PAD_GPIO_LPSR_04_MUX_MODE";

    switch (instance)
    {
    case IOMUXC_LPSR_SW_MUX_CTL_PAD_GPIO_LPSR_04_MUX_MODE::_0_lpi2c5_SDA:
        result = "_0_lpi2c5_SDA";
        break;
    case IOMUXC_LPSR_SW_MUX_CTL_PAD_GPIO_LPSR_04_MUX_MODE::_1_lpspi5_SDO:
        result = "_1_lpspi5_SDO";
        break;
    case IOMUXC_LPSR_SW_MUX_CTL_PAD_GPIO_LPSR_04_MUX_MODE::_2_sai4_TX_BCLK:
        result = "_2_sai4_TX_BCLK";
        break;
    case IOMUXC_LPSR_SW_MUX_CTL_PAD_GPIO_LPSR_04_MUX_MODE::_3_lpuart12_RTS_B:
        result = "_3_lpuart12_RTS_B";
        break;
    case IOMUXC_LPSR_SW_MUX_CTL_PAD_GPIO_LPSR_04_MUX_MODE::_5_gpio_mux6_IO4:
        result = "_5_gpio_mux6_IO4";
        break;
    case IOMUXC_LPSR_SW_MUX_CTL_PAD_GPIO_LPSR_04_MUX_MODE::_6_lpuart11_TX:
        result = "_6_lpuart11_TX";
        break;
    case IOMUXC_LPSR_SW_MUX_CTL_PAD_GPIO_LPSR_04_MUX_MODE::_10_gpio12_IO4:
        result = "_10_gpio12_IO4";
        break;
    }

    return result;
}

/**
 * Converts a C string to IOMUXC_LPSR_SW_MUX_CTL_PAD_GPIO_LPSR_04_MUX_MODE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(
    const char *data, IOMUXC_LPSR_SW_MUX_CTL_PAD_GPIO_LPSR_04_MUX_MODE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_0_lpi2c5_SDA", 13)))
    {
        output =
            IOMUXC_LPSR_SW_MUX_CTL_PAD_GPIO_LPSR_04_MUX_MODE::_0_lpi2c5_SDA;
    }
    else if ((result = !strncmp(data, "_1_lpspi5_SDO", 13)))
    {
        output =
            IOMUXC_LPSR_SW_MUX_CTL_PAD_GPIO_LPSR_04_MUX_MODE::_1_lpspi5_SDO;
    }
    else if ((result = !strncmp(data, "_2_sai4_TX_BCLK", 15)))
    {
        output =
            IOMUXC_LPSR_SW_MUX_CTL_PAD_GPIO_LPSR_04_MUX_MODE::_2_sai4_TX_BCLK;
    }
    else if ((result = !strncmp(data, "_3_lpuart12_RTS_B", 17)))
    {
        output = IOMUXC_LPSR_SW_MUX_CTL_PAD_GPIO_LPSR_04_MUX_MODE::
            _3_lpuart12_RTS_B;
    }
    else if ((result = !strncmp(data, "_5_gpio_mux6_IO4", 16)))
    {
        output =
            IOMUXC_LPSR_SW_MUX_CTL_PAD_GPIO_LPSR_04_MUX_MODE::_5_gpio_mux6_IO4;
    }
    else if ((result = !strncmp(data, "_6_lpuart11_TX", 14)))
    {
        output =
            IOMUXC_LPSR_SW_MUX_CTL_PAD_GPIO_LPSR_04_MUX_MODE::_6_lpuart11_TX;
    }
    else if ((result = !strncmp(data, "_10_gpio12_IO4", 14)))
    {
        output =
            IOMUXC_LPSR_SW_MUX_CTL_PAD_GPIO_LPSR_04_MUX_MODE::_10_gpio12_IO4;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7
