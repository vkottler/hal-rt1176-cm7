/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class
    GPC_CPU_MODE_CTRL_0_CM_IRQ_WAKEUP_STAT_6_IRQ_WAKEUP_STAT_192_223 : uint16_t
{
    b0 /*!< None */,
    b1 = 1 /*!< Valid */
};
static_assert(
    sizeof(GPC_CPU_MODE_CTRL_0_CM_IRQ_WAKEUP_STAT_6_IRQ_WAKEUP_STAT_192_223) ==
    2);

/**
 * Converts GPC_CPU_MODE_CTRL_0_CM_IRQ_WAKEUP_STAT_6_IRQ_WAKEUP_STAT_192_223 to
 * a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(
    GPC_CPU_MODE_CTRL_0_CM_IRQ_WAKEUP_STAT_6_IRQ_WAKEUP_STAT_192_223 instance)
{
    const char *result =
        "UNKNOWN "
        "GPC_CPU_MODE_CTRL_0_CM_IRQ_WAKEUP_STAT_6_IRQ_WAKEUP_STAT_192_223";

    switch (instance)
    {
    case GPC_CPU_MODE_CTRL_0_CM_IRQ_WAKEUP_STAT_6_IRQ_WAKEUP_STAT_192_223::b0:
        result = "b0";
        break;
    case GPC_CPU_MODE_CTRL_0_CM_IRQ_WAKEUP_STAT_6_IRQ_WAKEUP_STAT_192_223::b1:
        result = "b1";
        break;
    }

    return result;
}

/**
 * Converts a C string to
 * GPC_CPU_MODE_CTRL_0_CM_IRQ_WAKEUP_STAT_6_IRQ_WAKEUP_STAT_192_223.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(
    const char *data,
    GPC_CPU_MODE_CTRL_0_CM_IRQ_WAKEUP_STAT_6_IRQ_WAKEUP_STAT_192_223 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "b0", 2)))
    {
        output =
            GPC_CPU_MODE_CTRL_0_CM_IRQ_WAKEUP_STAT_6_IRQ_WAKEUP_STAT_192_223::
                b0;
    }
    else if ((result = !strncmp(data, "b1", 2)))
    {
        output =
            GPC_CPU_MODE_CTRL_0_CM_IRQ_WAKEUP_STAT_6_IRQ_WAKEUP_STAT_192_223::
                b1;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7
