/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include "../ifgen/common.h"

namespace MIMXRT1176::CM7
{

/**
 * DMAMUX
 */
struct [[gnu::packed]] dmamux0
{
    /* Constant attributes. */
    static constexpr std::size_t size = 128; /*!< dmamux0's size in bytes. */

    /* Fields. */
    static constexpr std::size_t CHCFG_length = 32;
    uint32_t CHCFG[CHCFG_length]; /*!< (read-write) Channel index Configuration
                                     Register */

    /* Methods. */

    /**
     * Get CHCFG's ENBL bit.
     *
     * DMA Mux Channel Enable
     */
    inline bool get_CHCFG_ENBL(std::size_t index) volatile
    {
        return CHCFG[index] & (1u << 31u);
    }

    /**
     * Set CHCFG's ENBL bit.
     *
     * DMA Mux Channel Enable
     */
    inline void set_CHCFG_ENBL() volatile
    {
        CHCFG |= 1u << 31u;
    }

    /**
     * Clear CHCFG's ENBL bit.
     *
     * DMA Mux Channel Enable
     */
    inline void clear_CHCFG_ENBL() volatile
    {
        CHCFG &= ~(1u << 31u);
    }

    /**
     * Toggle CHCFG's ENBL bit.
     *
     * DMA Mux Channel Enable
     */
    inline void toggle_CHCFG_ENBL() volatile
    {
        CHCFG ^= 1u << 31u;
    }

    /**
     * Get CHCFG's TRIG bit.
     *
     * DMA Channel Trigger Enable
     */
    inline bool get_CHCFG_TRIG(std::size_t index) volatile
    {
        return CHCFG[index] & (1u << 30u);
    }

    /**
     * Set CHCFG's TRIG bit.
     *
     * DMA Channel Trigger Enable
     */
    inline void set_CHCFG_TRIG() volatile
    {
        CHCFG |= 1u << 30u;
    }

    /**
     * Clear CHCFG's TRIG bit.
     *
     * DMA Channel Trigger Enable
     */
    inline void clear_CHCFG_TRIG() volatile
    {
        CHCFG &= ~(1u << 30u);
    }

    /**
     * Toggle CHCFG's TRIG bit.
     *
     * DMA Channel Trigger Enable
     */
    inline void toggle_CHCFG_TRIG() volatile
    {
        CHCFG ^= 1u << 30u;
    }

    /**
     * Get CHCFG's A_ON bit.
     *
     * DMA Channel Always Enable
     */
    inline bool get_CHCFG_A_ON(std::size_t index) volatile
    {
        return CHCFG[index] & (1u << 29u);
    }

    /**
     * Set CHCFG's A_ON bit.
     *
     * DMA Channel Always Enable
     */
    inline void set_CHCFG_A_ON() volatile
    {
        CHCFG |= 1u << 29u;
    }

    /**
     * Clear CHCFG's A_ON bit.
     *
     * DMA Channel Always Enable
     */
    inline void clear_CHCFG_A_ON() volatile
    {
        CHCFG &= ~(1u << 29u);
    }

    /**
     * Toggle CHCFG's A_ON bit.
     *
     * DMA Channel Always Enable
     */
    inline void toggle_CHCFG_A_ON() volatile
    {
        CHCFG ^= 1u << 29u;
    }

    /**
     * Get CHCFG's SOURCE field.
     *
     * DMA Channel Source (Slot Number)
     */
    inline uint8_t get_CHCFG_SOURCE(std::size_t index) volatile
    {
        return (CHCFG[index] >> 0u) & 0b11111111u;
    }

    /**
     * Set CHCFG's SOURCE field.
     *
     * DMA Channel Source (Slot Number)
     */
    inline void set_CHCFG_SOURCE(std::size_t index, uint8_t value) volatile
    {
        uint32_t curr = CHCFG[index];

        curr &= ~(0b11111111u << 0u);
        curr |= (value & 0b11111111u) << 0u;

        CHCFG[index] = curr;
    }

    /**
     * Get all of CHCFG's bit fields.
     *
     * (read-write) Channel index Configuration Register
     */
    inline void get_CHCFG(std::size_t index, bool &ENBL, bool &TRIG,
                          bool &A_ON, uint8_t &SOURCE) volatile
    {
        uint32_t curr = CHCFG[index];

        ENBL = curr & (1u << 31u);
        TRIG = curr & (1u << 30u);
        A_ON = curr & (1u << 29u);
        SOURCE = (curr >> 0u) & 0b11111111u;
    }

    /**
     * Set all of CHCFG's bit fields.
     *
     * (read-write) Channel index Configuration Register
     */
    inline void set_CHCFG(std::size_t index, bool ENBL, bool TRIG, bool A_ON,
                          uint8_t SOURCE) volatile
    {
        uint32_t curr = CHCFG[index];

        curr &= ~(0b1u << 31u);
        curr |= (ENBL & 0b1u) << 31u;
        curr &= ~(0b1u << 30u);
        curr |= (TRIG & 0b1u) << 30u;
        curr &= ~(0b1u << 29u);
        curr |= (A_ON & 0b1u) << 29u;
        curr &= ~(0b11111111u << 0u);
        curr |= (SOURCE & 0b11111111u) << 0u;

        CHCFG[index] = curr;
    }
};

static_assert(sizeof(dmamux0) == dmamux0::size);

static volatile dmamux0 *const DMAMUX0 =
    reinterpret_cast<dmamux0 *>(0x40074000);

}; // namespace MIMXRT1176::CM7