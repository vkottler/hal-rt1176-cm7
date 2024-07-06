/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class IOMUXC_LPSR_SW_MUX_CTL_PAD_GPIO_LPSR_10_MUX_MODE : uint8_t
{
    _0_jtag_mux_TRSTB /*!< Select mux mode: ALT0 mux port: JTAG_MUX_TRSTB of
                         instance: JTAG_MUX */
        ,
    _1_lpuart11_CTS_B = 1 /*!< Select mux mode: ALT1 mux port: LPUART11_CTS_B
                             of instance: LPUART11 */
        ,
    _2_lpi2c6_SDA = 2 /*!< Select mux mode: ALT2 mux port: LPI2C6_SDA of
                         instance: LPI2C6 */
        ,
    _3_mic_BITSTREAM1 = 3 /*!< Select mux mode: ALT3 mux port: MIC_BITSTREAM1
                             of instance: MIC */
        ,
    _4_lpspi6_SCK = 4 /*!< Select mux mode: ALT4 mux port: LPSPI6_SCK of
                         instance: LPSPI6 */
        ,
    _5_gpio_mux6_IO10 = 5 /*!< Select mux mode: ALT5 mux port: GPIO_MUX6_IO10
                             of instance: GPIO_MUX6 */
        ,
    _6_lpi2c5_SCLS = 6 /*!< Select mux mode: ALT6 mux port: LPI2C5_SCLS of
                          instance: LPI2C5 */
        ,
    _7_sai4_TX_SYNC = 7 /*!< Select mux mode: ALT7 mux port: SAI4_TX_SYNC of
                           instance: SAI4 */
        ,
    _8_lpuart12_TX = 8 /*!< Select mux mode: ALT8 mux port: LPUART12_TXD of
                          instance: LPUART12 */
        ,
    _10_gpio12_IO10 = 10 /*!< Select mux mode: ALT10 mux port: GPIO12_IO10 of
                            instance: GPIO12 */
};
static_assert(sizeof(IOMUXC_LPSR_SW_MUX_CTL_PAD_GPIO_LPSR_10_MUX_MODE) == 1);

