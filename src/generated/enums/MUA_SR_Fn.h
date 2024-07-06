/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class MUA_SR_Fn : uint8_t
{
    zero /*!< BAFn bit in MUB.CR register is written 0 (default). */,
    one = 1 /*!< BAFn bit in MUB.CR register is written 1. */
};
static_assert(sizeof(MUA_SR_Fn) == 1);

/**
 * Converts MUA_SR_Fn to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(MUA_SR_Fn instance)
{
    const char *result = "UNKNOWN MUA_SR_Fn";

    switch (instance)
    {
    case MUA_SR_Fn::zero:
        result = "zero";
        break;
    case MUA_SR_Fn::one:
        result = "one";
        break;
    }

    return result;
}

/**
 * Converts a C string to MUA_SR_Fn.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, MUA_SR_Fn &output)
{
    bool result = false;

    if ((result = !strncmp(data, "zero", 4)))
    {
        output = MUA_SR_Fn::zero;
    }
    else if ((result = !strncmp(data, "one", 3)))
    {
        output = MUA_SR_Fn::one;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7