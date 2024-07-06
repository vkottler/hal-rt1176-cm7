/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class ENET_QOS_MTL_EST_GCL_CONTROL_ESTEIEC : uint8_t
{
    _1BIT /*!< Insert 1 bit error */,
    _2BIT = 1 /*!< Insert 2 bit errors */,
    _3BIT = 2 /*!< Insert 3 bit errors */,
    _1BIT_ADDR = 3 /*!< Insert 1 bit error in address field */
};
static_assert(sizeof(ENET_QOS_MTL_EST_GCL_CONTROL_ESTEIEC) == 1);

/**
 * Converts ENET_QOS_MTL_EST_GCL_CONTROL_ESTEIEC to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(ENET_QOS_MTL_EST_GCL_CONTROL_ESTEIEC instance)
{
    const char *result = "UNKNOWN ENET_QOS_MTL_EST_GCL_CONTROL_ESTEIEC";

    switch (instance)
    {
    case ENET_QOS_MTL_EST_GCL_CONTROL_ESTEIEC::_1BIT:
        result = "_1BIT";
        break;
    case ENET_QOS_MTL_EST_GCL_CONTROL_ESTEIEC::_2BIT:
        result = "_2BIT";
        break;
    case ENET_QOS_MTL_EST_GCL_CONTROL_ESTEIEC::_3BIT:
        result = "_3BIT";
        break;
    case ENET_QOS_MTL_EST_GCL_CONTROL_ESTEIEC::_1BIT_ADDR:
        result = "_1BIT_ADDR";
        break;
    }

    return result;
}

/**
 * Converts a C string to ENET_QOS_MTL_EST_GCL_CONTROL_ESTEIEC.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        ENET_QOS_MTL_EST_GCL_CONTROL_ESTEIEC &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_1BIT", 5)))
    {
        output = ENET_QOS_MTL_EST_GCL_CONTROL_ESTEIEC::_1BIT;
    }
    else if ((result = !strncmp(data, "_2BIT", 5)))
    {
        output = ENET_QOS_MTL_EST_GCL_CONTROL_ESTEIEC::_2BIT;
    }
    else if ((result = !strncmp(data, "_3BIT", 5)))
    {
        output = ENET_QOS_MTL_EST_GCL_CONTROL_ESTEIEC::_3BIT;
    }
    else if ((result = !strncmp(data, "_1BIT_ADDR", 10)))
    {
        output = ENET_QOS_MTL_EST_GCL_CONTROL_ESTEIEC::_1BIT_ADDR;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7