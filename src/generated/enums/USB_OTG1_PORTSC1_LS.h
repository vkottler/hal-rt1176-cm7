/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class USB_OTG1_PORTSC1_LS : uint8_t
{
    SE0 /*!< SE0 */,
    K_STATE = 1 /*!< K-state */,
    J_STATE = 2 /*!< J-state */,
    UNDEFINED = 3 /*!< Undefined */
};
static_assert(sizeof(USB_OTG1_PORTSC1_LS) == 1);

/**
 * Converts USB_OTG1_PORTSC1_LS to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USB_OTG1_PORTSC1_LS instance)
{
    const char *result = "UNKNOWN USB_OTG1_PORTSC1_LS";

    switch (instance)
    {
    case USB_OTG1_PORTSC1_LS::SE0:
        result = "SE0";
        break;
    case USB_OTG1_PORTSC1_LS::K_STATE:
        result = "K_STATE";
        break;
    case USB_OTG1_PORTSC1_LS::J_STATE:
        result = "J_STATE";
        break;
    case USB_OTG1_PORTSC1_LS::UNDEFINED:
        result = "UNDEFINED";
        break;
    }

    return result;
}

/**
 * Converts a C string to USB_OTG1_PORTSC1_LS.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USB_OTG1_PORTSC1_LS &output)
{
    bool result = false;

    if ((result = !strncmp(data, "SE0", 3)))
    {
        output = USB_OTG1_PORTSC1_LS::SE0;
    }
    else if ((result = !strncmp(data, "K_STATE", 7)))
    {
        output = USB_OTG1_PORTSC1_LS::K_STATE;
    }
    else if ((result = !strncmp(data, "J_STATE", 7)))
    {
        output = USB_OTG1_PORTSC1_LS::J_STATE;
    }
    else if ((result = !strncmp(data, "UNDEFINED", 9)))
    {
        output = USB_OTG1_PORTSC1_LS::UNDEFINED;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7
