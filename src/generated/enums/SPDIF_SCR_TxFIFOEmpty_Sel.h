/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class SPDIF_SCR_TxFIFOEmpty_Sel : uint8_t
{
    _0 /*!< Empty interrupt if 0 sample in Tx left and right FIFOs */,
    _4 = 1 /*!< Empty interrupt if at most 4 sample in Tx left and right FIFOs
            */
        ,
    _8 = 2 /*!< Empty interrupt if at most 8 sample in Tx left and right FIFOs
            */
        ,
    _12 = 3 /*!< Empty interrupt if at most 12 sample in Tx left and right
               FIFOs */
};
static_assert(sizeof(SPDIF_SCR_TxFIFOEmpty_Sel) == 1);

/**
 * Converts SPDIF_SCR_TxFIFOEmpty_Sel to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SPDIF_SCR_TxFIFOEmpty_Sel instance)
{
    const char *result = "UNKNOWN SPDIF_SCR_TxFIFOEmpty_Sel";

    switch (instance)
    {
    case SPDIF_SCR_TxFIFOEmpty_Sel::_0:
        result = "_0";
        break;
    case SPDIF_SCR_TxFIFOEmpty_Sel::_4:
        result = "_4";
        break;
    case SPDIF_SCR_TxFIFOEmpty_Sel::_8:
        result = "_8";
        break;
    case SPDIF_SCR_TxFIFOEmpty_Sel::_12:
        result = "_12";
        break;
    }

    return result;
}

/**
 * Converts a C string to SPDIF_SCR_TxFIFOEmpty_Sel.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SPDIF_SCR_TxFIFOEmpty_Sel &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_0", 2)))
    {
        output = SPDIF_SCR_TxFIFOEmpty_Sel::_0;
    }
    else if ((result = !strncmp(data, "_4", 2)))
    {
        output = SPDIF_SCR_TxFIFOEmpty_Sel::_4;
    }
    else if ((result = !strncmp(data, "_8", 2)))
    {
        output = SPDIF_SCR_TxFIFOEmpty_Sel::_8;
    }
    else if ((result = !strncmp(data, "_12", 3)))
    {
        output = SPDIF_SCR_TxFIFOEmpty_Sel::_12;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7
