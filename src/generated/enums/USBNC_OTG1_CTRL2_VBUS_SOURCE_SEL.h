/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class USBNC_OTG1_CTRL2_VBUS_SOURCE_SEL : uint8_t
{
    VBUS_VALID /*!< vbus_valid */,
    SESS_VALID_1 = 1 /*!< sess_valid */,
    SESS_VALID_2 = 2 /*!< sess_valid */,
    SESS_VALID_3 = 3 /*!< sess_valid */
};
static_assert(sizeof(USBNC_OTG1_CTRL2_VBUS_SOURCE_SEL) == 1);

/**
 * Converts USBNC_OTG1_CTRL2_VBUS_SOURCE_SEL to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USBNC_OTG1_CTRL2_VBUS_SOURCE_SEL instance)
{
    const char *result = "UNKNOWN USBNC_OTG1_CTRL2_VBUS_SOURCE_SEL";

    switch (instance)
    {
    case USBNC_OTG1_CTRL2_VBUS_SOURCE_SEL::VBUS_VALID:
        result = "VBUS_VALID";
        break;
    case USBNC_OTG1_CTRL2_VBUS_SOURCE_SEL::SESS_VALID_1:
        result = "SESS_VALID_1";
        break;
    case USBNC_OTG1_CTRL2_VBUS_SOURCE_SEL::SESS_VALID_2:
        result = "SESS_VALID_2";
        break;
    case USBNC_OTG1_CTRL2_VBUS_SOURCE_SEL::SESS_VALID_3:
        result = "SESS_VALID_3";
        break;
    }

    return result;
}

/**
 * Converts a C string to USBNC_OTG1_CTRL2_VBUS_SOURCE_SEL.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        USBNC_OTG1_CTRL2_VBUS_SOURCE_SEL &output)
{
    bool result = false;

    if ((result = !strncmp(data, "VBUS_VALID", 10)))
    {
        output = USBNC_OTG1_CTRL2_VBUS_SOURCE_SEL::VBUS_VALID;
    }
    else if ((result = !strncmp(data, "SESS_VALID_1", 12)))
    {
        output = USBNC_OTG1_CTRL2_VBUS_SOURCE_SEL::SESS_VALID_1;
    }
    else if ((result = !strncmp(data, "SESS_VALID_2", 12)))
    {
        output = USBNC_OTG1_CTRL2_VBUS_SOURCE_SEL::SESS_VALID_2;
    }
    else if ((result = !strncmp(data, "SESS_VALID_3", 12)))
    {
        output = USBNC_OTG1_CTRL2_VBUS_SOURCE_SEL::SESS_VALID_3;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7