/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class IOMUXC_LPSR_SW_PAD_CTL_PAD_GPIO_LPSR_11_DWP : uint8_t
{
    none /*!< Both cores are allowed */,
    CM7 = 1 /*!< CM7 is forbidden */,
    CM4 = 2 /*!< CM4 is forbidden */,
    both = 3 /*!< Both cores are forbidden */
};
static_assert(sizeof(IOMUXC_LPSR_SW_PAD_CTL_PAD_GPIO_LPSR_11_DWP) == 1);

/**
 * Converts IOMUXC_LPSR_SW_PAD_CTL_PAD_GPIO_LPSR_11_DWP to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(
    IOMUXC_LPSR_SW_PAD_CTL_PAD_GPIO_LPSR_11_DWP instance)
{
    const char *result = "UNKNOWN IOMUXC_LPSR_SW_PAD_CTL_PAD_GPIO_LPSR_11_DWP";

    switch (instance)
    {
    case IOMUXC_LPSR_SW_PAD_CTL_PAD_GPIO_LPSR_11_DWP::none:
        result = "none";
        break;
    case IOMUXC_LPSR_SW_PAD_CTL_PAD_GPIO_LPSR_11_DWP::CM7:
        result = "CM7";
        break;
    case IOMUXC_LPSR_SW_PAD_CTL_PAD_GPIO_LPSR_11_DWP::CM4:
        result = "CM4";
        break;
    case IOMUXC_LPSR_SW_PAD_CTL_PAD_GPIO_LPSR_11_DWP::both:
        result = "both";
        break;
    }

    return result;
}

/**
 * Converts a C string to IOMUXC_LPSR_SW_PAD_CTL_PAD_GPIO_LPSR_11_DWP.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        IOMUXC_LPSR_SW_PAD_CTL_PAD_GPIO_LPSR_11_DWP &output)
{
    bool result = false;

    if ((result = !strncmp(data, "none", 4)))
    {
        output = IOMUXC_LPSR_SW_PAD_CTL_PAD_GPIO_LPSR_11_DWP::none;
    }
    else if ((result = !strncmp(data, "CM7", 3)))
    {
        output = IOMUXC_LPSR_SW_PAD_CTL_PAD_GPIO_LPSR_11_DWP::CM7;
    }
    else if ((result = !strncmp(data, "CM4", 3)))
    {
        output = IOMUXC_LPSR_SW_PAD_CTL_PAD_GPIO_LPSR_11_DWP::CM4;
    }
    else if ((result = !strncmp(data, "both", 4)))
    {
        output = IOMUXC_LPSR_SW_PAD_CTL_PAD_GPIO_LPSR_11_DWP::both;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7
