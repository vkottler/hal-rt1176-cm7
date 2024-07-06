/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class KEY_MANAGER__PUF_KEYLOCK_LOCK0 : uint8_t
{
    LOCKED_00 /*!< SNVS Key block locked */,
    LOCKED_01 = 1 /*!< SNVS Key block locked */,
    UNLOCKED = 2 /*!< SNVS Key block unlocked */,
    LOCKED_11 = 3 /*!< SNVS Key block locked */
};
static_assert(sizeof(KEY_MANAGER__PUF_KEYLOCK_LOCK0) == 1);

/**
 * Converts KEY_MANAGER__PUF_KEYLOCK_LOCK0 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(KEY_MANAGER__PUF_KEYLOCK_LOCK0 instance)
{
    const char *result = "UNKNOWN KEY_MANAGER__PUF_KEYLOCK_LOCK0";

    switch (instance)
    {
    case KEY_MANAGER__PUF_KEYLOCK_LOCK0::LOCKED_00:
        result = "LOCKED_00";
        break;
    case KEY_MANAGER__PUF_KEYLOCK_LOCK0::LOCKED_01:
        result = "LOCKED_01";
        break;
    case KEY_MANAGER__PUF_KEYLOCK_LOCK0::UNLOCKED:
        result = "UNLOCKED";
        break;
    case KEY_MANAGER__PUF_KEYLOCK_LOCK0::LOCKED_11:
        result = "LOCKED_11";
        break;
    }

    return result;
}

/**
 * Converts a C string to KEY_MANAGER__PUF_KEYLOCK_LOCK0.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        KEY_MANAGER__PUF_KEYLOCK_LOCK0 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "LOCKED_00", 9)))
    {
        output = KEY_MANAGER__PUF_KEYLOCK_LOCK0::LOCKED_00;
    }
    else if ((result = !strncmp(data, "LOCKED_01", 9)))
    {
        output = KEY_MANAGER__PUF_KEYLOCK_LOCK0::LOCKED_01;
    }
    else if ((result = !strncmp(data, "UNLOCKED", 8)))
    {
        output = KEY_MANAGER__PUF_KEYLOCK_LOCK0::UNLOCKED;
    }
    else if ((result = !strncmp(data, "LOCKED_11", 9)))
    {
        output = KEY_MANAGER__PUF_KEYLOCK_LOCK0::LOCKED_11;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7
