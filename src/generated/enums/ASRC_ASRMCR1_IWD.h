/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class ASRC_ASRMCR1_IWD : uint8_t
{
    _24bit /*!< 24-bit audio data. */,
    _16bit = 1 /*!< 16-bit audio data. */,
    _8bit = 2 /*!< 8-bit audio data. */
};
static_assert(sizeof(ASRC_ASRMCR1_IWD) == 1);

/**
 * Converts ASRC_ASRMCR1_IWD to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(ASRC_ASRMCR1_IWD instance)
{
    const char *result = "UNKNOWN ASRC_ASRMCR1_IWD";

    switch (instance)
    {
    case ASRC_ASRMCR1_IWD::_24bit:
        result = "_24bit";
        break;
    case ASRC_ASRMCR1_IWD::_16bit:
        result = "_16bit";
        break;
    case ASRC_ASRMCR1_IWD::_8bit:
        result = "_8bit";
        break;
    }

    return result;
}

/**
 * Converts a C string to ASRC_ASRMCR1_IWD.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, ASRC_ASRMCR1_IWD &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_24bit", 6)))
    {
        output = ASRC_ASRMCR1_IWD::_24bit;
    }
    else if ((result = !strncmp(data, "_16bit", 6)))
    {
        output = ASRC_ASRMCR1_IWD::_16bit;
    }
    else if ((result = !strncmp(data, "_8bit", 5)))
    {
        output = ASRC_ASRMCR1_IWD::_8bit;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7
