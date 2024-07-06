/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class SystemControl_CPACR_CP6 : uint8_t
{
    _0 /*!< Access denied. Any attempted access generates a NOCP UsageFault. */
        ,
    _1 = 1 /*!< Privileged access only. An unprivileged access generates a NOCP
              UsageFault. */
        ,
    _3 = 3 /*!< Full access. */
};
static_assert(sizeof(SystemControl_CPACR_CP6) == 1);

/**
 * Converts SystemControl_CPACR_CP6 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SystemControl_CPACR_CP6 instance)
{
    const char *result = "UNKNOWN SystemControl_CPACR_CP6";

    switch (instance)
    {
    case SystemControl_CPACR_CP6::_0:
        result = "_0";
        break;
    case SystemControl_CPACR_CP6::_1:
        result = "_1";
        break;
    case SystemControl_CPACR_CP6::_3:
        result = "_3";
        break;
    }

    return result;
}

/**
 * Converts a C string to SystemControl_CPACR_CP6.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SystemControl_CPACR_CP6 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_0", 2)))
    {
        output = SystemControl_CPACR_CP6::_0;
    }
    else if ((result = !strncmp(data, "_1", 2)))
    {
        output = SystemControl_CPACR_CP6::_1;
    }
    else if ((result = !strncmp(data, "_3", 2)))
    {
        output = SystemControl_CPACR_CP6::_3;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7
