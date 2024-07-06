/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_33_MUX_MODE : uint8_t
{
    _0_semc_DATA11 /*!< Select mux mode: ALT0 mux port: SEMC_DATA11 of
                      instance: SEMC */
        ,
    _1_flexpwm3_PWMA2 = 1 /*!< Select mux mode: ALT1 mux port: FLEXPWM3_PWM2_A
                             of instance: FLEXPWM3 */
        ,
    _5_gpio_mux2_IO1 = 5 /*!< Select mux mode: ALT5 mux port: GPIO_MUX2_IO01 of
                            instance: GPIO_MUX2 */
        ,
    _10_gpio8_IO1 = 10 /*!< Select mux mode: ALT10 mux port: GPIO8_IO01 of
                          instance: GPIO8 */
};
static_assert(sizeof(IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_33_MUX_MODE) == 1);

/**
 * Converts IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_33_MUX_MODE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(
    IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_33_MUX_MODE instance)
{
    const char *result =
        "UNKNOWN IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_33_MUX_MODE";

    switch (instance)
    {
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_33_MUX_MODE::_0_semc_DATA11:
        result = "_0_semc_DATA11";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_33_MUX_MODE::_1_flexpwm3_PWMA2:
        result = "_1_flexpwm3_PWMA2";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_33_MUX_MODE::_5_gpio_mux2_IO1:
        result = "_5_gpio_mux2_IO1";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_33_MUX_MODE::_10_gpio8_IO1:
        result = "_10_gpio8_IO1";
        break;
    }

    return result;
}

/**
 * Converts a C string to IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_33_MUX_MODE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_33_MUX_MODE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_0_semc_DATA11", 14)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_33_MUX_MODE::_0_semc_DATA11;
    }
    else if ((result = !strncmp(data, "_1_flexpwm3_PWMA2", 17)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_33_MUX_MODE::_1_flexpwm3_PWMA2;
    }
    else if ((result = !strncmp(data, "_5_gpio_mux2_IO1", 16)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_33_MUX_MODE::_5_gpio_mux2_IO1;
    }
    else if ((result = !strncmp(data, "_10_gpio8_IO1", 13)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_33_MUX_MODE::_10_gpio8_IO1;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7
