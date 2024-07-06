/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class LPUART1_VERID_FEATURE : uint16_t
{
    STANDARD = 1 /*!< Standard feature set. */,
    MODEM = 3 /*!< Standard feature set with MODEM/IrDA support. */
};
static_assert(sizeof(LPUART1_VERID_FEATURE) == 2);

/**
 * Converts LPUART1_VERID_FEATURE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(LPUART1_VERID_FEATURE instance)
{
    const char *result = "UNKNOWN LPUART1_VERID_FEATURE";

    switch (instance)
    {
    case LPUART1_VERID_FEATURE::STANDARD:
        result = "STANDARD";
        break;
    case LPUART1_VERID_FEATURE::MODEM:
        result = "MODEM";
        break;
    }

    return result;
}

/**
 * Converts a C string to LPUART1_VERID_FEATURE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, LPUART1_VERID_FEATURE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "STANDARD", 8)))
    {
        output = LPUART1_VERID_FEATURE::STANDARD;
    }
    else if ((result = !strncmp(data, "MODEM", 5)))
    {
        output = LPUART1_VERID_FEATURE::MODEM;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7
