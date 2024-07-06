/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class SEMC_BR10_MS : uint8_t
{
    _0 /*!< 4KB */,
    _1 = 1 /*!< 8KB */,
    _2 = 2 /*!< 16KB */,
    _3 = 3 /*!< 32KB */,
    _4 = 4 /*!< 64KB */,
    _5 = 5 /*!< 128KB */,
    _6 = 6 /*!< 256KB */,
    _7 = 7 /*!< 512KB */,
    _8 = 8 /*!< 1MB */,
    _9 = 9 /*!< 2MB */,
    _10 = 10 /*!< 4MB */,
    _11 = 11 /*!< 8MB */,
    _12 = 12 /*!< 16MB */,
    _13 = 13 /*!< 32MB */,
    _14 = 14 /*!< 64MB */,
    _15 = 15 /*!< 128MB */,
    _16 = 16 /*!< 256MB */,
    _17 = 17 /*!< 512MB */,
    _18 = 18 /*!< 1GB */,
    _19 = 19 /*!< 2GB */,
    _20 = 20 /*!< 4GB */,
    _21 = 21 /*!< 4GB */,
    _22 = 22 /*!< 4GB */,
    _23 = 23 /*!< 4GB */,
    _24 = 24 /*!< 4GB */,
    _25 = 25 /*!< 4GB */,
    _26 = 26 /*!< 4GB */,
    _27 = 27 /*!< 4GB */,
    _28 = 28 /*!< 4GB */,
    _29 = 29 /*!< 4GB */,
    _30 = 30 /*!< 4GB */,
    _31 = 31 /*!< 4GB */
};
static_assert(sizeof(SEMC_BR10_MS) == 1);

