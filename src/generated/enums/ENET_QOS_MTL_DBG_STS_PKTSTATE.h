/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class ENET_QOS_MTL_DBG_STS_PKTSTATE : uint8_t
{
    PKT_DATA /*!< Packet Data */,
    CW_NS = 1 /*!< Control Word/Normal Status */,
    SOP_LS = 2 /*!< SOP Data/Last Status */,
    EOP = 3 /*!< EOP Data/EOP */
};
static_assert(sizeof(ENET_QOS_MTL_DBG_STS_PKTSTATE) == 1);

/**
 * Converts ENET_QOS_MTL_DBG_STS_PKTSTATE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(ENET_QOS_MTL_DBG_STS_PKTSTATE instance)
{
    const char *result = "UNKNOWN ENET_QOS_MTL_DBG_STS_PKTSTATE";

    switch (instance)
    {
    case ENET_QOS_MTL_DBG_STS_PKTSTATE::PKT_DATA:
        result = "PKT_DATA";
        break;
    case ENET_QOS_MTL_DBG_STS_PKTSTATE::CW_NS:
        result = "CW_NS";
        break;
    case ENET_QOS_MTL_DBG_STS_PKTSTATE::SOP_LS:
        result = "SOP_LS";
        break;
    case ENET_QOS_MTL_DBG_STS_PKTSTATE::EOP:
        result = "EOP";
        break;
    }

    return result;
}

/**
 * Converts a C string to ENET_QOS_MTL_DBG_STS_PKTSTATE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        ENET_QOS_MTL_DBG_STS_PKTSTATE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "PKT_DATA", 8)))
    {
        output = ENET_QOS_MTL_DBG_STS_PKTSTATE::PKT_DATA;
    }
    else if ((result = !strncmp(data, "CW_NS", 5)))
    {
        output = ENET_QOS_MTL_DBG_STS_PKTSTATE::CW_NS;
    }
    else if ((result = !strncmp(data, "SOP_LS", 6)))
    {
        output = ENET_QOS_MTL_DBG_STS_PKTSTATE::SOP_LS;
    }
    else if ((result = !strncmp(data, "EOP", 3)))
    {
        output = ENET_QOS_MTL_DBG_STS_PKTSTATE::EOP;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7