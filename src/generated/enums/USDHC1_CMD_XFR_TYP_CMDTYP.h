/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class USDHC1_CMD_XFR_TYP_CMDTYP : uint8_t
{
    _0 /*!< Normal other commands */,
    _1 = 1 /*!< Suspend CMD52 for writing bus suspend in CCCR */,
    _2 = 2 /*!< Resume CMD52 for writing function select in CCCR */,
    _3 = 3 /*!< Abort CMD12, CMD52 for writing I/O Abort in CCCR */
};
static_assert(sizeof(USDHC1_CMD_XFR_TYP_CMDTYP) == 1);

/**
 * Converts USDHC1_CMD_XFR_TYP_CMDTYP to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USDHC1_CMD_XFR_TYP_CMDTYP instance)
{
    const char *result = "UNKNOWN USDHC1_CMD_XFR_TYP_CMDTYP";

    switch (instance)
    {
    case USDHC1_CMD_XFR_TYP_CMDTYP::_0:
        result = "_0";
        break;
    case USDHC1_CMD_XFR_TYP_CMDTYP::_1:
        result = "_1";
        break;
    case USDHC1_CMD_XFR_TYP_CMDTYP::_2:
        result = "_2";
        break;
    case USDHC1_CMD_XFR_TYP_CMDTYP::_3:
        result = "_3";
        break;
    }

    return result;
}

/**
 * Converts a C string to USDHC1_CMD_XFR_TYP_CMDTYP.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USDHC1_CMD_XFR_TYP_CMDTYP &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_0", 2)))
    {
        output = USDHC1_CMD_XFR_TYP_CMDTYP::_0;
    }
    else if ((result = !strncmp(data, "_1", 2)))
    {
        output = USDHC1_CMD_XFR_TYP_CMDTYP::_1;
    }
    else if ((result = !strncmp(data, "_2", 2)))
    {
        output = USDHC1_CMD_XFR_TYP_CMDTYP::_2;
    }
    else if ((result = !strncmp(data, "_3", 2)))
    {
        output = USDHC1_CMD_XFR_TYP_CMDTYP::_3;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7
