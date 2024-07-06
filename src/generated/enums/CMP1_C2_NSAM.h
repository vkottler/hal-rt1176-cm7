/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class CMP1_C2_NSAM : uint8_t
{
    _0 /*!< The comparison result is sampled as soon as the active channel is
          scanned in one round-robin clock. */
        ,
    _1 = 1 /*!< The sampling takes place 1 round-robin clock cycle after the
              next cycle of the round-robin clock. */
        ,
    _2 = 2 /*!< The sampling takes place 2 round-robin clock cycles after the
              next cycle of the round-robin clock. */
        ,
    _3 = 3 /*!< The sampling takes place 3 round-robin clock cycles after the
              next cycle of the round-robin clock. */
};
static_assert(sizeof(CMP1_C2_NSAM) == 1);

/**
 * Converts CMP1_C2_NSAM to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CMP1_C2_NSAM instance)
{
    const char *result = "UNKNOWN CMP1_C2_NSAM";

    switch (instance)
    {
    case CMP1_C2_NSAM::_0:
        result = "_0";
        break;
    case CMP1_C2_NSAM::_1:
        result = "_1";
        break;
    case CMP1_C2_NSAM::_2:
        result = "_2";
        break;
    case CMP1_C2_NSAM::_3:
        result = "_3";
        break;
    }

    return result;
}

/**
 * Converts a C string to CMP1_C2_NSAM.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CMP1_C2_NSAM &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_0", 2)))
    {
        output = CMP1_C2_NSAM::_0;
    }
    else if ((result = !strncmp(data, "_1", 2)))
    {
        output = CMP1_C2_NSAM::_1;
    }
    else if ((result = !strncmp(data, "_2", 2)))
    {
        output = CMP1_C2_NSAM::_2;
    }
    else if ((result = !strncmp(data, "_3", 2)))
    {
        output = CMP1_C2_NSAM::_3;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7