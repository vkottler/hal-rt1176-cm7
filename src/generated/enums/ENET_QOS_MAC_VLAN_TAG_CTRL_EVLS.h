/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class ENET_QOS_MAC_VLAN_TAG_CTRL_EVLS : uint8_t
{
    DONOT /*!< Do not strip */,
    IFPASS = 1 /*!< Strip if VLAN filter passes */,
    IFFAIL = 2 /*!< Strip if VLAN filter fails */,
    ALWAYS = 3 /*!< Always strip */
};
static_assert(sizeof(ENET_QOS_MAC_VLAN_TAG_CTRL_EVLS) == 1);

/**
 * Converts ENET_QOS_MAC_VLAN_TAG_CTRL_EVLS to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(ENET_QOS_MAC_VLAN_TAG_CTRL_EVLS instance)
{
    const char *result = "UNKNOWN ENET_QOS_MAC_VLAN_TAG_CTRL_EVLS";

    switch (instance)
    {
    case ENET_QOS_MAC_VLAN_TAG_CTRL_EVLS::DONOT:
        result = "DONOT";
        break;
    case ENET_QOS_MAC_VLAN_TAG_CTRL_EVLS::IFPASS:
        result = "IFPASS";
        break;
    case ENET_QOS_MAC_VLAN_TAG_CTRL_EVLS::IFFAIL:
        result = "IFFAIL";
        break;
    case ENET_QOS_MAC_VLAN_TAG_CTRL_EVLS::ALWAYS:
        result = "ALWAYS";
        break;
    }

    return result;
}

/**
 * Converts a C string to ENET_QOS_MAC_VLAN_TAG_CTRL_EVLS.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        ENET_QOS_MAC_VLAN_TAG_CTRL_EVLS &output)
{
    bool result = false;

    if ((result = !strncmp(data, "DONOT", 5)))
    {
        output = ENET_QOS_MAC_VLAN_TAG_CTRL_EVLS::DONOT;
    }
    else if ((result = !strncmp(data, "IFPASS", 6)))
    {
        output = ENET_QOS_MAC_VLAN_TAG_CTRL_EVLS::IFPASS;
    }
    else if ((result = !strncmp(data, "IFFAIL", 6)))
    {
        output = ENET_QOS_MAC_VLAN_TAG_CTRL_EVLS::IFFAIL;
    }
    else if ((result = !strncmp(data, "ALWAYS", 6)))
    {
        output = ENET_QOS_MAC_VLAN_TAG_CTRL_EVLS::ALWAYS;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7
