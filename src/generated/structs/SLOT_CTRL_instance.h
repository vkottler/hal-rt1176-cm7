/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include "../ifgen/common.h"

namespace MIMXRT1176::CM7
{

/**
 * The slot assignments are given below:
 */
struct [[gnu::packed]] SLOT_CTRL_instance
{
    /* Constant attributes. */
    static constexpr std::size_t size =
        4; /*!< SLOT_CTRL_instance's size in bytes. */

    /* Fields. */
    uint32_t SLOT_CTRL; /*!< (read-write) Slot Control Register */

    /* Methods. */

    /**
     * Get SLOT_CTRL's LOCK_CONTROL bit.
     *
     * Lock control of this slot
     */
    inline bool get_SLOT_CTRL_LOCK_CONTROL()
    {
        return SLOT_CTRL & (1u << 31u);
    }

    /**
     * Set SLOT_CTRL's LOCK_CONTROL bit.
     *
     * Lock control of this slot
     */
    inline void set_SLOT_CTRL_LOCK_CONTROL()
    {
        SLOT_CTRL |= 1u << 31u;
    }

    /**
     * Clear SLOT_CTRL's LOCK_CONTROL bit.
     *
     * Lock control of this slot
     */
    inline void clear_SLOT_CTRL_LOCK_CONTROL()
    {
        SLOT_CTRL &= ~(1u << 31u);
    }

    /**
     * Toggle SLOT_CTRL's LOCK_CONTROL bit.
     *
     * Lock control of this slot
     */
    inline void toggle_SLOT_CTRL_LOCK_CONTROL()
    {
        SLOT_CTRL ^= 1u << 31u;
    }

    /**
     * Get SLOT_CTRL's ALLOW_USER bit.
     *
     * Allow user write access to this domain control register or domain
     * register
     */
    inline bool get_SLOT_CTRL_ALLOW_USER()
    {
        return SLOT_CTRL & (1u << 17u);
    }

    /**
     * Set SLOT_CTRL's ALLOW_USER bit.
     *
     * Allow user write access to this domain control register or domain
     * register
     */
    inline void set_SLOT_CTRL_ALLOW_USER()
    {
        SLOT_CTRL |= 1u << 17u;
    }

    /**
     * Clear SLOT_CTRL's ALLOW_USER bit.
     *
     * Allow user write access to this domain control register or domain
     * register
     */
    inline void clear_SLOT_CTRL_ALLOW_USER()
    {
        SLOT_CTRL &= ~(1u << 17u);
    }

    /**
     * Toggle SLOT_CTRL's ALLOW_USER bit.
     *
     * Allow user write access to this domain control register or domain
     * register
     */
    inline void toggle_SLOT_CTRL_ALLOW_USER()
    {
        SLOT_CTRL ^= 1u << 17u;
    }

    /**
     * Get SLOT_CTRL's ALLOW_NONSECURE bit.
     *
     * Allow non-secure write access to this domain control register or domain
     * register
     */
    inline bool get_SLOT_CTRL_ALLOW_NONSECURE()
    {
        return SLOT_CTRL & (1u << 16u);
    }

    /**
     * Set SLOT_CTRL's ALLOW_NONSECURE bit.
     *
     * Allow non-secure write access to this domain control register or domain
     * register
     */
    inline void set_SLOT_CTRL_ALLOW_NONSECURE()
    {
        SLOT_CTRL |= 1u << 16u;
    }

    /**
     * Clear SLOT_CTRL's ALLOW_NONSECURE bit.
     *
     * Allow non-secure write access to this domain control register or domain
     * register
     */
    inline void clear_SLOT_CTRL_ALLOW_NONSECURE()
    {
        SLOT_CTRL &= ~(1u << 16u);
    }

    /**
     * Toggle SLOT_CTRL's ALLOW_NONSECURE bit.
     *
     * Allow non-secure write access to this domain control register or domain
     * register
     */
    inline void toggle_SLOT_CTRL_ALLOW_NONSECURE()
    {
        SLOT_CTRL ^= 1u << 16u;
    }

