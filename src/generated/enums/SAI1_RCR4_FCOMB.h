/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class SAI1_RCR4_FCOMB : uint8_t
{
    DISABLED /*!< FIFO combine mode disabled. */,
    ENA_ON_FIFO_WRITES = 1 /*!< FIFO combine mode enabled on FIFO writes (from
                              receive shift registers). */
        ,
    ENA_ON_FIFO_READS =
        2 /*!< FIFO combine mode enabled on FIFO reads (by software). */,
    ENA_ON_FIFO_WRITES_READS =
        3 /*!< FIFO combine mode enabled on FIFO writes (from receive shift
             registers) and reads (by software). */
};
static_assert(sizeof(SAI1_RCR4_FCOMB) == 1);

/**
 * Converts SAI1_RCR4_FCOMB to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SAI1_RCR4_FCOMB instance)
{
    const char *result = "UNKNOWN SAI1_RCR4_FCOMB";

    switch (instance)
    {
    case SAI1_RCR4_FCOMB::DISABLED:
        result = "DISABLED";
        break;
    case SAI1_RCR4_FCOMB::ENA_ON_FIFO_WRITES:
        result = "ENA_ON_FIFO_WRITES";
        break;
    case SAI1_RCR4_FCOMB::ENA_ON_FIFO_READS:
        result = "ENA_ON_FIFO_READS";
        break;
    case SAI1_RCR4_FCOMB::ENA_ON_FIFO_WRITES_READS:
        result = "ENA_ON_FIFO_WRITES_READS";
        break;
    }

    return result;
}

/**
 * Converts a C string to SAI1_RCR4_FCOMB.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SAI1_RCR4_FCOMB &output)
{
    bool result = false;

    if ((result = !strncmp(data, "DISABLED", 8)))
    {
        output = SAI1_RCR4_FCOMB::DISABLED;
    }
    else if ((result = !strncmp(data, "ENA_ON_FIFO_WRITES", 18)))
    {
        output = SAI1_RCR4_FCOMB::ENA_ON_FIFO_WRITES;
    }
    else if ((result = !strncmp(data, "ENA_ON_FIFO_READS", 17)))
    {
        output = SAI1_RCR4_FCOMB::ENA_ON_FIFO_READS;
    }
    else if ((result = !strncmp(data, "ENA_ON_FIFO_WRITES_READS", 24)))
    {
        output = SAI1_RCR4_FCOMB::ENA_ON_FIFO_WRITES_READS;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7
