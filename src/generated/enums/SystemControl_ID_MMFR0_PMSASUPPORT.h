/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class SystemControl_ID_MMFR0_PMSASUPPORT : uint8_t
{
    _0 /*!< Not supported */,
    _1 = 1 /*!< ARMv7-M unused */,
    _2 = 2 /*!< ARMv7-M unused */,
    _3 = 3 /*!< PMSAv7, providing support for a base region and subregions. */
};
static_assert(sizeof(SystemControl_ID_MMFR0_PMSASUPPORT) == 1);

/**
 * Converts SystemControl_ID_MMFR0_PMSASUPPORT to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SystemControl_ID_MMFR0_PMSASUPPORT instance)
{
    const char *result = "UNKNOWN SystemControl_ID_MMFR0_PMSASUPPORT";

    switch (instance)
    {
    case SystemControl_ID_MMFR0_PMSASUPPORT::_0:
        result = "_0";
        break;
    case SystemControl_ID_MMFR0_PMSASUPPORT::_1:
        result = "_1";
        break;
    case SystemControl_ID_MMFR0_PMSASUPPORT::_2:
        result = "_2";
        break;
    case SystemControl_ID_MMFR0_PMSASUPPORT::_3:
        result = "_3";
        break;
    }

    return result;
}

/**
 * Converts a C string to SystemControl_ID_MMFR0_PMSASUPPORT.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        SystemControl_ID_MMFR0_PMSASUPPORT &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_0", 2)))
    {
        output = SystemControl_ID_MMFR0_PMSASUPPORT::_0;
    }
    else if ((result = !strncmp(data, "_1", 2)))
    {
        output = SystemControl_ID_MMFR0_PMSASUPPORT::_1;
    }
    else if ((result = !strncmp(data, "_2", 2)))
    {
        output = SystemControl_ID_MMFR0_PMSASUPPORT::_2;
    }
    else if ((result = !strncmp(data, "_3", 2)))
    {
        output = SystemControl_ID_MMFR0_PMSASUPPORT::_3;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7