/**
 * Converts SEMC_BR10_MS to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SEMC_BR10_MS instance)
{
    const char *result = "UNKNOWN SEMC_BR10_MS";

    switch (instance)
    {
    case SEMC_BR10_MS::_0:
        result = "_0";
        break;
    case SEMC_BR10_MS::_1:
        result = "_1";
        break;
    case SEMC_BR10_MS::_2:
        result = "_2";
        break;
    case SEMC_BR10_MS::_3:
        result = "_3";
        break;
    case SEMC_BR10_MS::_4:
        result = "_4";
        break;
    case SEMC_BR10_MS::_5:
        result = "_5";
        break;
    case SEMC_BR10_MS::_6:
        result = "_6";
        break;
    case SEMC_BR10_MS::_7:
        result = "_7";
        break;
    case SEMC_BR10_MS::_8:
        result = "_8";
        break;
    case SEMC_BR10_MS::_9:
        result = "_9";
        break;
    case SEMC_BR10_MS::_10:
        result = "_10";
        break;
    case SEMC_BR10_MS::_11:
        result = "_11";
        break;
    case SEMC_BR10_MS::_12:
        result = "_12";
        break;
    case SEMC_BR10_MS::_13:
        result = "_13";
        break;
    case SEMC_BR10_MS::_14:
        result = "_14";
        break;
    case SEMC_BR10_MS::_15:
        result = "_15";
        break;
    case SEMC_BR10_MS::_16:
        result = "_16";
        break;
    case SEMC_BR10_MS::_17:
        result = "_17";
        break;
    case SEMC_BR10_MS::_18:
        result = "_18";
        break;
    case SEMC_BR10_MS::_19:
        result = "_19";
        break;
    case SEMC_BR10_MS::_20:
        result = "_20";
        break;
    case SEMC_BR10_MS::_21:
        result = "_21";
        break;
    case SEMC_BR10_MS::_22:
        result = "_22";
        break;
    case SEMC_BR10_MS::_23:
        result = "_23";
        break;
    case SEMC_BR10_MS::_24:
        result = "_24";
        break;
    case SEMC_BR10_MS::_25:
        result = "_25";
        break;
    case SEMC_BR10_MS::_26:
        result = "_26";
        break;
    case SEMC_BR10_MS::_27:
        result = "_27";
        break;
    case SEMC_BR10_MS::_28:
        result = "_28";
        break;
    case SEMC_BR10_MS::_29:
        result = "_29";
        break;
    case SEMC_BR10_MS::_30:
        result = "_30";
        break;
    case SEMC_BR10_MS::_31:
        result = "_31";
        break;
    }

    return result;
}

/**
 * Converts a C string to SEMC_BR10_MS.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SEMC_BR10_MS &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_0", 2)))
    {
        output = SEMC_BR10_MS::_0;
    }
    else if ((result = !strncmp(data, "_1", 2)))
    {
        output = SEMC_BR10_MS::_1;
    }
    else if ((result = !strncmp(data, "_2", 2)))
    {
        output = SEMC_BR10_MS::_2;
    }
    else if ((result = !strncmp(data, "_3", 2)))
    {
        output = SEMC_BR10_MS::_3;
    }
    else if ((result = !strncmp(data, "_4", 2)))
    {
        output = SEMC_BR10_MS::_4;
    }
    else if ((result = !strncmp(data, "_5", 2)))
    {
        output = SEMC_BR10_MS::_5;
    }
    else if ((result = !strncmp(data, "_6", 2)))
    {
        output = SEMC_BR10_MS::_6;
    }
    else if ((result = !strncmp(data, "_7", 2)))
    {
        output = SEMC_BR10_MS::_7;
    }
    else if ((result = !strncmp(data, "_8", 2)))
    {
        output = SEMC_BR10_MS::_8;
    }
    else if ((result = !strncmp(data, "_9", 2)))
    {
        output = SEMC_BR10_MS::_9;
    }
    else if ((result = !strncmp(data, "_10", 3)))
    {
        output = SEMC_BR10_MS::_10;
    }
    else if ((result = !strncmp(data, "_11", 3)))
    {
        output = SEMC_BR10_MS::_11;
    }
    else if ((result = !strncmp(data, "_12", 3)))
    {
        output = SEMC_BR10_MS::_12;
    }
    else if ((result = !strncmp(data, "_13", 3)))
    {
        output = SEMC_BR10_MS::_13;
    }
    else if ((result = !strncmp(data, "_14", 3)))
    {
        output = SEMC_BR10_MS::_14;
    }
    else if ((result = !strncmp(data, "_15", 3)))
    {
        output = SEMC_BR10_MS::_15;
    }
    else if ((result = !strncmp(data, "_16", 3)))
    {
        output = SEMC_BR10_MS::_16;
    }
    else if ((result = !strncmp(data, "_17", 3)))
    {
        output = SEMC_BR10_MS::_17;
    }
    else if ((result = !strncmp(data, "_18", 3)))
    {
        output = SEMC_BR10_MS::_18;
    }
    else if ((result = !strncmp(data, "_19", 3)))
    {
        output = SEMC_BR10_MS::_19;
    }
    else if ((result = !strncmp(data, "_20", 3)))
    {
        output = SEMC_BR10_MS::_20;
    }
    else if ((result = !strncmp(data, "_21", 3)))
    {
        output = SEMC_BR10_MS::_21;
    }
    else if ((result = !strncmp(data, "_22", 3)))
    {
        output = SEMC_BR10_MS::_22;
    }
    else if ((result = !strncmp(data, "_23", 3)))
    {
        output = SEMC_BR10_MS::_23;
    }
    else if ((result = !strncmp(data, "_24", 3)))
    {
        output = SEMC_BR10_MS::_24;
    }
    else if ((result = !strncmp(data, "_25", 3)))
    {
        output = SEMC_BR10_MS::_25;
    }
    else if ((result = !strncmp(data, "_26", 3)))
    {
        output = SEMC_BR10_MS::_26;
    }
    else if ((result = !strncmp(data, "_27", 3)))
    {
        output = SEMC_BR10_MS::_27;
    }
    else if ((result = !strncmp(data, "_28", 3)))
    {
        output = SEMC_BR10_MS::_28;
    }
    else if ((result = !strncmp(data, "_29", 3)))
    {
        output = SEMC_BR10_MS::_29;
    }
    else if ((result = !strncmp(data, "_30", 3)))
    {
        output = SEMC_BR10_MS::_30;
    }
    else if ((result = !strncmp(data, "_31", 3)))
    {
        output = SEMC_BR10_MS::_31;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7
