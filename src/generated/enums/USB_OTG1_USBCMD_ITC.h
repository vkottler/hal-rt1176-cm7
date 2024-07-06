/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class USB_OTG1_USBCMD_ITC : uint8_t
{
    IMMEDIATE /*!< Immediate (no threshold) */,
    MICROFRAME_1 = 1 /*!< 1 micro-frame */,
    MICROFRAME_2 = 2 /*!< 2 micro-frames */,
    MICROFRAME_4 = 4 /*!< 4 micro-frames */,
    MICROFRAME_8 = 8 /*!< 8 micro-frames */,
    MICROFRAME_16 = 16 /*!< 16 micro-frames */,
    MICROFRAME_32 = 32 /*!< 32 micro-frames */,
    MICROFRAME_64 = 64 /*!< 64 micro-frames */
};
static_assert(sizeof(USB_OTG1_USBCMD_ITC) == 1);

/**
 * Converts USB_OTG1_USBCMD_ITC to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USB_OTG1_USBCMD_ITC instance)
{
    const char *result = "UNKNOWN USB_OTG1_USBCMD_ITC";

    switch (instance)
    {
    case USB_OTG1_USBCMD_ITC::IMMEDIATE:
        result = "IMMEDIATE";
        break;
    case USB_OTG1_USBCMD_ITC::MICROFRAME_1:
        result = "MICROFRAME_1";
        break;
    case USB_OTG1_USBCMD_ITC::MICROFRAME_2:
        result = "MICROFRAME_2";
        break;
    case USB_OTG1_USBCMD_ITC::MICROFRAME_4:
        result = "MICROFRAME_4";
        break;
    case USB_OTG1_USBCMD_ITC::MICROFRAME_8:
        result = "MICROFRAME_8";
        break;
    case USB_OTG1_USBCMD_ITC::MICROFRAME_16:
        result = "MICROFRAME_16";
        break;
    case USB_OTG1_USBCMD_ITC::MICROFRAME_32:
        result = "MICROFRAME_32";
        break;
    case USB_OTG1_USBCMD_ITC::MICROFRAME_64:
        result = "MICROFRAME_64";
        break;
    }

    return result;
}

/**
 * Converts a C string to USB_OTG1_USBCMD_ITC.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USB_OTG1_USBCMD_ITC &output)
{
    bool result = false;

    if ((result = !strncmp(data, "IMMEDIATE", 9)))
    {
        output = USB_OTG1_USBCMD_ITC::IMMEDIATE;
    }
    else if ((result = !strncmp(data, "MICROFRAME_1", 12)))
    {
        output = USB_OTG1_USBCMD_ITC::MICROFRAME_1;
    }
    else if ((result = !strncmp(data, "MICROFRAME_2", 12)))
    {
        output = USB_OTG1_USBCMD_ITC::MICROFRAME_2;
    }
    else if ((result = !strncmp(data, "MICROFRAME_4", 12)))
    {
        output = USB_OTG1_USBCMD_ITC::MICROFRAME_4;
    }
    else if ((result = !strncmp(data, "MICROFRAME_8", 12)))
    {
        output = USB_OTG1_USBCMD_ITC::MICROFRAME_8;
    }
    else if ((result = !strncmp(data, "MICROFRAME_16", 13)))
    {
        output = USB_OTG1_USBCMD_ITC::MICROFRAME_16;
    }
    else if ((result = !strncmp(data, "MICROFRAME_32", 13)))
    {
        output = USB_OTG1_USBCMD_ITC::MICROFRAME_32;
    }
    else if ((result = !strncmp(data, "MICROFRAME_64", 13)))
    {
        output = USB_OTG1_USBCMD_ITC::MICROFRAME_64;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7