/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class PXP_PORTER_DUFF_CTRL_S1_GLOBAL_ALPHA_MODE : uint8_t
{
    _0 /*!< Global alpha */,
    _1 = 1 /*!< Local alpha */,
    _2 = 2 /*!< Scaled alpha */,
    _3 = 3 /*!< Scaled alpha */
};
static_assert(sizeof(PXP_PORTER_DUFF_CTRL_S1_GLOBAL_ALPHA_MODE) == 1);

/**
 * Converts PXP_PORTER_DUFF_CTRL_S1_GLOBAL_ALPHA_MODE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(
    PXP_PORTER_DUFF_CTRL_S1_GLOBAL_ALPHA_MODE instance)
{
    const char *result = "UNKNOWN PXP_PORTER_DUFF_CTRL_S1_GLOBAL_ALPHA_MODE";

    switch (instance)
    {
    case PXP_PORTER_DUFF_CTRL_S1_GLOBAL_ALPHA_MODE::_0:
        result = "_0";
        break;
    case PXP_PORTER_DUFF_CTRL_S1_GLOBAL_ALPHA_MODE::_1:
        result = "_1";
        break;
    case PXP_PORTER_DUFF_CTRL_S1_GLOBAL_ALPHA_MODE::_2:
        result = "_2";
        break;
    case PXP_PORTER_DUFF_CTRL_S1_GLOBAL_ALPHA_MODE::_3:
        result = "_3";
        break;
    }

    return result;
}

/**
 * Converts a C string to PXP_PORTER_DUFF_CTRL_S1_GLOBAL_ALPHA_MODE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        PXP_PORTER_DUFF_CTRL_S1_GLOBAL_ALPHA_MODE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_0", 2)))
    {
        output = PXP_PORTER_DUFF_CTRL_S1_GLOBAL_ALPHA_MODE::_0;
    }
    else if ((result = !strncmp(data, "_1", 2)))
    {
        output = PXP_PORTER_DUFF_CTRL_S1_GLOBAL_ALPHA_MODE::_1;
    }
    else if ((result = !strncmp(data, "_2", 2)))
    {
        output = PXP_PORTER_DUFF_CTRL_S1_GLOBAL_ALPHA_MODE::_2;
    }
    else if ((result = !strncmp(data, "_3", 2)))
    {
        output = PXP_PORTER_DUFF_CTRL_S1_GLOBAL_ALPHA_MODE::_3;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7
