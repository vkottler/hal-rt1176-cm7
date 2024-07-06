/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class TMPSNS_CTRL0_V_SEL : uint8_t
{
    V_SEL_0 /*!< Normal temperature measuring mode */
};
static_assert(sizeof(TMPSNS_CTRL0_V_SEL) == 1);

/**
 * Converts TMPSNS_CTRL0_V_SEL to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(TMPSNS_CTRL0_V_SEL instance)
{
    const char *result = "UNKNOWN TMPSNS_CTRL0_V_SEL";

    switch (instance)
    {
    case TMPSNS_CTRL0_V_SEL::V_SEL_0:
        result = "V_SEL_0";
        break;
    }

    return result;
}

/**
 * Converts a C string to TMPSNS_CTRL0_V_SEL.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, TMPSNS_CTRL0_V_SEL &output)
{
    bool result = false;

    if ((result = !strncmp(data, "V_SEL_0", 7)))
    {
        output = TMPSNS_CTRL0_V_SEL::V_SEL_0;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7
