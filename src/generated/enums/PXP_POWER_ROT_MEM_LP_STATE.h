/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class PXP_POWER_ROT_MEM_LP_STATE : uint8_t
{
    NONE /*!< Memory is not in low power state. */,
    LS =
        1 /*!< Light Sleep Mode. Low leakage mode, maintain memory contents. */
        ,
    DS =
        2 /*!< Deep Sleep Mode. Low leakage mode, maintain memory contents. */,
    SD = 4 /*!< Shut Down Mode. Shut Down periphery and core, no memory
              retention. */
};
static_assert(sizeof(PXP_POWER_ROT_MEM_LP_STATE) == 1);

/**
 * Converts PXP_POWER_ROT_MEM_LP_STATE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PXP_POWER_ROT_MEM_LP_STATE instance)
{
    const char *result = "UNKNOWN PXP_POWER_ROT_MEM_LP_STATE";

    switch (instance)
    {
    case PXP_POWER_ROT_MEM_LP_STATE::NONE:
        result = "NONE";
        break;
    case PXP_POWER_ROT_MEM_LP_STATE::LS:
        result = "LS";
        break;
    case PXP_POWER_ROT_MEM_LP_STATE::DS:
        result = "DS";
        break;
    case PXP_POWER_ROT_MEM_LP_STATE::SD:
        result = "SD";
        break;
    }

    return result;
}

/**
 * Converts a C string to PXP_POWER_ROT_MEM_LP_STATE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, PXP_POWER_ROT_MEM_LP_STATE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "NONE", 4)))
    {
        output = PXP_POWER_ROT_MEM_LP_STATE::NONE;
    }
    else if ((result = !strncmp(data, "LS", 2)))
    {
        output = PXP_POWER_ROT_MEM_LP_STATE::LS;
    }
    else if ((result = !strncmp(data, "DS", 2)))
    {
        output = PXP_POWER_ROT_MEM_LP_STATE::DS;
    }
    else if ((result = !strncmp(data, "SD", 2)))
    {
        output = PXP_POWER_ROT_MEM_LP_STATE::SD;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7
