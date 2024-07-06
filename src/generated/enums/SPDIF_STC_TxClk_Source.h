/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class SPDIF_STC_TxClk_Source : uint8_t
{
    _000 /*!< REF_CLK_32K input (XTALOSC 32 kHz clock) */,
    _001 = 1 /*!< tx_clk input (from SPDIF0_CLK_ROOT. See clock control block
                for more information.) */
        ,
    _011 = 3 /*!< SPDIF_EXT_CLK, from pads */,
    _101 = 5 /*!< ipg_clk input (frequency divided) */
};
static_assert(sizeof(SPDIF_STC_TxClk_Source) == 1);

/**
 * Converts SPDIF_STC_TxClk_Source to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SPDIF_STC_TxClk_Source instance)
{
    const char *result = "UNKNOWN SPDIF_STC_TxClk_Source";

    switch (instance)
    {
    case SPDIF_STC_TxClk_Source::_000:
        result = "_000";
        break;
    case SPDIF_STC_TxClk_Source::_001:
        result = "_001";
        break;
    case SPDIF_STC_TxClk_Source::_011:
        result = "_011";
        break;
    case SPDIF_STC_TxClk_Source::_101:
        result = "_101";
        break;
    }

    return result;
}

/**
 * Converts a C string to SPDIF_STC_TxClk_Source.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SPDIF_STC_TxClk_Source &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_000", 4)))
    {
        output = SPDIF_STC_TxClk_Source::_000;
    }
    else if ((result = !strncmp(data, "_001", 4)))
    {
        output = SPDIF_STC_TxClk_Source::_001;
    }
    else if ((result = !strncmp(data, "_011", 4)))
    {
        output = SPDIF_STC_TxClk_Source::_011;
    }
    else if ((result = !strncmp(data, "_101", 4)))
    {
        output = SPDIF_STC_TxClk_Source::_101;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7