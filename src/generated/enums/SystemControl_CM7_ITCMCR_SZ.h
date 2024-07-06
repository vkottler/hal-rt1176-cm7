/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class SystemControl_CM7_ITCMCR_SZ : uint8_t
{
    _0 /*!< No TCM implemented. */,
    _3 = 3 /*!< 4KB. */,
    _4 = 4 /*!< 8KB. */,
    _5 = 5 /*!< 16KB. */,
    _6 = 6 /*!< 32KB. */,
    _7 = 7 /*!< 64KB. */,
    _8 = 8 /*!< 128KB. */,
    _9 = 9 /*!< 256KB. */,
    _10 = 10 /*!< 512KB. */,
    _11 = 11 /*!< 1MB. */,
    _12 = 12 /*!< 2MB. */,
    _13 = 13 /*!< 4MB. */,
    _14 = 14 /*!< 8MB. */,
    _15 = 15 /*!< 16MB. */
};
static_assert(sizeof(SystemControl_CM7_ITCMCR_SZ) == 1);

/**
 * Converts SystemControl_CM7_ITCMCR_SZ to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SystemControl_CM7_ITCMCR_SZ instance)
{
    const char *result = "UNKNOWN SystemControl_CM7_ITCMCR_SZ";

    switch (instance)
    {
    case SystemControl_CM7_ITCMCR_SZ::_0:
        result = "_0";
        break;
    case SystemControl_CM7_ITCMCR_SZ::_3:
        result = "_3";
        break;
    case SystemControl_CM7_ITCMCR_SZ::_4:
        result = "_4";
        break;
    case SystemControl_CM7_ITCMCR_SZ::_5:
        result = "_5";
        break;
    case SystemControl_CM7_ITCMCR_SZ::_6:
        result = "_6";
        break;
    case SystemControl_CM7_ITCMCR_SZ::_7:
        result = "_7";
        break;
    case SystemControl_CM7_ITCMCR_SZ::_8:
        result = "_8";
        break;
    case SystemControl_CM7_ITCMCR_SZ::_9:
        result = "_9";
        break;
    case SystemControl_CM7_ITCMCR_SZ::_10:
        result = "_10";
        break;
    case SystemControl_CM7_ITCMCR_SZ::_11:
        result = "_11";
        break;
    case SystemControl_CM7_ITCMCR_SZ::_12:
        result = "_12";
        break;
    case SystemControl_CM7_ITCMCR_SZ::_13:
        result = "_13";
        break;
    case SystemControl_CM7_ITCMCR_SZ::_14:
        result = "_14";
        break;
    case SystemControl_CM7_ITCMCR_SZ::_15:
        result = "_15";
        break;
    }

    return result;
}

/**
 * Converts a C string to SystemControl_CM7_ITCMCR_SZ.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SystemControl_CM7_ITCMCR_SZ &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_0", 2)))
    {
        output = SystemControl_CM7_ITCMCR_SZ::_0;
    }
    else if ((result = !strncmp(data, "_3", 2)))
    {
        output = SystemControl_CM7_ITCMCR_SZ::_3;
    }
    else if ((result = !strncmp(data, "_4", 2)))
    {
        output = SystemControl_CM7_ITCMCR_SZ::_4;
    }
    else if ((result = !strncmp(data, "_5", 2)))
    {
        output = SystemControl_CM7_ITCMCR_SZ::_5;
    }
    else if ((result = !strncmp(data, "_6", 2)))
    {
        output = SystemControl_CM7_ITCMCR_SZ::_6;
    }
    else if ((result = !strncmp(data, "_7", 2)))
    {
        output = SystemControl_CM7_ITCMCR_SZ::_7;
    }
    else if ((result = !strncmp(data, "_8", 2)))
    {
        output = SystemControl_CM7_ITCMCR_SZ::_8;
    }
    else if ((result = !strncmp(data, "_9", 2)))
    {
        output = SystemControl_CM7_ITCMCR_SZ::_9;
    }
    else if ((result = !strncmp(data, "_10", 3)))
    {
        output = SystemControl_CM7_ITCMCR_SZ::_10;
    }
    else if ((result = !strncmp(data, "_11", 3)))
    {
        output = SystemControl_CM7_ITCMCR_SZ::_11;
    }
    else if ((result = !strncmp(data, "_12", 3)))
    {
        output = SystemControl_CM7_ITCMCR_SZ::_12;
    }
    else if ((result = !strncmp(data, "_13", 3)))
    {
        output = SystemControl_CM7_ITCMCR_SZ::_13;
    }
    else if ((result = !strncmp(data, "_14", 3)))
    {
        output = SystemControl_CM7_ITCMCR_SZ::_14;
    }
    else if ((result = !strncmp(data, "_15", 3)))
    {
        output = SystemControl_CM7_ITCMCR_SZ::_15;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7
