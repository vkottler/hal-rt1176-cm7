/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class PGMC_BPC0_BPC_MODE_DOMAIN_ASSIGN : uint8_t
{
    d0 /*!< Domain 0 */,
    d1 = 1 /*!< Domain 1 */,
    d2 = 2 /*!< Domain 2 */,
    d3 = 3 /*!< Domain 3 */
};
static_assert(sizeof(PGMC_BPC0_BPC_MODE_DOMAIN_ASSIGN) == 1);

/**
 * Converts PGMC_BPC0_BPC_MODE_DOMAIN_ASSIGN to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PGMC_BPC0_BPC_MODE_DOMAIN_ASSIGN instance)
{
    const char *result = "UNKNOWN PGMC_BPC0_BPC_MODE_DOMAIN_ASSIGN";

    switch (instance)
    {
    case PGMC_BPC0_BPC_MODE_DOMAIN_ASSIGN::d0:
        result = "d0";
        break;
    case PGMC_BPC0_BPC_MODE_DOMAIN_ASSIGN::d1:
        result = "d1";
        break;
    case PGMC_BPC0_BPC_MODE_DOMAIN_ASSIGN::d2:
        result = "d2";
        break;
    case PGMC_BPC0_BPC_MODE_DOMAIN_ASSIGN::d3:
        result = "d3";
        break;
    }

    return result;
}

/**
 * Converts a C string to PGMC_BPC0_BPC_MODE_DOMAIN_ASSIGN.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        PGMC_BPC0_BPC_MODE_DOMAIN_ASSIGN &output)
{
    bool result = false;

    if ((result = !strncmp(data, "d0", 2)))
    {
        output = PGMC_BPC0_BPC_MODE_DOMAIN_ASSIGN::d0;
    }
    else if ((result = !strncmp(data, "d1", 2)))
    {
        output = PGMC_BPC0_BPC_MODE_DOMAIN_ASSIGN::d1;
    }
    else if ((result = !strncmp(data, "d2", 2)))
    {
        output = PGMC_BPC0_BPC_MODE_DOMAIN_ASSIGN::d2;
    }
    else if ((result = !strncmp(data, "d3", 2)))
    {
        output = PGMC_BPC0_BPC_MODE_DOMAIN_ASSIGN::d3;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7