/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_28_MUX_MODE : uint8_t
{
    _0_semc_WE /*!< Select mux mode: ALT0 mux port: SEMC_WE of instance: SEMC
                */
        ,
    _1_flexpwm1_PWMB2 = 1 /*!< Select mux mode: ALT1 mux port: FLEXPWM1_PWM2_B
                             of instance: FLEXPWM1 */
        ,
    _5_gpio_mux1_IO28 = 5 /*!< Select mux mode: ALT5 mux port: GPIO_MUX1_IO28
                             of instance: GPIO_MUX1 */
        ,
    _8_flexio1_FLEXIO28 = 8 /*!< Select mux mode: ALT8 mux port: FLEXIO1_D28 of
                               instance: FLEXIO1 */
        ,
    _10_gpio7_IO28 = 10 /*!< Select mux mode: ALT10 mux port: GPIO7_IO28 of
                           instance: GPIO7 */
};
static_assert(sizeof(IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_28_MUX_MODE) == 1);

/**
 * Converts IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_28_MUX_MODE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(
    IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_28_MUX_MODE instance)
{
    const char *result =
        "UNKNOWN IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_28_MUX_MODE";

    switch (instance)
    {
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_28_MUX_MODE::_0_semc_WE:
        result = "_0_semc_WE";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_28_MUX_MODE::_1_flexpwm1_PWMB2:
        result = "_1_flexpwm1_PWMB2";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_28_MUX_MODE::_5_gpio_mux1_IO28:
        result = "_5_gpio_mux1_IO28";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_28_MUX_MODE::_8_flexio1_FLEXIO28:
        result = "_8_flexio1_FLEXIO28";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_28_MUX_MODE::_10_gpio7_IO28:
        result = "_10_gpio7_IO28";
        break;
    }

    return result;
}

/**
 * Converts a C string to IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_28_MUX_MODE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_28_MUX_MODE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_0_semc_WE", 10)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_28_MUX_MODE::_0_semc_WE;
    }
    else if ((result = !strncmp(data, "_1_flexpwm1_PWMB2", 17)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_28_MUX_MODE::_1_flexpwm1_PWMB2;
    }
    else if ((result = !strncmp(data, "_5_gpio_mux1_IO28", 17)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_28_MUX_MODE::_5_gpio_mux1_IO28;
    }
    else if ((result = !strncmp(data, "_8_flexio1_FLEXIO28", 19)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_28_MUX_MODE::_8_flexio1_FLEXIO28;
    }
    else if ((result = !strncmp(data, "_10_gpio7_IO28", 14)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_28_MUX_MODE::_10_gpio7_IO28;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7