/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class DSI_HOST_DPHY_INTFC_CO_CO : uint8_t
{
    _0 /*!< Divide by 1 */,
    _1 = 1 /*!< Divide by 2 */,
    _2 = 2 /*!< Divide by 4 */,
    _3 = 3 /*!< Divide by 8 */
};
static_assert(sizeof(DSI_HOST_DPHY_INTFC_CO_CO) == 1);

/**
 * Converts DSI_HOST_DPHY_INTFC_CO_CO to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(DSI_HOST_DPHY_INTFC_CO_CO instance)
{
    const char *result = "UNKNOWN DSI_HOST_DPHY_INTFC_CO_CO";

    switch (instance)
    {
    case DSI_HOST_DPHY_INTFC_CO_CO::_0:
        result = "_0";
        break;
    case DSI_HOST_DPHY_INTFC_CO_CO::_1:
        result = "_1";
        break;
    case DSI_HOST_DPHY_INTFC_CO_CO::_2:
        result = "_2";
        break;
    case DSI_HOST_DPHY_INTFC_CO_CO::_3:
        result = "_3";
        break;
    }

    return result;
}

/**
 * Converts a C string to DSI_HOST_DPHY_INTFC_CO_CO.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, DSI_HOST_DPHY_INTFC_CO_CO &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_0", 2)))
    {
        output = DSI_HOST_DPHY_INTFC_CO_CO::_0;
    }
    else if ((result = !strncmp(data, "_1", 2)))
    {
        output = DSI_HOST_DPHY_INTFC_CO_CO::_1;
    }
    else if ((result = !strncmp(data, "_2", 2)))
    {
        output = DSI_HOST_DPHY_INTFC_CO_CO::_2;
    }
    else if ((result = !strncmp(data, "_3", 2)))
    {
        output = DSI_HOST_DPHY_INTFC_CO_CO::_3;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7
