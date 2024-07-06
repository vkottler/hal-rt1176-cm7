/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class LPADC1_PARAM_TRIG_NUM : uint8_t
{
    TRIG_NUM_8 = 8 /*!< 8 hardware triggers implemented */
};
static_assert(sizeof(LPADC1_PARAM_TRIG_NUM) == 1);

/**
 * Converts LPADC1_PARAM_TRIG_NUM to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(LPADC1_PARAM_TRIG_NUM instance)
{
    const char *result = "UNKNOWN LPADC1_PARAM_TRIG_NUM";

    switch (instance)
    {
    case LPADC1_PARAM_TRIG_NUM::TRIG_NUM_8:
        result = "TRIG_NUM_8";
        break;
    }

    return result;
}

/**
 * Converts a C string to LPADC1_PARAM_TRIG_NUM.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, LPADC1_PARAM_TRIG_NUM &output)
{
    bool result = false;

    if ((result = !strncmp(data, "TRIG_NUM_8", 10)))
    {
        output = LPADC1_PARAM_TRIG_NUM::TRIG_NUM_8;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7