    /**
     * Get SLOT_CTRL's DOMAIN_LOCK bit.
     *
     * Lock domain ID of this slot
     */
    inline bool get_SLOT_CTRL_DOMAIN_LOCK()
    {
        return SLOT_CTRL & (1u << 15u);
    }

    /**
     * Set SLOT_CTRL's DOMAIN_LOCK bit.
     *
     * Lock domain ID of this slot
     */
    inline void set_SLOT_CTRL_DOMAIN_LOCK()
    {
        SLOT_CTRL |= 1u << 15u;
    }

    /**
     * Clear SLOT_CTRL's DOMAIN_LOCK bit.
     *
     * Lock domain ID of this slot
     */
    inline void clear_SLOT_CTRL_DOMAIN_LOCK()
    {
        SLOT_CTRL &= ~(1u << 15u);
    }

    /**
     * Toggle SLOT_CTRL's DOMAIN_LOCK bit.
     *
     * Lock domain ID of this slot
     */
    inline void toggle_SLOT_CTRL_DOMAIN_LOCK()
    {
        SLOT_CTRL ^= 1u << 15u;
    }

    /**
     * Get SLOT_CTRL's LOCKED_DOMAIN_ID field.
     *
     * Domain ID of the slot to be locked
     */
    inline uint8_t get_SLOT_CTRL_LOCKED_DOMAIN_ID()
    {
        return (SLOT_CTRL >> 0u) & 0b1111u;
    }

    /**
     * Set SLOT_CTRL's LOCKED_DOMAIN_ID field.
     *
     * Domain ID of the slot to be locked
     */
    inline void set_SLOT_CTRL_LOCKED_DOMAIN_ID(uint8_t value)
    {
        uint32_t curr = SLOT_CTRL;

        curr &= ~(0b1111u << 0u);
        curr |= (value & 0b1111u) << 0u;

        SLOT_CTRL = curr;
    }

    /**
     * Get all of SLOT_CTRL's bit fields.
     *
     * (read-write) Slot Control Register
     */
    inline void get_SLOT_CTRL(bool &LOCK_CONTROL, bool &ALLOW_USER,
                              bool &ALLOW_NONSECURE, bool &DOMAIN_LOCK,
                              uint8_t &LOCKED_DOMAIN_ID)
    {
        uint32_t curr = SLOT_CTRL;

        LOCK_CONTROL = curr & (1u << 31u);
        ALLOW_USER = curr & (1u << 17u);
        ALLOW_NONSECURE = curr & (1u << 16u);
        DOMAIN_LOCK = curr & (1u << 15u);
        LOCKED_DOMAIN_ID = (curr >> 0u) & 0b1111u;
    }

    /**
     * Set all of SLOT_CTRL's bit fields.
     *
     * (read-write) Slot Control Register
     */
    inline void set_SLOT_CTRL(bool LOCK_CONTROL, bool ALLOW_USER,
                              bool ALLOW_NONSECURE, bool DOMAIN_LOCK,
                              uint8_t LOCKED_DOMAIN_ID)
    {
        uint32_t curr = SLOT_CTRL;

        curr &= ~(0b1u << 31u);
        curr |= (LOCK_CONTROL & 0b1u) << 31u;
        curr &= ~(0b1u << 17u);
        curr |= (ALLOW_USER & 0b1u) << 17u;
        curr &= ~(0b1u << 16u);
        curr |= (ALLOW_NONSECURE & 0b1u) << 16u;
        curr &= ~(0b1u << 15u);
        curr |= (DOMAIN_LOCK & 0b1u) << 15u;
        curr &= ~(0b1111u << 0u);
        curr |= (LOCKED_DOMAIN_ID & 0b1111u) << 0u;

        SLOT_CTRL = curr;
    }
};

static_assert(sizeof(SLOT_CTRL_instance) == SLOT_CTRL_instance::size);

}; // namespace MIMXRT1176::CM7