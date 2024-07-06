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
struct [[gnu::packed]] anadig_ldo_snvs_dig
{
    /* Constant attributes. */
    static constexpr std::size_t size =
        1348; /*!< anadig_ldo_snvs_dig's size in bytes. */

    /* Fields. */
    static constexpr std::size_t reserved_padding0_length = 336;
    const uint32_t reserved_padding0[reserved_padding0_length] = {};
    uint32_t PMU_LDO_SNVS_DIG; /*!< (read-write) PMU_LDO_SNVS_DIG_REGISTER */

    /* Methods. */

    /**
     * Get PMU_LDO_SNVS_DIG's REG_EN bit.
     *
     * REG_EN
     */
    inline bool get_PMU_LDO_SNVS_DIG_REG_EN() volatile
    {
        return PMU_LDO_SNVS_DIG & (1u << 2u);
    }

    /**
     * Set PMU_LDO_SNVS_DIG's REG_EN bit.
     *
     * REG_EN
     */
    inline void set_PMU_LDO_SNVS_DIG_REG_EN() volatile
    {
        PMU_LDO_SNVS_DIG |= 1u << 2u;
    }

    /**
     * Clear PMU_LDO_SNVS_DIG's REG_EN bit.
     *
     * REG_EN
     */
    inline void clear_PMU_LDO_SNVS_DIG_REG_EN() volatile
    {
        PMU_LDO_SNVS_DIG &= ~(1u << 2u);
    }

    /**
     * Toggle PMU_LDO_SNVS_DIG's REG_EN bit.
     *
     * REG_EN
     */
    inline void toggle_PMU_LDO_SNVS_DIG_REG_EN() volatile
    {
        PMU_LDO_SNVS_DIG ^= 1u << 2u;
    }

    /**
     * Get PMU_LDO_SNVS_DIG's TEST_OVERRIDE bit.
     *
     * test_override
     */
    inline bool get_PMU_LDO_SNVS_DIG_TEST_OVERRIDE() volatile
    {
        return PMU_LDO_SNVS_DIG & (1u << 1u);
    }

    /**
     * Set PMU_LDO_SNVS_DIG's TEST_OVERRIDE bit.
     *
     * test_override
     */
    inline void set_PMU_LDO_SNVS_DIG_TEST_OVERRIDE() volatile
    {
        PMU_LDO_SNVS_DIG |= 1u << 1u;
    }

    /**
     * Clear PMU_LDO_SNVS_DIG's TEST_OVERRIDE bit.
     *
     * test_override
     */
    inline void clear_PMU_LDO_SNVS_DIG_TEST_OVERRIDE() volatile
    {
        PMU_LDO_SNVS_DIG &= ~(1u << 1u);
    }

    /**
     * Toggle PMU_LDO_SNVS_DIG's TEST_OVERRIDE bit.
     *
     * test_override
     */
    inline void toggle_PMU_LDO_SNVS_DIG_TEST_OVERRIDE() volatile
    {
        PMU_LDO_SNVS_DIG ^= 1u << 1u;
    }

    /**
     * Get PMU_LDO_SNVS_DIG's REG_LP_EN bit.
     *
     * REG_LP_EN
     */
    inline bool get_PMU_LDO_SNVS_DIG_REG_LP_EN() volatile
    {
        return PMU_LDO_SNVS_DIG & (1u << 0u);
    }

    /**
     * Set PMU_LDO_SNVS_DIG's REG_LP_EN bit.
     *
     * REG_LP_EN
     */
    inline void set_PMU_LDO_SNVS_DIG_REG_LP_EN() volatile
    {
        PMU_LDO_SNVS_DIG |= 1u << 0u;
    }

    /**
     * Clear PMU_LDO_SNVS_DIG's REG_LP_EN bit.
     *
     * REG_LP_EN
     */
    inline void clear_PMU_LDO_SNVS_DIG_REG_LP_EN() volatile
    {
        PMU_LDO_SNVS_DIG &= ~(1u << 0u);
    }

    /**
     * Toggle PMU_LDO_SNVS_DIG's REG_LP_EN bit.
     *
     * REG_LP_EN
     */
    inline void toggle_PMU_LDO_SNVS_DIG_REG_LP_EN() volatile
    {
        PMU_LDO_SNVS_DIG ^= 1u << 0u;
    }

    /**
     * Get all of PMU_LDO_SNVS_DIG's bit fields.
     *
     * (read-write) PMU_LDO_SNVS_DIG_REGISTER
     */
    inline void get_PMU_LDO_SNVS_DIG(bool &REG_EN, bool &TEST_OVERRIDE,
                                     bool &REG_LP_EN) volatile
    {
        uint32_t curr = PMU_LDO_SNVS_DIG;

        REG_EN = curr & (1u << 2u);
        TEST_OVERRIDE = curr & (1u << 1u);
        REG_LP_EN = curr & (1u << 0u);
    }

    /**
     * Set all of PMU_LDO_SNVS_DIG's bit fields.
     *
     * (read-write) PMU_LDO_SNVS_DIG_REGISTER
     */
    inline void set_PMU_LDO_SNVS_DIG(bool REG_EN, bool TEST_OVERRIDE,
                                     bool REG_LP_EN) volatile
    {
        uint32_t curr = PMU_LDO_SNVS_DIG;

        curr &= ~(0b1u << 2u);
        curr |= (REG_EN & 0b1u) << 2u;
        curr &= ~(0b1u << 1u);
        curr |= (TEST_OVERRIDE & 0b1u) << 1u;
        curr &= ~(0b1u << 0u);
        curr |= (REG_LP_EN & 0b1u) << 0u;

        PMU_LDO_SNVS_DIG = curr;
    }
};

static_assert(sizeof(anadig_ldo_snvs_dig) == anadig_ldo_snvs_dig::size);

static volatile anadig_ldo_snvs_dig *const ANADIG_LDO_SNVS_DIG =
    reinterpret_cast<anadig_ldo_snvs_dig *>(0x40C84000);

}; // namespace MIMXRT1176::CM7
