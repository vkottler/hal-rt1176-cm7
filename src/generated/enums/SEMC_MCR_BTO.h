/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class SEMC_MCR_BTO : uint8_t
{
    _0 /*!< 255*1 */,
    _1 = 1 /*!< 255*2 */,
    _31 = 31 /*!< 255*231 */
};
static_assert(sizeof(SEMC_MCR_BTO) == 1);

/**
 * Converts SEMC_MCR_BTO to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SEMC_MCR_BTO instance)
{
    const char *result = "UNKNOWN SEMC_MCR_BTO";

    switch (instance)
    {
    case SEMC_MCR_BTO::_0:
        result = "_0";
        break;
    case SEMC_MCR_BTO::_1:
        result = "_1";
        break;
    case SEMC_MCR_BTO::_31:
        result = "_31";
        break;
    }

    return result;
}

/**
 * Converts a C string to SEMC_MCR_BTO.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SEMC_MCR_BTO &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_0", 2)))
    {
        output = SEMC_MCR_BTO::_0;
    }
    else if ((result = !strncmp(data, "_1", 2)))
    {
        output = SEMC_MCR_BTO::_1;
    }
    else if ((result = !strncmp(data, "_31", 3)))
    {
        output = SEMC_MCR_BTO::_31;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7
