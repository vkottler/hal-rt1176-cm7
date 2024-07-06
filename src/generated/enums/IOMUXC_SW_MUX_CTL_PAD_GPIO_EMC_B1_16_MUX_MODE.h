/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_16_MUX_MODE : uint8_t
{
    _0_semc_ADDR7 /*!< Select mux mode: ALT0 mux port: SEMC_ADDR07 of instance:
                     SEMC */
        ,
    _1_XBAR1_INOUT8 = 1 /*!< Select mux mode: ALT1 mux port: XBAR1_INOUT08 of
                           instance: XBAR1 */
        ,
    _5_gpio_mux1_IO16 = 5 /*!< Select mux mode: ALT5 mux port: GPIO_MUX1_IO16
                             of instance: GPIO_MUX1 */
        ,
    _8_flexio1_FLEXIO16 = 8 /*!< Select mux mode: ALT8 mux port: FLEXIO1_D16 of
                               instance: FLEXIO1 */
        ,
    _10_gpio7_IO16 = 10 /*!< Select mux mode: ALT10 mux port: GPIO7_IO16 of
                           instance: GPIO7 */
};
static_assert(sizeof(IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_16_MUX_MODE) == 1);

/**
 * Converts IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_16_MUX_MODE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(
    IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_16_MUX_MODE instance)
{
    const char *result =
        "UNKNOWN IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_16_MUX_MODE";

    switch (instance)
    {
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_16_MUX_MODE::_0_semc_ADDR7:
        result = "_0_semc_ADDR7";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_16_MUX_MODE::_1_XBAR1_INOUT8:
        result = "_1_XBAR1_INOUT8";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_16_MUX_MODE::_5_gpio_mux1_IO16:
        result = "_5_gpio_mux1_IO16";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_16_MUX_MODE::_8_flexio1_FLEXIO16:
        result = "_8_flexio1_FLEXIO16";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_16_MUX_MODE::_10_gpio7_IO16:
        result = "_10_gpio7_IO16";
        break;
    }

    return result;
}

/**
 * Converts a C string to IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_16_MUX_MODE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_16_MUX_MODE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_0_semc_ADDR7", 13)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_16_MUX_MODE::_0_semc_ADDR7;
    }
    else if ((result = !strncmp(data, "_1_XBAR1_INOUT8", 15)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_16_MUX_MODE::_1_XBAR1_INOUT8;
    }
    else if ((result = !strncmp(data, "_5_gpio_mux1_IO16", 17)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_16_MUX_MODE::_5_gpio_mux1_IO16;
    }
    else if ((result = !strncmp(data, "_8_flexio1_FLEXIO16", 19)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_16_MUX_MODE::_8_flexio1_FLEXIO16;
    }
    else if ((result = !strncmp(data, "_10_gpio7_IO16", 14)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_16_MUX_MODE::_10_gpio7_IO16;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7
