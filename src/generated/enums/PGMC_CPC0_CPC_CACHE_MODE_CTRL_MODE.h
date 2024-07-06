/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class PGMC_CPC0_CPC_CACHE_MODE_CTRL_MODE : uint8_t
{
    _0 /*!< Not affected by any low power mode */,
    _1 = 1 /*!< Controlled by CPU power mode of the domain */,
    _2 = 2 /*!< Controlled by Setpoint */
};
static_assert(sizeof(PGMC_CPC0_CPC_CACHE_MODE_CTRL_MODE) == 1);

/**
 * Converts PGMC_CPC0_CPC_CACHE_MODE_CTRL_MODE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PGMC_CPC0_CPC_CACHE_MODE_CTRL_MODE instance)
{
    const char *result = "UNKNOWN PGMC_CPC0_CPC_CACHE_MODE_CTRL_MODE";

    switch (instance)
    {
    case PGMC_CPC0_CPC_CACHE_MODE_CTRL_MODE::_0:
        result = "_0";
        break;
    case PGMC_CPC0_CPC_CACHE_MODE_CTRL_MODE::_1:
        result = "_1";
        break;
    case PGMC_CPC0_CPC_CACHE_MODE_CTRL_MODE::_2:
        result = "_2";
        break;
    }

    return result;
}

/**
 * Converts a C string to PGMC_CPC0_CPC_CACHE_MODE_CTRL_MODE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        PGMC_CPC0_CPC_CACHE_MODE_CTRL_MODE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_0", 2)))
    {
        output = PGMC_CPC0_CPC_CACHE_MODE_CTRL_MODE::_0;
    }
    else if ((result = !strncmp(data, "_1", 2)))
    {
        output = PGMC_CPC0_CPC_CACHE_MODE_CTRL_MODE::_1;
    }
    else if ((result = !strncmp(data, "_2", 2)))
    {
        output = PGMC_CPC0_CPC_CACHE_MODE_CTRL_MODE::_2;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7
