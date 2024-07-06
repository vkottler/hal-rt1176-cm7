/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include "../ifgen/common.h"

namespace MIMXRT1176::CM7
{

/**
 * Secure RAM
 */
struct [[gnu::packed]] sram
{
    /* Constant attributes. */
    static constexpr std::size_t size = 12292; /*!< sram's size in bytes. */

    /* Fields. */
    static constexpr std::size_t reserved_padding0_length = 3072;
    const uint32_t reserved_padding0[reserved_padding0_length] = {};
    uint32_t CTRL; /*!< (read-write) Control Register */

    /* Methods. */

    /**
     * Get CTRL's LOCK_BIT field.
     *
     * Lock bits
     */
    inline uint8_t get_CTRL_LOCK_BIT() volatile
    {
        return (CTRL >> 16u) & 0b11111111u;
    }

    /**
     * Set CTRL's LOCK_BIT field.
     *
     * Lock bits
     */
    inline void set_CTRL_LOCK_BIT(uint8_t value) volatile
    {
        uint32_t curr = CTRL;

        curr &= ~(0b11111111u << 16u);
        curr |= (value & 0b11111111u) << 16u;

        CTRL = curr;
    }

    /**
     * Get CTRL's TAMPER_PWR_OFF_EN bit.
     *
     * Turn off power on tamper event (with lock)
     */
    inline bool get_CTRL_TAMPER_PWR_OFF_EN() volatile
    {
        return CTRL & (1u << 7u);
    }

    /**
     * Set CTRL's TAMPER_PWR_OFF_EN bit.
     *
     * Turn off power on tamper event (with lock)
     */
    inline void set_CTRL_TAMPER_PWR_OFF_EN() volatile
    {
        CTRL |= 1u << 7u;
    }

    /**
     * Clear CTRL's TAMPER_PWR_OFF_EN bit.
     *
     * Turn off power on tamper event (with lock)
     */
    inline void clear_CTRL_TAMPER_PWR_OFF_EN() volatile
    {
        CTRL &= ~(1u << 7u);
    }

    /**
     * Toggle CTRL's TAMPER_PWR_OFF_EN bit.
     *
     * Turn off power on tamper event (with lock)
     */
    inline void toggle_CTRL_TAMPER_PWR_OFF_EN() volatile
    {
        CTRL ^= 1u << 7u;
    }

    /**
     * Get CTRL's TAMPER_BLOCK_EN bit.
     *
     * Tamper Block Enable (with lock)
     */
    inline bool get_CTRL_TAMPER_BLOCK_EN() volatile
    {
        return CTRL & (1u << 6u);
    }

    /**
     * Set CTRL's TAMPER_BLOCK_EN bit.
     *
     * Tamper Block Enable (with lock)
     */
    inline void set_CTRL_TAMPER_BLOCK_EN() volatile
    {
        CTRL |= 1u << 6u;
    }

    /**
     * Clear CTRL's TAMPER_BLOCK_EN bit.
     *
     * Tamper Block Enable (with lock)
     */
    inline void clear_CTRL_TAMPER_BLOCK_EN() volatile
    {
        CTRL &= ~(1u << 6u);
    }

    /**
     * Toggle CTRL's TAMPER_BLOCK_EN bit.
     *
     * Tamper Block Enable (with lock)
     */
    inline void toggle_CTRL_TAMPER_BLOCK_EN() volatile
    {
        CTRL ^= 1u << 6u;
    }

    /**
     * Get CTRL's PWR_EN field.
     *
     * Power Enable (with lock)
     */
    inline uint8_t get_CTRL_PWR_EN() volatile
    {
        return (CTRL >> 2u) & 0b1111u;
    }

    /**
     * Set CTRL's PWR_EN field.
     *
     * Power Enable (with lock)
     */
    inline void set_CTRL_PWR_EN(uint8_t value) volatile
    {
        uint32_t curr = CTRL;

        curr &= ~(0b1111u << 2u);
        curr |= (value & 0b1111u) << 2u;

        CTRL = curr;
    }

