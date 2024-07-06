/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B1_03_MUX_MODE : uint8_t
{
    _0_usdhc1_DATA1 /*!< Select mux mode: ALT0 mux port: USDHC1_DATA1 of
                       instance: USDHC1 */
        ,
    _2_XBAR1_INOUT23 = 2 /*!< Select mux mode: ALT2 mux port: XBAR1_INOUT23 of
                            instance: XBAR1 */
        ,
    _3_gpt4_COMPARE2 = 3 /*!< Select mux mode: ALT3 mux port: GPT4_COMPARE2 of
                            instance: GPT4 */
        ,
    _5_gpio_mux4_IO6 = 5 /*!< Select mux mode: ALT5 mux port: GPIO_MUX4_IO06 of
                            instance: GPIO_MUX4 */
        ,
    _6_flexspi2_A_DATA1 = 6 /*!< Select mux mode: ALT6 mux port:
                               FLEXSPI2_A_DATA01 of instance: FLEXSPI2 */
        ,
    _8_kpp_COL6 =
        8 /*!< Select mux mode: ALT8 mux port: KPP_COL06 of instance: KPP */,
    _9_flexspi1_B_SS1_B = 9 /*!< Select mux mode: ALT9 mux port:
                               FLEXSPI1_B_SS1_B of instance: FLEXSPI1 */
        ,
    _10_gpio10_IO6 = 10 /*!< Select mux mode: ALT10 mux port: GPIO10_IO06 of
                           instance: GPIO10 */
};
static_assert(sizeof(IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B1_03_MUX_MODE) == 1);

/**
 * Converts IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B1_03_MUX_MODE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(
    IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B1_03_MUX_MODE instance)
{
    const char *result =
        "UNKNOWN IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B1_03_MUX_MODE";

    switch (instance)
    {
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B1_03_MUX_MODE::_0_usdhc1_DATA1:
        result = "_0_usdhc1_DATA1";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B1_03_MUX_MODE::_2_XBAR1_INOUT23:
        result = "_2_XBAR1_INOUT23";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B1_03_MUX_MODE::_3_gpt4_COMPARE2:
        result = "_3_gpt4_COMPARE2";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B1_03_MUX_MODE::_5_gpio_mux4_IO6:
        result = "_5_gpio_mux4_IO6";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B1_03_MUX_MODE::_6_flexspi2_A_DATA1:
        result = "_6_flexspi2_A_DATA1";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B1_03_MUX_MODE::_8_kpp_COL6:
        result = "_8_kpp_COL6";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B1_03_MUX_MODE::_9_flexspi1_B_SS1_B:
        result = "_9_flexspi1_B_SS1_B";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B1_03_MUX_MODE::_10_gpio10_IO6:
        result = "_10_gpio10_IO6";
        break;
    }

    return result;
}

/**
 * Converts a C string to IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B1_03_MUX_MODE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B1_03_MUX_MODE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_0_usdhc1_DATA1", 15)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B1_03_MUX_MODE::_0_usdhc1_DATA1;
    }
    else if ((result = !strncmp(data, "_2_XBAR1_INOUT23", 16)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B1_03_MUX_MODE::_2_XBAR1_INOUT23;
    }
    else if ((result = !strncmp(data, "_3_gpt4_COMPARE2", 16)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B1_03_MUX_MODE::_3_gpt4_COMPARE2;
    }
    else if ((result = !strncmp(data, "_5_gpio_mux4_IO6", 16)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B1_03_MUX_MODE::_5_gpio_mux4_IO6;
    }
    else if ((result = !strncmp(data, "_6_flexspi2_A_DATA1", 19)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B1_03_MUX_MODE::_6_flexspi2_A_DATA1;
    }
    else if ((result = !strncmp(data, "_8_kpp_COL6", 11)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B1_03_MUX_MODE::_8_kpp_COL6;
    }
    else if ((result = !strncmp(data, "_9_flexspi1_B_SS1_B", 19)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B1_03_MUX_MODE::_9_flexspi1_B_SS1_B;
    }
    else if ((result = !strncmp(data, "_10_gpio10_IO6", 14)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B1_03_MUX_MODE::_10_gpio10_IO6;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7