/**
 * Converts IOMUXC_LPSR_SW_MUX_CTL_PAD_GPIO_LPSR_10_MUX_MODE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(
    IOMUXC_LPSR_SW_MUX_CTL_PAD_GPIO_LPSR_10_MUX_MODE instance)
{
    const char *result =
        "UNKNOWN IOMUXC_LPSR_SW_MUX_CTL_PAD_GPIO_LPSR_10_MUX_MODE";

    switch (instance)
    {
    case IOMUXC_LPSR_SW_MUX_CTL_PAD_GPIO_LPSR_10_MUX_MODE::_0_jtag_mux_TRSTB:
        result = "_0_jtag_mux_TRSTB";
        break;
    case IOMUXC_LPSR_SW_MUX_CTL_PAD_GPIO_LPSR_10_MUX_MODE::_1_lpuart11_CTS_B:
        result = "_1_lpuart11_CTS_B";
        break;
    case IOMUXC_LPSR_SW_MUX_CTL_PAD_GPIO_LPSR_10_MUX_MODE::_2_lpi2c6_SDA:
        result = "_2_lpi2c6_SDA";
        break;
    case IOMUXC_LPSR_SW_MUX_CTL_PAD_GPIO_LPSR_10_MUX_MODE::_3_mic_BITSTREAM1:
        result = "_3_mic_BITSTREAM1";
        break;
    case IOMUXC_LPSR_SW_MUX_CTL_PAD_GPIO_LPSR_10_MUX_MODE::_4_lpspi6_SCK:
        result = "_4_lpspi6_SCK";
        break;
    case IOMUXC_LPSR_SW_MUX_CTL_PAD_GPIO_LPSR_10_MUX_MODE::_5_gpio_mux6_IO10:
        result = "_5_gpio_mux6_IO10";
        break;
    case IOMUXC_LPSR_SW_MUX_CTL_PAD_GPIO_LPSR_10_MUX_MODE::_6_lpi2c5_SCLS:
        result = "_6_lpi2c5_SCLS";
        break;
    case IOMUXC_LPSR_SW_MUX_CTL_PAD_GPIO_LPSR_10_MUX_MODE::_7_sai4_TX_SYNC:
        result = "_7_sai4_TX_SYNC";
        break;
    case IOMUXC_LPSR_SW_MUX_CTL_PAD_GPIO_LPSR_10_MUX_MODE::_8_lpuart12_TX:
        result = "_8_lpuart12_TX";
        break;
    case IOMUXC_LPSR_SW_MUX_CTL_PAD_GPIO_LPSR_10_MUX_MODE::_10_gpio12_IO10:
        result = "_10_gpio12_IO10";
        break;
    }

    return result;
}

/**
 * Converts a C string to IOMUXC_LPSR_SW_MUX_CTL_PAD_GPIO_LPSR_10_MUX_MODE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(
    const char *data, IOMUXC_LPSR_SW_MUX_CTL_PAD_GPIO_LPSR_10_MUX_MODE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_0_jtag_mux_TRSTB", 17)))
    {
        output = IOMUXC_LPSR_SW_MUX_CTL_PAD_GPIO_LPSR_10_MUX_MODE::
            _0_jtag_mux_TRSTB;
    }
    else if ((result = !strncmp(data, "_1_lpuart11_CTS_B", 17)))
    {
        output = IOMUXC_LPSR_SW_MUX_CTL_PAD_GPIO_LPSR_10_MUX_MODE::
            _1_lpuart11_CTS_B;
    }
    else if ((result = !strncmp(data, "_2_lpi2c6_SDA", 13)))
    {
        output =
            IOMUXC_LPSR_SW_MUX_CTL_PAD_GPIO_LPSR_10_MUX_MODE::_2_lpi2c6_SDA;
    }
    else if ((result = !strncmp(data, "_3_mic_BITSTREAM1", 17)))
    {
        output = IOMUXC_LPSR_SW_MUX_CTL_PAD_GPIO_LPSR_10_MUX_MODE::
            _3_mic_BITSTREAM1;
    }
    else if ((result = !strncmp(data, "_4_lpspi6_SCK", 13)))
    {
        output =
            IOMUXC_LPSR_SW_MUX_CTL_PAD_GPIO_LPSR_10_MUX_MODE::_4_lpspi6_SCK;
    }
    else if ((result = !strncmp(data, "_5_gpio_mux6_IO10", 17)))
    {
        output = IOMUXC_LPSR_SW_MUX_CTL_PAD_GPIO_LPSR_10_MUX_MODE::
            _5_gpio_mux6_IO10;
    }
    else if ((result = !strncmp(data, "_6_lpi2c5_SCLS", 14)))
    {
        output =
            IOMUXC_LPSR_SW_MUX_CTL_PAD_GPIO_LPSR_10_MUX_MODE::_6_lpi2c5_SCLS;
    }
    else if ((result = !strncmp(data, "_7_sai4_TX_SYNC", 15)))
    {
        output =
            IOMUXC_LPSR_SW_MUX_CTL_PAD_GPIO_LPSR_10_MUX_MODE::_7_sai4_TX_SYNC;
    }
    else if ((result = !strncmp(data, "_8_lpuart12_TX", 14)))
    {
        output =
            IOMUXC_LPSR_SW_MUX_CTL_PAD_GPIO_LPSR_10_MUX_MODE::_8_lpuart12_TX;
    }
    else if ((result = !strncmp(data, "_10_gpio12_IO10", 15)))
    {
        output =
            IOMUXC_LPSR_SW_MUX_CTL_PAD_GPIO_LPSR_10_MUX_MODE::_10_gpio12_IO10;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7