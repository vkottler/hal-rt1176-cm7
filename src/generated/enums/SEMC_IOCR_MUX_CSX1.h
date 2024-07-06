/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class SEMC_IOCR_MUX_CSX1 : uint8_t
{
    _0 /*!< NOR/SRAM Address bit 25 (A25) in Non-ADMUX mode */,
    _1 = 1 /*!< SDRAM CS1 */,
    _2 = 2 /*!< SDRAM CS2 */,
    _3 = 3 /*!< SDRAM CS3 */,
    _4 = 4 /*!< NAND CE# */,
    _5 = 5 /*!< NOR CE# */,
    _6 = 6 /*!< SRAM CE# 0 */,
    _7 = 7 /*!< DBI CSX */,
    _8 = 8 /*!< SRAM CE# 1 */,
    _9 = 9 /*!< SRAM CE# 2 */,
    _10 = 10 /*!< SRAM CE# 3 */,
    _11 = 11 /*!< NOR/SRAM Address bit 25 (A25) */,
    _12 = 12 /*!< NOR/SRAM Address bit 25 (A25) */,
    _13 = 13 /*!< NOR/SRAM Address bit 25 (A25) */,
    _14 = 14 /*!< NOR/SRAM Address bit 25 (A25) */,
    _15 = 15 /*!< NOR/SRAM Address bit 25 (A25) */
};
static_assert(sizeof(SEMC_IOCR_MUX_CSX1) == 1);

/**
 * Converts SEMC_IOCR_MUX_CSX1 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SEMC_IOCR_MUX_CSX1 instance)
{
    const char *result = "UNKNOWN SEMC_IOCR_MUX_CSX1";

    switch (instance)
    {
    case SEMC_IOCR_MUX_CSX1::_0:
        result = "_0";
        break;
    case SEMC_IOCR_MUX_CSX1::_1:
        result = "_1";
        break;
    case SEMC_IOCR_MUX_CSX1::_2:
        result = "_2";
        break;
    case SEMC_IOCR_MUX_CSX1::_3:
        result = "_3";
        break;
    case SEMC_IOCR_MUX_CSX1::_4:
        result = "_4";
        break;
    case SEMC_IOCR_MUX_CSX1::_5:
        result = "_5";
        break;
    case SEMC_IOCR_MUX_CSX1::_6:
        result = "_6";
        break;
    case SEMC_IOCR_MUX_CSX1::_7:
        result = "_7";
        break;
    case SEMC_IOCR_MUX_CSX1::_8:
        result = "_8";
        break;
    case SEMC_IOCR_MUX_CSX1::_9:
        result = "_9";
        break;
    case SEMC_IOCR_MUX_CSX1::_10:
        result = "_10";
        break;
    case SEMC_IOCR_MUX_CSX1::_11:
        result = "_11";
        break;
    case SEMC_IOCR_MUX_CSX1::_12:
        result = "_12";
        break;
    case SEMC_IOCR_MUX_CSX1::_13:
        result = "_13";
        break;
    case SEMC_IOCR_MUX_CSX1::_14:
        result = "_14";
        break;
    case SEMC_IOCR_MUX_CSX1::_15:
        result = "_15";
        break;
    }

    return result;
}

/**
 * Converts a C string to SEMC_IOCR_MUX_CSX1.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SEMC_IOCR_MUX_CSX1 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_0", 2)))
    {
        output = SEMC_IOCR_MUX_CSX1::_0;
    }
    else if ((result = !strncmp(data, "_1", 2)))
    {
        output = SEMC_IOCR_MUX_CSX1::_1;
    }
    else if ((result = !strncmp(data, "_2", 2)))
    {
        output = SEMC_IOCR_MUX_CSX1::_2;
    }
    else if ((result = !strncmp(data, "_3", 2)))
    {
        output = SEMC_IOCR_MUX_CSX1::_3;
    }
    else if ((result = !strncmp(data, "_4", 2)))
    {
        output = SEMC_IOCR_MUX_CSX1::_4;
    }
    else if ((result = !strncmp(data, "_5", 2)))
    {
        output = SEMC_IOCR_MUX_CSX1::_5;
    }
    else if ((result = !strncmp(data, "_6", 2)))
    {
        output = SEMC_IOCR_MUX_CSX1::_6;
    }
    else if ((result = !strncmp(data, "_7", 2)))
    {
        output = SEMC_IOCR_MUX_CSX1::_7;
    }
    else if ((result = !strncmp(data, "_8", 2)))
    {
        output = SEMC_IOCR_MUX_CSX1::_8;
    }
    else if ((result = !strncmp(data, "_9", 2)))
    {
        output = SEMC_IOCR_MUX_CSX1::_9;
    }
    else if ((result = !strncmp(data, "_10", 3)))
    {
        output = SEMC_IOCR_MUX_CSX1::_10;
    }
    else if ((result = !strncmp(data, "_11", 3)))
    {
        output = SEMC_IOCR_MUX_CSX1::_11;
    }
    else if ((result = !strncmp(data, "_12", 3)))
    {
        output = SEMC_IOCR_MUX_CSX1::_12;
    }
    else if ((result = !strncmp(data, "_13", 3)))
    {
        output = SEMC_IOCR_MUX_CSX1::_13;
    }
    else if ((result = !strncmp(data, "_14", 3)))
    {
        output = SEMC_IOCR_MUX_CSX1::_14;
    }
    else if ((result = !strncmp(data, "_15", 3)))
    {
        output = SEMC_IOCR_MUX_CSX1::_15;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7
