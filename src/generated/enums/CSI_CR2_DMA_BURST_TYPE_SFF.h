/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class CSI_CR2_DMA_BURST_TYPE_SFF : uint8_t
{
    _0 = 2 /*!< INCR8 */,
    _1 = 1 /*!< INCR4 */,
    _3 = 3 /*!< INCR16 */
};
static_assert(sizeof(CSI_CR2_DMA_BURST_TYPE_SFF) == 1);

/**
 * Converts CSI_CR2_DMA_BURST_TYPE_SFF to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CSI_CR2_DMA_BURST_TYPE_SFF instance)
{
    const char *result = "UNKNOWN CSI_CR2_DMA_BURST_TYPE_SFF";

    switch (instance)
    {
    case CSI_CR2_DMA_BURST_TYPE_SFF::_0:
        result = "_0";
        break;
    case CSI_CR2_DMA_BURST_TYPE_SFF::_1:
        result = "_1";
        break;
    case CSI_CR2_DMA_BURST_TYPE_SFF::_3:
        result = "_3";
        break;
    }

    return result;
}

/**
 * Converts a C string to CSI_CR2_DMA_BURST_TYPE_SFF.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CSI_CR2_DMA_BURST_TYPE_SFF &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_0", 2)))
    {
        output = CSI_CR2_DMA_BURST_TYPE_SFF::_0;
    }
    else if ((result = !strncmp(data, "_1", 2)))
    {
        output = CSI_CR2_DMA_BURST_TYPE_SFF::_1;
    }
    else if ((result = !strncmp(data, "_3", 2)))
    {
        output = CSI_CR2_DMA_BURST_TYPE_SFF::_3;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7
