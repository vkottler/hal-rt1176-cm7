/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class PDM_CTRL_2_QSEL : uint8_t
{
    mq_mode /*!< Medium quality mode */,
    hq_mode = 1 /*!< High quality mode */,
    vlq2_mode = 4 /*!< Very low quality 2 mode */,
    vlq1_mode = 5 /*!< Very low quality 1 mode */,
    vlq0_mode = 6 /*!< Very low quality 0 mode */,
    lq_mode = 7 /*!< Low quality mode */
};
static_assert(sizeof(PDM_CTRL_2_QSEL) == 1);

/**
 * Converts PDM_CTRL_2_QSEL to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PDM_CTRL_2_QSEL instance)
{
    const char *result = "UNKNOWN PDM_CTRL_2_QSEL";

    switch (instance)
    {
    case PDM_CTRL_2_QSEL::mq_mode:
        result = "mq_mode";
        break;
    case PDM_CTRL_2_QSEL::hq_mode:
        result = "hq_mode";
        break;
    case PDM_CTRL_2_QSEL::vlq2_mode:
        result = "vlq2_mode";
        break;
    case PDM_CTRL_2_QSEL::vlq1_mode:
        result = "vlq1_mode";
        break;
    case PDM_CTRL_2_QSEL::vlq0_mode:
        result = "vlq0_mode";
        break;
    case PDM_CTRL_2_QSEL::lq_mode:
        result = "lq_mode";
        break;
    }

    return result;
}

/**
 * Converts a C string to PDM_CTRL_2_QSEL.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, PDM_CTRL_2_QSEL &output)
{
    bool result = false;

    if ((result = !strncmp(data, "mq_mode", 7)))
    {
        output = PDM_CTRL_2_QSEL::mq_mode;
    }
    else if ((result = !strncmp(data, "hq_mode", 7)))
    {
        output = PDM_CTRL_2_QSEL::hq_mode;
    }
    else if ((result = !strncmp(data, "vlq2_mode", 9)))
    {
        output = PDM_CTRL_2_QSEL::vlq2_mode;
    }
    else if ((result = !strncmp(data, "vlq1_mode", 9)))
    {
        output = PDM_CTRL_2_QSEL::vlq1_mode;
    }
    else if ((result = !strncmp(data, "vlq0_mode", 9)))
    {
        output = PDM_CTRL_2_QSEL::vlq0_mode;
    }
    else if ((result = !strncmp(data, "lq_mode", 7)))
    {
        output = PDM_CTRL_2_QSEL::lq_mode;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7
