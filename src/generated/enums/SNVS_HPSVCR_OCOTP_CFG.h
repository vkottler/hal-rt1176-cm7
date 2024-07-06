/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class SNVS_HPSVCR_OCOTP_CFG : uint8_t
{
    DISABLED /*!< OCOTP attack error is disabled */,
    NON_FATAL = 1 /*!< OCOTP attack error is a non-fatal violation */,
    FATAL = 3 /*!< OCOTP attack error is a fatal violation */
};
static_assert(sizeof(SNVS_HPSVCR_OCOTP_CFG) == 1);

/**
 * Converts SNVS_HPSVCR_OCOTP_CFG to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SNVS_HPSVCR_OCOTP_CFG instance)
{
    const char *result = "UNKNOWN SNVS_HPSVCR_OCOTP_CFG";

    switch (instance)
    {
    case SNVS_HPSVCR_OCOTP_CFG::DISABLED:
        result = "DISABLED";
        break;
    case SNVS_HPSVCR_OCOTP_CFG::NON_FATAL:
        result = "NON_FATAL";
        break;
    case SNVS_HPSVCR_OCOTP_CFG::FATAL:
        result = "FATAL";
        break;
    }

    return result;
}

/**
 * Converts a C string to SNVS_HPSVCR_OCOTP_CFG.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SNVS_HPSVCR_OCOTP_CFG &output)
{
    bool result = false;

    if ((result = !strncmp(data, "DISABLED", 8)))
    {
        output = SNVS_HPSVCR_OCOTP_CFG::DISABLED;
    }
    else if ((result = !strncmp(data, "NON_FATAL", 9)))
    {
        output = SNVS_HPSVCR_OCOTP_CFG::NON_FATAL;
    }
    else if ((result = !strncmp(data, "FATAL", 5)))
    {
        output = SNVS_HPSVCR_OCOTP_CFG::FATAL;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7
