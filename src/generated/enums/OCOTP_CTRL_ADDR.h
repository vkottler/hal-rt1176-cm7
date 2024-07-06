/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class OCOTP_CTRL_ADDR : uint16_t
{
    supp_word = 9 /*!< Address of one of the 16 supplementary fuse words in OTP
                     memory. */
        ,
    user_fuse_word =
        271 /*!< Address of one of the 256 user fuse words in OTP memory. */
};
static_assert(sizeof(OCOTP_CTRL_ADDR) == 2);

/**
 * Converts OCOTP_CTRL_ADDR to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(OCOTP_CTRL_ADDR instance)
{
    const char *result = "UNKNOWN OCOTP_CTRL_ADDR";

    switch (instance)
    {
    case OCOTP_CTRL_ADDR::supp_word:
        result = "supp_word";
        break;
    case OCOTP_CTRL_ADDR::user_fuse_word:
        result = "user_fuse_word";
        break;
    }

    return result;
}

/**
 * Converts a C string to OCOTP_CTRL_ADDR.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, OCOTP_CTRL_ADDR &output)
{
    bool result = false;

    if ((result = !strncmp(data, "supp_word", 9)))
    {
        output = OCOTP_CTRL_ADDR::supp_word;
    }
    else if ((result = !strncmp(data, "user_fuse_word", 14)))
    {
        output = OCOTP_CTRL_ADDR::user_fuse_word;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7
