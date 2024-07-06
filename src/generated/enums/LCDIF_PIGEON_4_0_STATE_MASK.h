/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class LCDIF_PIGEON_4_0_STATE_MASK : uint8_t
{
    FS = 1 /*!< FRAME SYNC */,
    FB = 2 /*!< FRAME BEGIN */,
    FD = 4 /*!< FRAME DATA */,
    FE = 8 /*!< FRAME END */,
    LS = 16 /*!< LINE SYNC */,
    LB = 32 /*!< LINE BEGIN */,
    LD = 64 /*!< LINE DATA */,
    LE = 128 /*!< LINE END */
};
static_assert(sizeof(LCDIF_PIGEON_4_0_STATE_MASK) == 1);

/**
 * Converts LCDIF_PIGEON_4_0_STATE_MASK to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(LCDIF_PIGEON_4_0_STATE_MASK instance)
{
    const char *result = "UNKNOWN LCDIF_PIGEON_4_0_STATE_MASK";

    switch (instance)
    {
    case LCDIF_PIGEON_4_0_STATE_MASK::FS:
        result = "FS";
        break;
    case LCDIF_PIGEON_4_0_STATE_MASK::FB:
        result = "FB";
        break;
    case LCDIF_PIGEON_4_0_STATE_MASK::FD:
        result = "FD";
        break;
    case LCDIF_PIGEON_4_0_STATE_MASK::FE:
        result = "FE";
        break;
    case LCDIF_PIGEON_4_0_STATE_MASK::LS:
        result = "LS";
        break;
    case LCDIF_PIGEON_4_0_STATE_MASK::LB:
        result = "LB";
        break;
    case LCDIF_PIGEON_4_0_STATE_MASK::LD:
        result = "LD";
        break;
    case LCDIF_PIGEON_4_0_STATE_MASK::LE:
        result = "LE";
        break;
    }

    return result;
}

/**
 * Converts a C string to LCDIF_PIGEON_4_0_STATE_MASK.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, LCDIF_PIGEON_4_0_STATE_MASK &output)
{
    bool result = false;

    if ((result = !strncmp(data, "FS", 2)))
    {
        output = LCDIF_PIGEON_4_0_STATE_MASK::FS;
    }
    else if ((result = !strncmp(data, "FB", 2)))
    {
        output = LCDIF_PIGEON_4_0_STATE_MASK::FB;
    }
    else if ((result = !strncmp(data, "FD", 2)))
    {
        output = LCDIF_PIGEON_4_0_STATE_MASK::FD;
    }
    else if ((result = !strncmp(data, "FE", 2)))
    {
        output = LCDIF_PIGEON_4_0_STATE_MASK::FE;
    }
    else if ((result = !strncmp(data, "LS", 2)))
    {
        output = LCDIF_PIGEON_4_0_STATE_MASK::LS;
    }
    else if ((result = !strncmp(data, "LB", 2)))
    {
        output = LCDIF_PIGEON_4_0_STATE_MASK::LB;
    }
    else if ((result = !strncmp(data, "LD", 2)))
    {
        output = LCDIF_PIGEON_4_0_STATE_MASK::LD;
    }
    else if ((result = !strncmp(data, "LE", 2)))
    {
        output = LCDIF_PIGEON_4_0_STATE_MASK::LE;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7
