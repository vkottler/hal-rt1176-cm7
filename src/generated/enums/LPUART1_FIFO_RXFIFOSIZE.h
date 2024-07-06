/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class LPUART1_FIFO_RXFIFOSIZE : uint8_t
{
    _1 /*!< Receive FIFO/Buffer depth = 1 dataword. */,
    _4 = 1 /*!< Receive FIFO/Buffer depth = 4 datawords. */,
    _8 = 2 /*!< Receive FIFO/Buffer depth = 8 datawords. */,
    _16 = 3 /*!< Receive FIFO/Buffer depth = 16 datawords. */,
    _32 = 4 /*!< Receive FIFO/Buffer depth = 32 datawords. */,
    _64 = 5 /*!< Receive FIFO/Buffer depth = 64 datawords. */,
    _128 = 6 /*!< Receive FIFO/Buffer depth = 128 datawords. */,
    _256 = 7 /*!< Receive FIFO/Buffer depth = 256 datawords. */
};
static_assert(sizeof(LPUART1_FIFO_RXFIFOSIZE) == 1);

/**
 * Converts LPUART1_FIFO_RXFIFOSIZE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(LPUART1_FIFO_RXFIFOSIZE instance)
{
    const char *result = "UNKNOWN LPUART1_FIFO_RXFIFOSIZE";

    switch (instance)
    {
    case LPUART1_FIFO_RXFIFOSIZE::_1:
        result = "_1";
        break;
    case LPUART1_FIFO_RXFIFOSIZE::_4:
        result = "_4";
        break;
    case LPUART1_FIFO_RXFIFOSIZE::_8:
        result = "_8";
        break;
    case LPUART1_FIFO_RXFIFOSIZE::_16:
        result = "_16";
        break;
    case LPUART1_FIFO_RXFIFOSIZE::_32:
        result = "_32";
        break;
    case LPUART1_FIFO_RXFIFOSIZE::_64:
        result = "_64";
        break;
    case LPUART1_FIFO_RXFIFOSIZE::_128:
        result = "_128";
        break;
    case LPUART1_FIFO_RXFIFOSIZE::_256:
        result = "_256";
        break;
    }

    return result;
}

/**
 * Converts a C string to LPUART1_FIFO_RXFIFOSIZE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, LPUART1_FIFO_RXFIFOSIZE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_1", 2)))
    {
        output = LPUART1_FIFO_RXFIFOSIZE::_1;
    }
    else if ((result = !strncmp(data, "_4", 2)))
    {
        output = LPUART1_FIFO_RXFIFOSIZE::_4;
    }
    else if ((result = !strncmp(data, "_8", 2)))
    {
        output = LPUART1_FIFO_RXFIFOSIZE::_8;
    }
    else if ((result = !strncmp(data, "_16", 3)))
    {
        output = LPUART1_FIFO_RXFIFOSIZE::_16;
    }
    else if ((result = !strncmp(data, "_32", 3)))
    {
        output = LPUART1_FIFO_RXFIFOSIZE::_32;
    }
    else if ((result = !strncmp(data, "_64", 3)))
    {
        output = LPUART1_FIFO_RXFIFOSIZE::_64;
    }
    else if ((result = !strncmp(data, "_128", 4)))
    {
        output = LPUART1_FIFO_RXFIFOSIZE::_128;
    }
    else if ((result = !strncmp(data, "_256", 4)))
    {
        output = LPUART1_FIFO_RXFIFOSIZE::_256;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7
