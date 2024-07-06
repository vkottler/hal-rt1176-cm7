/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class LPADC1_CMDH2_CMPEN : uint8_t
{
    _0 /*!< Compare disabled. */,
    _2 = 2 /*!< Compare enabled. Store on true. */,
    _3 = 3 /*!< Compare enabled. Repeat channel acquisition
              (sample/convert/compare) until true. */
};
static_assert(sizeof(LPADC1_CMDH2_CMPEN) == 1);

/**
 * Converts LPADC1_CMDH2_CMPEN to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(LPADC1_CMDH2_CMPEN instance)
{
    const char *result = "UNKNOWN LPADC1_CMDH2_CMPEN";

    switch (instance)
    {
    case LPADC1_CMDH2_CMPEN::_0:
        result = "_0";
        break;
    case LPADC1_CMDH2_CMPEN::_2:
        result = "_2";
        break;
    case LPADC1_CMDH2_CMPEN::_3:
        result = "_3";
        break;
    }

    return result;
}

/**
 * Converts a C string to LPADC1_CMDH2_CMPEN.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, LPADC1_CMDH2_CMPEN &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_0", 2)))
    {
        output = LPADC1_CMDH2_CMPEN::_0;
    }
    else if ((result = !strncmp(data, "_2", 2)))
    {
        output = LPADC1_CMDH2_CMPEN::_2;
    }
    else if ((result = !strncmp(data, "_3", 2)))
    {
        output = LPADC1_CMDH2_CMPEN::_3;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7
