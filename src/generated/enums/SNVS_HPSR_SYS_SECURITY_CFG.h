/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class SNVS_HPSR_SYS_SECURITY_CFG : uint8_t
{
    FAB_CONFIG /*!< Fab Configuration - the default configuration of newly
                  fabricated chips */
        ,
    OPEN_CONFIG = 1 /*!< Open Configuration - the configuration after
                       NXP-programmable fuses have been blown */
        ,
    CLOSED_CONFIG = 3 /*!< Closed Configuration - the configuration after
                         OEM-programmable fuses have been blown */
        ,
    FIELD_RETURN_CONFIG =
        7 /*!< Field Return Configuration - the configuration of chips that are
             returned to NXP for analysis */
};
static_assert(sizeof(SNVS_HPSR_SYS_SECURITY_CFG) == 1);

/**
 * Converts SNVS_HPSR_SYS_SECURITY_CFG to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SNVS_HPSR_SYS_SECURITY_CFG instance)
{
    const char *result = "UNKNOWN SNVS_HPSR_SYS_SECURITY_CFG";

    switch (instance)
    {
    case SNVS_HPSR_SYS_SECURITY_CFG::FAB_CONFIG:
        result = "FAB_CONFIG";
        break;
    case SNVS_HPSR_SYS_SECURITY_CFG::OPEN_CONFIG:
        result = "OPEN_CONFIG";
        break;
    case SNVS_HPSR_SYS_SECURITY_CFG::CLOSED_CONFIG:
        result = "CLOSED_CONFIG";
        break;
    case SNVS_HPSR_SYS_SECURITY_CFG::FIELD_RETURN_CONFIG:
        result = "FIELD_RETURN_CONFIG";
        break;
    }

    return result;
}

/**
 * Converts a C string to SNVS_HPSR_SYS_SECURITY_CFG.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SNVS_HPSR_SYS_SECURITY_CFG &output)
{
    bool result = false;

    if ((result = !strncmp(data, "FAB_CONFIG", 10)))
    {
        output = SNVS_HPSR_SYS_SECURITY_CFG::FAB_CONFIG;
    }
    else if ((result = !strncmp(data, "OPEN_CONFIG", 11)))
    {
        output = SNVS_HPSR_SYS_SECURITY_CFG::OPEN_CONFIG;
    }
    else if ((result = !strncmp(data, "CLOSED_CONFIG", 13)))
    {
        output = SNVS_HPSR_SYS_SECURITY_CFG::CLOSED_CONFIG;
    }
    else if ((result = !strncmp(data, "FIELD_RETURN_CONFIG", 19)))
    {
        output = SNVS_HPSR_SYS_SECURITY_CFG::FIELD_RETURN_CONFIG;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7
