/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class LPI2C1_SCFGR1_ADDRCFG : uint8_t
{
    ADDRESS_MATCH0_7_BIT /*!< Address match 0 (7-bit) */,
    ADDRESS_MATCH0_10_BIT = 1 /*!< Address match 0 (10-bit) */,
    ADDRESS_MATCH0_7_BIT_OR_ADDRESS_MATCH1_7_BIT =
        2 /*!< Address match 0 (7-bit) or Address match 1 (7-bit) */,
    ADDRESS_MATCH0_10_BIT_OR_ADDRESS_MATCH1_10_BIT =
        3 /*!< Address match 0 (10-bit) or Address match 1 (10-bit) */,
    ADDRESS_MATCH0_7_BIT_OR_ADDRESS_MATCH1_10_BIT =
        4 /*!< Address match 0 (7-bit) or Address match 1 (10-bit) */,
    ADDRESS_MATCH0_10_BIT_OR_ADDRESS_MATCH1_7_BIT =
        5 /*!< Address match 0 (10-bit) or Address match 1 (7-bit) */,
    FROM_ADDRESS_MATCH0_7_BIT_TO_ADDRESS_MATCH1_7_BIT =
        6 /*!< From Address match 0 (7-bit) to Address match 1 (7-bit) */,
    FROM_ADDRESS_MATCH0_10_BIT_TO_ADDRESS_MATCH1__cont =
        7 /*!< From Address match 0 (10-bit) to Address match 1 (10-bit) */
};
static_assert(sizeof(LPI2C1_SCFGR1_ADDRCFG) == 1);

/**
 * Converts LPI2C1_SCFGR1_ADDRCFG to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(LPI2C1_SCFGR1_ADDRCFG instance)
{
    const char *result = "UNKNOWN LPI2C1_SCFGR1_ADDRCFG";

    switch (instance)
    {
    case LPI2C1_SCFGR1_ADDRCFG::ADDRESS_MATCH0_7_BIT:
        result = "ADDRESS_MATCH0_7_BIT";
        break;
    case LPI2C1_SCFGR1_ADDRCFG::ADDRESS_MATCH0_10_BIT:
        result = "ADDRESS_MATCH0_10_BIT";
        break;
    case LPI2C1_SCFGR1_ADDRCFG::ADDRESS_MATCH0_7_BIT_OR_ADDRESS_MATCH1_7_BIT:
        result = "ADDRESS_MATCH0_7_BIT_OR_ADDRESS_MATCH1_7_BIT";
        break;
    case LPI2C1_SCFGR1_ADDRCFG::ADDRESS_MATCH0_10_BIT_OR_ADDRESS_MATCH1_10_BIT:
        result = "ADDRESS_MATCH0_10_BIT_OR_ADDRESS_MATCH1_10_BIT";
        break;
    case LPI2C1_SCFGR1_ADDRCFG::ADDRESS_MATCH0_7_BIT_OR_ADDRESS_MATCH1_10_BIT:
        result = "ADDRESS_MATCH0_7_BIT_OR_ADDRESS_MATCH1_10_BIT";
        break;
    case LPI2C1_SCFGR1_ADDRCFG::ADDRESS_MATCH0_10_BIT_OR_ADDRESS_MATCH1_7_BIT:
        result = "ADDRESS_MATCH0_10_BIT_OR_ADDRESS_MATCH1_7_BIT";
        break;
    case LPI2C1_SCFGR1_ADDRCFG::
        FROM_ADDRESS_MATCH0_7_BIT_TO_ADDRESS_MATCH1_7_BIT:
        result = "FROM_ADDRESS_MATCH0_7_BIT_TO_ADDRESS_MATCH1_7_BIT";
        break;
    case LPI2C1_SCFGR1_ADDRCFG::
        FROM_ADDRESS_MATCH0_10_BIT_TO_ADDRESS_MATCH1__cont:
        result = "FROM_ADDRESS_MATCH0_10_BIT_TO_ADDRESS_MATCH1__cont";
        break;
    }

    return result;
}

/**
 * Converts a C string to LPI2C1_SCFGR1_ADDRCFG.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, LPI2C1_SCFGR1_ADDRCFG &output)
{
    bool result = false;

    if ((result = !strncmp(data, "ADDRESS_MATCH0_7_BIT", 20)))
    {
        output = LPI2C1_SCFGR1_ADDRCFG::ADDRESS_MATCH0_7_BIT;
    }
    else if ((result = !strncmp(data, "ADDRESS_MATCH0_10_BIT", 21)))
    {
        output = LPI2C1_SCFGR1_ADDRCFG::ADDRESS_MATCH0_10_BIT;
    }
    else if ((result = !strncmp(
                  data, "ADDRESS_MATCH0_7_BIT_OR_ADDRESS_MATCH1_7_BIT", 44)))
    {
        output = LPI2C1_SCFGR1_ADDRCFG::
            ADDRESS_MATCH0_7_BIT_OR_ADDRESS_MATCH1_7_BIT;
    }
    else if ((result = !strncmp(
                  data, "ADDRESS_MATCH0_10_BIT_OR_ADDRESS_MATCH1_10_BIT", 46)))
    {
        output = LPI2C1_SCFGR1_ADDRCFG::
            ADDRESS_MATCH0_10_BIT_OR_ADDRESS_MATCH1_10_BIT;
    }
    else if ((result = !strncmp(
                  data, "ADDRESS_MATCH0_7_BIT_OR_ADDRESS_MATCH1_10_BIT", 45)))
    {
        output = LPI2C1_SCFGR1_ADDRCFG::
            ADDRESS_MATCH0_7_BIT_OR_ADDRESS_MATCH1_10_BIT;
    }
    else if ((result = !strncmp(
                  data, "ADDRESS_MATCH0_10_BIT_OR_ADDRESS_MATCH1_7_BIT", 45)))
    {
        output = LPI2C1_SCFGR1_ADDRCFG::
            ADDRESS_MATCH0_10_BIT_OR_ADDRESS_MATCH1_7_BIT;
    }
    else if ((result = !strncmp(
                  data, "FROM_ADDRESS_MATCH0_7_BIT_TO_ADDRESS_MATCH1_7_BIT",
                  49)))
    {
        output = LPI2C1_SCFGR1_ADDRCFG::
            FROM_ADDRESS_MATCH0_7_BIT_TO_ADDRESS_MATCH1_7_BIT;
    }
    else if ((result = !strncmp(
                  data, "FROM_ADDRESS_MATCH0_10_BIT_TO_ADDRESS_MATCH1__cont",
                  50)))
    {
        output = LPI2C1_SCFGR1_ADDRCFG::
            FROM_ADDRESS_MATCH0_10_BIT_TO_ADDRESS_MATCH1__cont;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7