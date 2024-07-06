/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class SystemControl_ID_DFR0_DEBUGMODEL : uint8_t
{
    _0 /*!< Not supported */,
    _1 = 1 /*!< Support for M profile Debug architecture, with memory-mapped
              access. */
};
static_assert(sizeof(SystemControl_ID_DFR0_DEBUGMODEL) == 1);

/**
 * Converts SystemControl_ID_DFR0_DEBUGMODEL to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SystemControl_ID_DFR0_DEBUGMODEL instance)
{
    const char *result = "UNKNOWN SystemControl_ID_DFR0_DEBUGMODEL";

    switch (instance)
    {
    case SystemControl_ID_DFR0_DEBUGMODEL::_0:
        result = "_0";
        break;
    case SystemControl_ID_DFR0_DEBUGMODEL::_1:
        result = "_1";
        break;
    }

    return result;
}

/**
 * Converts a C string to SystemControl_ID_DFR0_DEBUGMODEL.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        SystemControl_ID_DFR0_DEBUGMODEL &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_0", 2)))
    {
        output = SystemControl_ID_DFR0_DEBUGMODEL::_0;
    }
    else if ((result = !strncmp(data, "_1", 2)))
    {
        output = SystemControl_ID_DFR0_DEBUGMODEL::_1;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7
