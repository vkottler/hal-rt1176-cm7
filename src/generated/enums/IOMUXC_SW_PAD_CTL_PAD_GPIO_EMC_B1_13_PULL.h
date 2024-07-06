/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class IOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B1_13_PULL : uint8_t
{
    _0_Forbidden /*!< Forbidden */,
    _1_PU = 1 /*!< Internal pullup resistor enabled */,
    _2_PD = 2 /*!< Internal pulldown resistor enabled */,
    _3_No_Pull = 3 /*!< No Pull */
};
static_assert(sizeof(IOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B1_13_PULL) == 1);

/**
 * Converts IOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B1_13_PULL to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(
    IOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B1_13_PULL instance)
{
    const char *result = "UNKNOWN IOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B1_13_PULL";

    switch (instance)
    {
    case IOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B1_13_PULL::_0_Forbidden:
        result = "_0_Forbidden";
        break;
    case IOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B1_13_PULL::_1_PU:
        result = "_1_PU";
        break;
    case IOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B1_13_PULL::_2_PD:
        result = "_2_PD";
        break;
    case IOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B1_13_PULL::_3_No_Pull:
        result = "_3_No_Pull";
        break;
    }

    return result;
}

/**
 * Converts a C string to IOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B1_13_PULL.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        IOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B1_13_PULL &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_0_Forbidden", 12)))
    {
        output = IOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B1_13_PULL::_0_Forbidden;
    }
    else if ((result = !strncmp(data, "_1_PU", 5)))
    {
        output = IOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B1_13_PULL::_1_PU;
    }
    else if ((result = !strncmp(data, "_2_PD", 5)))
    {
        output = IOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B1_13_PULL::_2_PD;
    }
    else if ((result = !strncmp(data, "_3_No_Pull", 10)))
    {
        output = IOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B1_13_PULL::_3_No_Pull;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7
