/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class IOMUXC_SNVS_GPR_GPR35_SNVS_TEMP_DET_OFFSET_HIGH : uint8_t
{
    OVER /*!< No change (Default) */,
    NO = 1 /*!< Add +5 to the Trim */,
    OVER1 = 2 /*!< Add +10 to the trim */,
    NO1 = 3 /*!< Add -5 to the Trim */
};
static_assert(sizeof(IOMUXC_SNVS_GPR_GPR35_SNVS_TEMP_DET_OFFSET_HIGH) == 1);

/**
 * Converts IOMUXC_SNVS_GPR_GPR35_SNVS_TEMP_DET_OFFSET_HIGH to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(
    IOMUXC_SNVS_GPR_GPR35_SNVS_TEMP_DET_OFFSET_HIGH instance)
{
    const char *result =
        "UNKNOWN IOMUXC_SNVS_GPR_GPR35_SNVS_TEMP_DET_OFFSET_HIGH";

    switch (instance)
    {
    case IOMUXC_SNVS_GPR_GPR35_SNVS_TEMP_DET_OFFSET_HIGH::OVER:
        result = "OVER";
        break;
    case IOMUXC_SNVS_GPR_GPR35_SNVS_TEMP_DET_OFFSET_HIGH::NO:
        result = "NO";
        break;
    case IOMUXC_SNVS_GPR_GPR35_SNVS_TEMP_DET_OFFSET_HIGH::OVER1:
        result = "OVER1";
        break;
    case IOMUXC_SNVS_GPR_GPR35_SNVS_TEMP_DET_OFFSET_HIGH::NO1:
        result = "NO1";
        break;
    }

    return result;
}

/**
 * Converts a C string to IOMUXC_SNVS_GPR_GPR35_SNVS_TEMP_DET_OFFSET_HIGH.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(
    const char *data, IOMUXC_SNVS_GPR_GPR35_SNVS_TEMP_DET_OFFSET_HIGH &output)
{
    bool result = false;

    if ((result = !strncmp(data, "OVER", 4)))
    {
        output = IOMUXC_SNVS_GPR_GPR35_SNVS_TEMP_DET_OFFSET_HIGH::OVER;
    }
    else if ((result = !strncmp(data, "NO", 2)))
    {
        output = IOMUXC_SNVS_GPR_GPR35_SNVS_TEMP_DET_OFFSET_HIGH::NO;
    }
    else if ((result = !strncmp(data, "OVER1", 5)))
    {
        output = IOMUXC_SNVS_GPR_GPR35_SNVS_TEMP_DET_OFFSET_HIGH::OVER1;
    }
    else if ((result = !strncmp(data, "NO1", 3)))
    {
        output = IOMUXC_SNVS_GPR_GPR35_SNVS_TEMP_DET_OFFSET_HIGH::NO1;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7
