/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class DMA0_TCD0_CSR_BWC : uint8_t
{
    DISABLED /*!< No eDMA engine stalls */,
    STALL4 = 2 /*!< eDMA engine stalls for 4 cycles after each R/W */,
    STALL8 = 3 /*!< eDMA engine stalls for 8 cycles after each R/W */
};
static_assert(sizeof(DMA0_TCD0_CSR_BWC) == 1);

/**
 * Converts DMA0_TCD0_CSR_BWC to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(DMA0_TCD0_CSR_BWC instance)
{
    const char *result = "UNKNOWN DMA0_TCD0_CSR_BWC";

    switch (instance)
    {
    case DMA0_TCD0_CSR_BWC::DISABLED:
        result = "DISABLED";
        break;
    case DMA0_TCD0_CSR_BWC::STALL4:
        result = "STALL4";
        break;
    case DMA0_TCD0_CSR_BWC::STALL8:
        result = "STALL8";
        break;
    }

    return result;
}

/**
 * Converts a C string to DMA0_TCD0_CSR_BWC.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, DMA0_TCD0_CSR_BWC &output)
{
    bool result = false;

    if ((result = !strncmp(data, "DISABLED", 8)))
    {
        output = DMA0_TCD0_CSR_BWC::DISABLED;
    }
    else if ((result = !strncmp(data, "STALL4", 6)))
    {
        output = DMA0_TCD0_CSR_BWC::STALL4;
    }
    else if ((result = !strncmp(data, "STALL8", 6)))
    {
        output = DMA0_TCD0_CSR_BWC::STALL8;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7
