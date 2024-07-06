/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class LCDIF_PIGEON_3_1_SET_CNT : uint16_t
{
    START_ACTIVE /*!< Start as active */
};
static_assert(sizeof(LCDIF_PIGEON_3_1_SET_CNT) == 2);

/**
 * Converts LCDIF_PIGEON_3_1_SET_CNT to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(LCDIF_PIGEON_3_1_SET_CNT instance)
{
    const char *result = "UNKNOWN LCDIF_PIGEON_3_1_SET_CNT";

    switch (instance)
    {
    case LCDIF_PIGEON_3_1_SET_CNT::START_ACTIVE:
        result = "START_ACTIVE";
        break;
    }

    return result;
}

/**
 * Converts a C string to LCDIF_PIGEON_3_1_SET_CNT.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, LCDIF_PIGEON_3_1_SET_CNT &output)
{
    bool result = false;

    if ((result = !strncmp(data, "START_ACTIVE", 12)))
    {
        output = LCDIF_PIGEON_3_1_SET_CNT::START_ACTIVE;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7
