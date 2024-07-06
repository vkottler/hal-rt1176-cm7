/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include "../ifgen/common.h"

namespace MIMXRT1176::CM7
{

/**
 * MX6RT_ANADIG_REGISTER
 */
struct [[gnu::packed]] anadig_tempsensor
{
    /* Constant attributes. */
    static constexpr std::size_t size =
        1076; /*!< anadig_tempsensor's size in bytes. */

    /* Fields. */
    static constexpr std::size_t reserved_padding0_length = 256;
    const uint32_t reserved_padding0[reserved_padding0_length] = {};
    uint32_t TEMPSENSOR; /*!< (read-write) Tempsensor Register */
    static constexpr std::size_t reserved_padding1_length = 11;
    const uint32_t reserved_padding1[reserved_padding1_length] = {};
    uint32_t TEMPSNS_OTP_TRIM_VALUE; /*!< (read-write)
                                        TEMPSNS_OTP_TRIM_VALUE_REGISTER */

    /* Methods. */

    /**
     * Get TEMPSENSOR's TEMPSNS_AI_BUSY bit.
     *
     * AI Busy monitor
     */
    inline bool get_TEMPSENSOR_TEMPSNS_AI_BUSY() volatile
    {
        return TEMPSENSOR & (1u << 16u);
    }

    /**
     * Get TEMPSENSOR's TEMPSNS_AI_TOGGLE bit.
     *
     * AI toggle
     */
    inline bool get_TEMPSENSOR_TEMPSNS_AI_TOGGLE() volatile
    {
        return TEMPSENSOR & (1u << 15u);
    }

    /**
     * Set TEMPSENSOR's TEMPSNS_AI_TOGGLE bit.
     *
     * AI toggle
     */
    inline void set_TEMPSENSOR_TEMPSNS_AI_TOGGLE() volatile
    {
        TEMPSENSOR |= 1u << 15u;
    }

    /**
     * Clear TEMPSENSOR's TEMPSNS_AI_TOGGLE bit.
     *
     * AI toggle
     */
    inline void clear_TEMPSENSOR_TEMPSNS_AI_TOGGLE() volatile
    {
        TEMPSENSOR &= ~(1u << 15u);
    }

    /**
     * Toggle TEMPSENSOR's TEMPSNS_AI_TOGGLE bit.
     *
     * AI toggle
     */
    inline void toggle_TEMPSENSOR_TEMPSNS_AI_TOGGLE() volatile
    {
        TEMPSENSOR ^= 1u << 15u;
    }

    /**
     * Get all of TEMPSENSOR's bit fields.
     *
     * (read-write) Tempsensor Register
     */
    inline void get_TEMPSENSOR(bool &TEMPSNS_AI_BUSY,
                               bool &TEMPSNS_AI_TOGGLE) volatile
    {
        uint32_t curr = TEMPSENSOR;

        TEMPSNS_AI_BUSY = curr & (1u << 16u);
        TEMPSNS_AI_TOGGLE = curr & (1u << 15u);
    }

    /**
     * Get TEMPSNS_OTP_TRIM_VALUE's TEMPSNS_TEMP_VAL field.
     *
     * Temperature Value at 25C
     */
    inline uint16_t get_TEMPSNS_OTP_TRIM_VALUE_TEMPSNS_TEMP_VAL() volatile
    {
        return (TEMPSNS_OTP_TRIM_VALUE >> 10u) & 0b111111111111u;
    }
};

static_assert(sizeof(anadig_tempsensor) == anadig_tempsensor::size);

static volatile anadig_tempsensor *const ANADIG_TEMPSENSOR =
    reinterpret_cast<anadig_tempsensor *>(0x40C84000);

}; // namespace MIMXRT1176::CM7
