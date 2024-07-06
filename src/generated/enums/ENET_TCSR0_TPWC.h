/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class ENET_TCSR0_TPWC : uint8_t
{
    _1 /*!< Pulse width is one 1588-clock cycle. */,
    _2 = 1 /*!< Pulse width is two 1588-clock cycles. */,
    _3 = 2 /*!< Pulse width is three 1588-clock cycles. */,
    _4 = 3 /*!< Pulse width is four 1588-clock cycles. */,
    _32 = 31 /*!< Pulse width is 32 1588-clock cycles. */
};
static_assert(sizeof(ENET_TCSR0_TPWC) == 1);

/**
 * Converts ENET_TCSR0_TPWC to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(ENET_TCSR0_TPWC instance)
{
    const char *result = "UNKNOWN ENET_TCSR0_TPWC";

    switch (instance)
    {
    case ENET_TCSR0_TPWC::_1:
        result = "_1";
        break;
    case ENET_TCSR0_TPWC::_2:
        result = "_2";
        break;
    case ENET_TCSR0_TPWC::_3:
        result = "_3";
        break;
    case ENET_TCSR0_TPWC::_4:
        result = "_4";
        break;
    case ENET_TCSR0_TPWC::_32:
        result = "_32";
        break;
    }

    return result;
}

/**
 * Converts a C string to ENET_TCSR0_TPWC.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, ENET_TCSR0_TPWC &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_1", 2)))
    {
        output = ENET_TCSR0_TPWC::_1;
    }
    else if ((result = !strncmp(data, "_2", 2)))
    {
        output = ENET_TCSR0_TPWC::_2;
    }
    else if ((result = !strncmp(data, "_3", 2)))
    {
        output = ENET_TCSR0_TPWC::_3;
    }
    else if ((result = !strncmp(data, "_4", 2)))
    {
        output = ENET_TCSR0_TPWC::_4;
    }
    else if ((result = !strncmp(data, "_32", 3)))
    {
        output = ENET_TCSR0_TPWC::_32;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7
