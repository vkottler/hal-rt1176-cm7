/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class SystemControl_ID_ISAR3_TRUENOP_INSTRS : uint8_t
{
    _0 /*!< None supported, ARMv7-M unused. */,
    _1 = 1 /*!< Adds support for encoding T1 of the MOV (register) instruction
              copying from a low register to a low register. */
};
static_assert(sizeof(SystemControl_ID_ISAR3_TRUENOP_INSTRS) == 1);

/**
 * Converts SystemControl_ID_ISAR3_TRUENOP_INSTRS to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SystemControl_ID_ISAR3_TRUENOP_INSTRS instance)
{
    const char *result = "UNKNOWN SystemControl_ID_ISAR3_TRUENOP_INSTRS";

    switch (instance)
    {
    case SystemControl_ID_ISAR3_TRUENOP_INSTRS::_0:
        result = "_0";
        break;
    case SystemControl_ID_ISAR3_TRUENOP_INSTRS::_1:
        result = "_1";
        break;
    }

    return result;
}

/**
 * Converts a C string to SystemControl_ID_ISAR3_TRUENOP_INSTRS.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        SystemControl_ID_ISAR3_TRUENOP_INSTRS &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_0", 2)))
    {
        output = SystemControl_ID_ISAR3_TRUENOP_INSTRS::_0;
    }
    else if ((result = !strncmp(data, "_1", 2)))
    {
        output = SystemControl_ID_ISAR3_TRUENOP_INSTRS::_1;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7