    /**
     * Get CTRL's RAM_WR_EN bit.
     *
     * RAM Write Enable (with lock)
     */
    inline bool get_CTRL_RAM_WR_EN() volatile
    {
        return CTRL & (1u << 1u);
    }

    /**
     * Set CTRL's RAM_WR_EN bit.
     *
     * RAM Write Enable (with lock)
     */
    inline void set_CTRL_RAM_WR_EN() volatile
    {
        CTRL |= 1u << 1u;
    }

    /**
     * Clear CTRL's RAM_WR_EN bit.
     *
     * RAM Write Enable (with lock)
     */
    inline void clear_CTRL_RAM_WR_EN() volatile
    {
        CTRL &= ~(1u << 1u);
    }

    /**
     * Toggle CTRL's RAM_WR_EN bit.
     *
     * RAM Write Enable (with lock)
     */
    inline void toggle_CTRL_RAM_WR_EN() volatile
    {
        CTRL ^= 1u << 1u;
    }

    /**
     * Get CTRL's RAM_RD_EN bit.
     *
     * RAM Read Enable (with lock)
     */
    inline bool get_CTRL_RAM_RD_EN() volatile
    {
        return CTRL & (1u << 0u);
    }

    /**
     * Set CTRL's RAM_RD_EN bit.
     *
     * RAM Read Enable (with lock)
     */
    inline void set_CTRL_RAM_RD_EN() volatile
    {
        CTRL |= 1u << 0u;
    }

    /**
     * Clear CTRL's RAM_RD_EN bit.
     *
     * RAM Read Enable (with lock)
     */
    inline void clear_CTRL_RAM_RD_EN() volatile
    {
        CTRL &= ~(1u << 0u);
    }

    /**
     * Toggle CTRL's RAM_RD_EN bit.
     *
     * RAM Read Enable (with lock)
     */
    inline void toggle_CTRL_RAM_RD_EN() volatile
    {
        CTRL ^= 1u << 0u;
    }

    /**
     * Get all of CTRL's bit fields.
     *
     * (read-write) Control Register
     */
    inline void get_CTRL(uint8_t &LOCK_BIT, bool &TAMPER_PWR_OFF_EN,
                         bool &TAMPER_BLOCK_EN, uint8_t &PWR_EN,
                         bool &RAM_WR_EN, bool &RAM_RD_EN) volatile
    {
        uint32_t curr = CTRL;

        LOCK_BIT = (curr >> 16u) & 0b11111111u;
        TAMPER_PWR_OFF_EN = curr & (1u << 7u);
        TAMPER_BLOCK_EN = curr & (1u << 6u);
        PWR_EN = (curr >> 2u) & 0b1111u;
        RAM_WR_EN = curr & (1u << 1u);
        RAM_RD_EN = curr & (1u << 0u);
    }

    /**
     * Set all of CTRL's bit fields.
     *
     * (read-write) Control Register
     */
    inline void set_CTRL(uint8_t LOCK_BIT, bool TAMPER_PWR_OFF_EN,
                         bool TAMPER_BLOCK_EN, uint8_t PWR_EN, bool RAM_WR_EN,
                         bool RAM_RD_EN) volatile
    {
        uint32_t curr = CTRL;

        curr &= ~(0b11111111u << 16u);
        curr |= (LOCK_BIT & 0b11111111u) << 16u;
        curr &= ~(0b1u << 7u);
        curr |= (TAMPER_PWR_OFF_EN & 0b1u) << 7u;
        curr &= ~(0b1u << 6u);
        curr |= (TAMPER_BLOCK_EN & 0b1u) << 6u;
        curr &= ~(0b1111u << 2u);
        curr |= (PWR_EN & 0b1111u) << 2u;
        curr &= ~(0b1u << 1u);
        curr |= (RAM_WR_EN & 0b1u) << 1u;
        curr &= ~(0b1u << 0u);
        curr |= (RAM_RD_EN & 0b1u) << 0u;

        CTRL = curr;
    }
};

static_assert(sizeof(sram) == sram::size);

static volatile sram *const SRAM = reinterpret_cast<sram *>(0x40C9C000);

}; // namespace MIMXRT1176::CM7