/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class CCM_GPR_PRIVATE7_AUTHEN_WHITE_LIST : uint8_t
{
    _0 /*!< This domain is NOT allowed to change clock. */,
    _1 = 1 /*!< This domain is allowed to change clock. */
};
static_assert(sizeof(CCM_GPR_PRIVATE7_AUTHEN_WHITE_LIST) == 1);

/**
 * Converts CCM_GPR_PRIVATE7_AUTHEN_WHITE_LIST to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CCM_GPR_PRIVATE7_AUTHEN_WHITE_LIST instance)
{
    const char *result = "UNKNOWN CCM_GPR_PRIVATE7_AUTHEN_WHITE_LIST";

    switch (instance)
    {
    case CCM_GPR_PRIVATE7_AUTHEN_WHITE_LIST::_0:
        result = "_0";
        break;
    case CCM_GPR_PRIVATE7_AUTHEN_WHITE_LIST::_1:
        result = "_1";
        break;
    }

    return result;
}

/**
 * Converts a C string to CCM_GPR_PRIVATE7_AUTHEN_WHITE_LIST.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        CCM_GPR_PRIVATE7_AUTHEN_WHITE_LIST &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_0", 2)))
    {
        output = CCM_GPR_PRIVATE7_AUTHEN_WHITE_LIST::_0;
    }
    else if ((result = !strncmp(data, "_1", 2)))
    {
        output = CCM_GPR_PRIVATE7_AUTHEN_WHITE_LIST::_1;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7
