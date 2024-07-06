/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class LCDIF_PIGEON_11_2_SIG_ANOTHER : uint8_t
{
    CLEAR_USING_MASK /*!< Keep active until mask off */
};
static_assert(sizeof(LCDIF_PIGEON_11_2_SIG_ANOTHER) == 1);

/**
 * Converts LCDIF_PIGEON_11_2_SIG_ANOTHER to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(LCDIF_PIGEON_11_2_SIG_ANOTHER instance)
{
    const char *result = "UNKNOWN LCDIF_PIGEON_11_2_SIG_ANOTHER";

    switch (instance)
    {
    case LCDIF_PIGEON_11_2_SIG_ANOTHER::CLEAR_USING_MASK:
        result = "CLEAR_USING_MASK";
        break;
    }

    return result;
}

/**
 * Converts a C string to LCDIF_PIGEON_11_2_SIG_ANOTHER.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        LCDIF_PIGEON_11_2_SIG_ANOTHER &output)
{
    bool result = false;

    if ((result = !strncmp(data, "CLEAR_USING_MASK", 16)))
    {
        output = LCDIF_PIGEON_11_2_SIG_ANOTHER::CLEAR_USING_MASK;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7
