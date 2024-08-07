/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class ENET_QOS_MTL_OPERATION_MODE_SCHALG : uint8_t
{
    WRR /*!< WRR algorithm */,
    WFQ = 1 /*!< WFQ algorithm when DCB feature is selected.Otherwise, Reserved
             */
        ,
    DWRR = 2 /*!< DWRR algorithm when DCB feature is selected.Otherwise,
                Reserved */
        ,
    SP = 3 /*!< Strict priority algorithm */
};
static_assert(sizeof(ENET_QOS_MTL_OPERATION_MODE_SCHALG) == 1);

/**
 * Converts ENET_QOS_MTL_OPERATION_MODE_SCHALG to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(ENET_QOS_MTL_OPERATION_MODE_SCHALG instance)
{
    const char *result = "UNKNOWN ENET_QOS_MTL_OPERATION_MODE_SCHALG";

    switch (instance)
    {
    case ENET_QOS_MTL_OPERATION_MODE_SCHALG::WRR:
        result = "WRR";
        break;
    case ENET_QOS_MTL_OPERATION_MODE_SCHALG::WFQ:
        result = "WFQ";
        break;
    case ENET_QOS_MTL_OPERATION_MODE_SCHALG::DWRR:
        result = "DWRR";
        break;
    case ENET_QOS_MTL_OPERATION_MODE_SCHALG::SP:
        result = "SP";
        break;
    }

    return result;
}

/**
 * Converts a C string to ENET_QOS_MTL_OPERATION_MODE_SCHALG.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        ENET_QOS_MTL_OPERATION_MODE_SCHALG &output)
{
    bool result = false;

    if ((result = !strncmp(data, "WRR", 3)))
    {
        output = ENET_QOS_MTL_OPERATION_MODE_SCHALG::WRR;
    }
    else if ((result = !strncmp(data, "WFQ", 3)))
    {
        output = ENET_QOS_MTL_OPERATION_MODE_SCHALG::WFQ;
    }
    else if ((result = !strncmp(data, "DWRR", 4)))
    {
        output = ENET_QOS_MTL_OPERATION_MODE_SCHALG::DWRR;
    }
    else if ((result = !strncmp(data, "SP", 2)))
    {
        output = ENET_QOS_MTL_OPERATION_MODE_SCHALG::SP;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7
