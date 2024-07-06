/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include "../enums/CCM_OSCPLL_DOMAIN_LEVEL.h"
#include "../enums/CCM_OSCPLL_DOMAIN_LEVEL0.h"
#include "../enums/CCM_OSCPLL_DOMAIN_LEVEL1.h"
#include "../enums/CCM_OSCPLL_DOMAIN_LEVEL2.h"
#include "../enums/CCM_OSCPLL_DOMAIN_LEVEL3.h"
#include "../enums/CCM_OSCPLL_STATUS0_ACTIVE_DOMAIN.h"
#include "../enums/CCM_OSCPLL_STATUS0_DOMAIN_ENABLE.h"
#include "../enums/CCM_OSCPLL_STATUS1_CPU0_MODE.h"
#include "../enums/CCM_OSCPLL_STATUS1_CPU1_MODE.h"
#include "../enums/CCM_OSCPLL_STATUS1_CPU2_MODE.h"
#include "../enums/CCM_OSCPLL_STATUS1_CPU3_MODE.h"
#include "../ifgen/common.h"

namespace MIMXRT1176::CM7
{

/**
 * Clock source select Registers
 */
struct [[gnu::packed]] OSCPLL_instance
{
    /* Constant attributes. */
    static constexpr std::size_t size =
        32; /*!< OSCPLL_instance's size in bytes. */

    /* Fields. */
    uint32_t OSCPLL_DIRECT; /*!< (read-write) Clock source direct control */
    uint32_t OSCPLL_DOMAIN; /*!< (read-write) Clock source domain control */
    uint32_t
        OSCPLL_SETPOINT; /*!< (read-write) Clock source Setpoint setting */
    const uint32_t reserved_padding0 = {};
    uint32_t OSCPLL_STATUS0; /*!< (read-write) Clock source working status */
    uint32_t OSCPLL_STATUS1; /*!< (read-write) Clock source low power status */
    uint32_t OSCPLL_CONFIG;  /*!< (read-write) Clock source configuration */
    uint32_t OSCPLL_AUTHEN;  /*!< (read-write) Clock source access control */

    /* Methods. */

    /**
     * Get OSCPLL_DIRECT's ON bit.
     *
     * turn on clock source
     */
    inline bool get_OSCPLL_DIRECT_ON()
    {
        return OSCPLL_DIRECT & (1u << 0u);
    }

    /**
     * Set OSCPLL_DIRECT's ON bit.
     *
     * turn on clock source
     */
    inline void set_OSCPLL_DIRECT_ON()
    {
        OSCPLL_DIRECT |= 1u << 0u;
    }

    /**
     * Clear OSCPLL_DIRECT's ON bit.
     *
     * turn on clock source
     */
    inline void clear_OSCPLL_DIRECT_ON()
    {
        OSCPLL_DIRECT &= ~(1u << 0u);
    }

    /**
     * Toggle OSCPLL_DIRECT's ON bit.
     *
     * turn on clock source
     */
    inline void toggle_OSCPLL_DIRECT_ON()
    {
        OSCPLL_DIRECT ^= 1u << 0u;
    }

    /**
     * Get OSCPLL_DOMAIN's LEVEL3 field.
     *
     * Depend level
     */
    inline CCM_OSCPLL_DOMAIN_LEVEL3 get_OSCPLL_DOMAIN_LEVEL3()
    {
        return CCM_OSCPLL_DOMAIN_LEVEL3((OSCPLL_DOMAIN >> 28u) & 0b111u);
    }

    /**
     * Set OSCPLL_DOMAIN's LEVEL3 field.
     *
     * Depend level
     */
    inline void set_OSCPLL_DOMAIN_LEVEL3(CCM_OSCPLL_DOMAIN_LEVEL3 value)
    {
        uint32_t curr = OSCPLL_DOMAIN;

        curr &= ~(0b111u << 28u);
        curr |= (std::to_underlying(value) & 0b111u) << 28u;

        OSCPLL_DOMAIN = curr;
    }

    /**
     * Get OSCPLL_DOMAIN's LEVEL2 field.
     *
     * Depend level
     */
    inline CCM_OSCPLL_DOMAIN_LEVEL2 get_OSCPLL_DOMAIN_LEVEL2()
    {
        return CCM_OSCPLL_DOMAIN_LEVEL2((OSCPLL_DOMAIN >> 24u) & 0b111u);
    }

    /**
     * Set OSCPLL_DOMAIN's LEVEL2 field.
     *
     * Depend level
     */
    inline void set_OSCPLL_DOMAIN_LEVEL2(CCM_OSCPLL_DOMAIN_LEVEL2 value)
    {
        uint32_t curr = OSCPLL_DOMAIN;

        curr &= ~(0b111u << 24u);
        curr |= (std::to_underlying(value) & 0b111u) << 24u;

        OSCPLL_DOMAIN = curr;
    }

    /**
     * Get OSCPLL_DOMAIN's LEVEL1 field.
     *
     * Depend level
     */
    inline CCM_OSCPLL_DOMAIN_LEVEL1 get_OSCPLL_DOMAIN_LEVEL1()
    {
        return CCM_OSCPLL_DOMAIN_LEVEL1((OSCPLL_DOMAIN >> 20u) & 0b111u);
    }

    /**
     * Set OSCPLL_DOMAIN's LEVEL1 field.
     *
     * Depend level
     */
    inline void set_OSCPLL_DOMAIN_LEVEL1(CCM_OSCPLL_DOMAIN_LEVEL1 value)
    {
        uint32_t curr = OSCPLL_DOMAIN;

        curr &= ~(0b111u << 20u);
        curr |= (std::to_underlying(value) & 0b111u) << 20u;

        OSCPLL_DOMAIN = curr;
    }

    /**
     * Get OSCPLL_DOMAIN's LEVEL0 field.
     *
     * Dependence level
     */
    inline CCM_OSCPLL_DOMAIN_LEVEL0 get_OSCPLL_DOMAIN_LEVEL0()
    {
        return CCM_OSCPLL_DOMAIN_LEVEL0((OSCPLL_DOMAIN >> 16u) & 0b111u);
    }

    /**
     * Set OSCPLL_DOMAIN's LEVEL0 field.
     *
     * Dependence level
     */
    inline void set_OSCPLL_DOMAIN_LEVEL0(CCM_OSCPLL_DOMAIN_LEVEL0 value)
    {
        uint32_t curr = OSCPLL_DOMAIN;

        curr &= ~(0b111u << 16u);
        curr |= (std::to_underlying(value) & 0b111u) << 16u;

        OSCPLL_DOMAIN = curr;
    }

    /**
     * Get OSCPLL_DOMAIN's LEVEL field.
     *
     * Current dependence level
     */
    inline CCM_OSCPLL_DOMAIN_LEVEL get_OSCPLL_DOMAIN_LEVEL()
    {
        return CCM_OSCPLL_DOMAIN_LEVEL((OSCPLL_DOMAIN >> 0u) & 0b111u);
    }

    /**
     * Set OSCPLL_DOMAIN's LEVEL field.
     *
     * Current dependence level
     */
    inline void set_OSCPLL_DOMAIN_LEVEL(CCM_OSCPLL_DOMAIN_LEVEL value)
    {
        uint32_t curr = OSCPLL_DOMAIN;

        curr &= ~(0b111u << 0u);
        curr |= (std::to_underlying(value) & 0b111u) << 0u;

        OSCPLL_DOMAIN = curr;
    }

    /**
     * Get all of OSCPLL_DOMAIN's bit fields.
     *
     * (read-write) Clock source domain control
     */
    inline void get_OSCPLL_DOMAIN(CCM_OSCPLL_DOMAIN_LEVEL3 &LEVEL3,
                                  CCM_OSCPLL_DOMAIN_LEVEL2 &LEVEL2,
                                  CCM_OSCPLL_DOMAIN_LEVEL1 &LEVEL1,
                                  CCM_OSCPLL_DOMAIN_LEVEL0 &LEVEL0,
                                  CCM_OSCPLL_DOMAIN_LEVEL &LEVEL)
    {
        uint32_t curr = OSCPLL_DOMAIN;

        LEVEL3 = CCM_OSCPLL_DOMAIN_LEVEL3((curr >> 28u) & 0b111u);
        LEVEL2 = CCM_OSCPLL_DOMAIN_LEVEL2((curr >> 24u) & 0b111u);
        LEVEL1 = CCM_OSCPLL_DOMAIN_LEVEL1((curr >> 20u) & 0b111u);
        LEVEL0 = CCM_OSCPLL_DOMAIN_LEVEL0((curr >> 16u) & 0b111u);
        LEVEL = CCM_OSCPLL_DOMAIN_LEVEL((curr >> 0u) & 0b111u);
    }

    /**
     * Set all of OSCPLL_DOMAIN's bit fields.
     *
     * (read-write) Clock source domain control
     */
    inline void set_OSCPLL_DOMAIN(CCM_OSCPLL_DOMAIN_LEVEL3 LEVEL3,
                                  CCM_OSCPLL_DOMAIN_LEVEL2 LEVEL2,
                                  CCM_OSCPLL_DOMAIN_LEVEL1 LEVEL1,
                                  CCM_OSCPLL_DOMAIN_LEVEL0 LEVEL0,
                                  CCM_OSCPLL_DOMAIN_LEVEL LEVEL)
    {
        uint32_t curr = OSCPLL_DOMAIN;

        curr &= ~(0b111u << 28u);
        curr |= (std::to_underlying(LEVEL3) & 0b111u) << 28u;
        curr &= ~(0b111u << 24u);
        curr |= (std::to_underlying(LEVEL2) & 0b111u) << 24u;
        curr &= ~(0b111u << 20u);
        curr |= (std::to_underlying(LEVEL1) & 0b111u) << 20u;
        curr &= ~(0b111u << 16u);
        curr |= (std::to_underlying(LEVEL0) & 0b111u) << 16u;
        curr &= ~(0b111u << 0u);
        curr |= (std::to_underlying(LEVEL) & 0b111u) << 0u;

        OSCPLL_DOMAIN = curr;
    }

    /**
     * Get OSCPLL_SETPOINT's STANDBY field.
     *
     * Standby
     */
    inline uint16_t get_OSCPLL_SETPOINT_STANDBY()
    {
        return (OSCPLL_SETPOINT >> 16u) & 0b1111111111111111u;
    }

    /**
     * Set OSCPLL_SETPOINT's STANDBY field.
     *
     * Standby
     */
    inline void set_OSCPLL_SETPOINT_STANDBY(uint16_t value)
    {
        uint32_t curr = OSCPLL_SETPOINT;

        curr &= ~(0b1111111111111111u << 16u);
        curr |= (value & 0b1111111111111111u) << 16u;

        OSCPLL_SETPOINT = curr;
    }

    /**
     * Get OSCPLL_SETPOINT's SETPOINT field.
     *
     * Setpoint
     */
    inline uint16_t get_OSCPLL_SETPOINT_SETPOINT()
    {
        return (OSCPLL_SETPOINT >> 0u) & 0b1111111111111111u;
    }

    /**
     * Set OSCPLL_SETPOINT's SETPOINT field.
     *
     * Setpoint
     */
    inline void set_OSCPLL_SETPOINT_SETPOINT(uint16_t value)
    {
        uint32_t curr = OSCPLL_SETPOINT;

        curr &= ~(0b1111111111111111u << 0u);
        curr |= (value & 0b1111111111111111u) << 0u;

        OSCPLL_SETPOINT = curr;
    }

    /**
     * Get all of OSCPLL_SETPOINT's bit fields.
     *
     * (read-write) Clock source Setpoint setting
     */
    inline void get_OSCPLL_SETPOINT(uint16_t &STANDBY, uint16_t &SETPOINT)
    {
        uint32_t curr = OSCPLL_SETPOINT;

        STANDBY = (curr >> 16u) & 0b1111111111111111u;
        SETPOINT = (curr >> 0u) & 0b1111111111111111u;
    }

    /**
     * Set all of OSCPLL_SETPOINT's bit fields.
     *
     * (read-write) Clock source Setpoint setting
     */
    inline void set_OSCPLL_SETPOINT(uint16_t STANDBY, uint16_t SETPOINT)
    {
        uint32_t curr = OSCPLL_SETPOINT;

        curr &= ~(0b1111111111111111u << 16u);
        curr |= (STANDBY & 0b1111111111111111u) << 16u;
        curr &= ~(0b1111111111111111u << 0u);
        curr |= (SETPOINT & 0b1111111111111111u) << 0u;

        OSCPLL_SETPOINT = curr;
    }

    /**
     * Get OSCPLL_STATUS0's IN_USE bit.
     *
     * In use
     */
    inline bool get_OSCPLL_STATUS0_IN_USE()
    {
        return OSCPLL_STATUS0 & (1u << 28u);
    }

    /**
     * Get OSCPLL_STATUS0's DOMAIN_ENABLE field.
     *
     * Enable status from each domain
     */
    inline CCM_OSCPLL_STATUS0_DOMAIN_ENABLE get_OSCPLL_STATUS0_DOMAIN_ENABLE()
    {
        return CCM_OSCPLL_STATUS0_DOMAIN_ENABLE((OSCPLL_STATUS0 >> 12u) &
                                                0b1111u);
    }

    /**
     * Get OSCPLL_STATUS0's ACTIVE_DOMAIN field.
     *
     * Domains that own this clock source
     */
    inline CCM_OSCPLL_STATUS0_ACTIVE_DOMAIN get_OSCPLL_STATUS0_ACTIVE_DOMAIN()
    {
        return CCM_OSCPLL_STATUS0_ACTIVE_DOMAIN((OSCPLL_STATUS0 >> 8u) &
                                                0b1111u);
    }

    /**
     * Get OSCPLL_STATUS0's STATUS_LATE bit.
     *
     * Clock source ready
     */
    inline bool get_OSCPLL_STATUS0_STATUS_LATE()
    {
        return OSCPLL_STATUS0 & (1u << 5u);
    }

    /**
     * Get OSCPLL_STATUS0's STATUS_EARLY bit.
     *
     * Clock source active
     */
    inline bool get_OSCPLL_STATUS0_STATUS_EARLY()
    {
        return OSCPLL_STATUS0 & (1u << 4u);
    }

    /**
     * Get OSCPLL_STATUS0's ON bit.
     *
     * Clock source current state
     */
    inline bool get_OSCPLL_STATUS0_ON()
    {
        return OSCPLL_STATUS0 & (1u << 0u);
    }

    /**
     * Get all of OSCPLL_STATUS0's bit fields.
     *
     * (read-write) Clock source working status
     */
    inline void get_OSCPLL_STATUS0(
        bool &IN_USE, CCM_OSCPLL_STATUS0_DOMAIN_ENABLE &DOMAIN_ENABLE,
        CCM_OSCPLL_STATUS0_ACTIVE_DOMAIN &ACTIVE_DOMAIN, bool &STATUS_LATE,
        bool &STATUS_EARLY, bool &ON)
    {
        uint32_t curr = OSCPLL_STATUS0;

        IN_USE = curr & (1u << 28u);
        DOMAIN_ENABLE =
            CCM_OSCPLL_STATUS0_DOMAIN_ENABLE((curr >> 12u) & 0b1111u);
        ACTIVE_DOMAIN =
            CCM_OSCPLL_STATUS0_ACTIVE_DOMAIN((curr >> 8u) & 0b1111u);
        STATUS_LATE = curr & (1u << 5u);
        STATUS_EARLY = curr & (1u << 4u);
        ON = curr & (1u << 0u);
    }

    /**
     * Get OSCPLL_STATUS1's STANDBY_OUT_REQUEST bit.
     *
     * Clock gate turn on request from GPC standby
     */
    inline bool get_OSCPLL_STATUS1_STANDBY_OUT_REQUEST()
    {
        return OSCPLL_STATUS1 & (1u << 31u);
    }

    /**
     * Get OSCPLL_STATUS1's STANDBY_OUT_DONE bit.
     *
     * Clock gate turn on finish from GPC standby
     */
    inline bool get_OSCPLL_STATUS1_STANDBY_OUT_DONE()
    {
        return OSCPLL_STATUS1 & (1u << 30u);
    }

    /**
     * Get OSCPLL_STATUS1's STANDBY_IN_DONE bit.
     *
     * Clock source turn off finish from GPC standby
     */
    inline bool get_OSCPLL_STATUS1_STANDBY_IN_DONE()
    {
        return OSCPLL_STATUS1 & (1u << 29u);
    }

    /**
     * Get OSCPLL_STATUS1's STANDBY_IN_REQUEST bit.
     *
     * Clock gate turn off request from GPC standby
     */
    inline bool get_OSCPLL_STATUS1_STANDBY_IN_REQUEST()
    {
        return OSCPLL_STATUS1 & (1u << 28u);
    }

    /**
     * Get OSCPLL_STATUS1's SETPOINT_ON_DONE bit.
     *
     * Clock gate turn on finish from GPC Setpoint
     */
    inline bool get_OSCPLL_STATUS1_SETPOINT_ON_DONE()
    {
        return OSCPLL_STATUS1 & (1u << 27u);
    }

    /**
     * Get OSCPLL_STATUS1's SETPOINT_ON_REQUEST bit.
     *
     * Clock gate turn on request from GPC Setpoint
     */
    inline bool get_OSCPLL_STATUS1_SETPOINT_ON_REQUEST()
    {
        return OSCPLL_STATUS1 & (1u << 26u);
    }

    /**
     * Get OSCPLL_STATUS1's SETPOINT_OFF_DONE bit.
     *
     * Clock source turn off finish from GPC Setpoint
     */
    inline bool get_OSCPLL_STATUS1_SETPOINT_OFF_DONE()
    {
        return OSCPLL_STATUS1 & (1u << 25u);
    }

    /**
     * Get OSCPLL_STATUS1's SETPOINT_OFF_REQUEST bit.
     *
     * Clock gate turn off request from GPC Setpoint
     */
    inline bool get_OSCPLL_STATUS1_SETPOINT_OFF_REQUEST()
    {
        return OSCPLL_STATUS1 & (1u << 24u);
    }

    /**
     * Get OSCPLL_STATUS1's CURRENT_SETPOINT field.
     *
     * Current Setpoint
     */
    inline uint8_t get_OSCPLL_STATUS1_CURRENT_SETPOINT()
    {
        return (OSCPLL_STATUS1 >> 20u) & 0b1111u;
    }

    /**
     * Get OSCPLL_STATUS1's TARGET_SETPOINT field.
     *
     * Next Setpoint to change to
     */
    inline uint8_t get_OSCPLL_STATUS1_TARGET_SETPOINT()
    {
        return (OSCPLL_STATUS1 >> 16u) & 0b1111u;
    }

    /**
     * Get OSCPLL_STATUS1's CPU3_MODE_DONE bit.
     *
     * Domain3 Low Power Mode task done
     */
    inline bool get_OSCPLL_STATUS1_CPU3_MODE_DONE()
    {
        return OSCPLL_STATUS1 & (1u << 15u);
    }

    /**
     * Get OSCPLL_STATUS1's CPU3_MODE_REQUEST bit.
     *
     * Domain3 request enter Low Power Mode
     */
    inline bool get_OSCPLL_STATUS1_CPU3_MODE_REQUEST()
    {
        return OSCPLL_STATUS1 & (1u << 14u);
    }

    /**
     * Get OSCPLL_STATUS1's CPU3_MODE field.
     *
     * Domain3 Low Power Mode
     */
    inline CCM_OSCPLL_STATUS1_CPU3_MODE get_OSCPLL_STATUS1_CPU3_MODE()
    {
        return CCM_OSCPLL_STATUS1_CPU3_MODE((OSCPLL_STATUS1 >> 12u) & 0b11u);
    }

    /**
     * Get OSCPLL_STATUS1's CPU2_MODE_DONE bit.
     *
     * Domain2 Low Power Mode task done
     */
    inline bool get_OSCPLL_STATUS1_CPU2_MODE_DONE()
    {
        return OSCPLL_STATUS1 & (1u << 11u);
    }

    /**
     * Get OSCPLL_STATUS1's CPU2_MODE_REQUEST bit.
     *
     * Domain2 request enter Low Power Mode
     */
    inline bool get_OSCPLL_STATUS1_CPU2_MODE_REQUEST()
    {
        return OSCPLL_STATUS1 & (1u << 10u);
    }

    /**
     * Get OSCPLL_STATUS1's CPU2_MODE field.
     *
     * Domain2 Low Power Mode
     */
    inline CCM_OSCPLL_STATUS1_CPU2_MODE get_OSCPLL_STATUS1_CPU2_MODE()
    {
        return CCM_OSCPLL_STATUS1_CPU2_MODE((OSCPLL_STATUS1 >> 8u) & 0b11u);
    }

    /**
     * Get OSCPLL_STATUS1's CPU1_MODE_DONE bit.
     *
     * Domain1 Low Power Mode task done
     */
    inline bool get_OSCPLL_STATUS1_CPU1_MODE_DONE()
    {
        return OSCPLL_STATUS1 & (1u << 7u);
    }

    /**
     * Get OSCPLL_STATUS1's CPU1_MODE_REQUEST bit.
     *
     * Domain1 request enter Low Power Mode
     */
    inline bool get_OSCPLL_STATUS1_CPU1_MODE_REQUEST()
    {
        return OSCPLL_STATUS1 & (1u << 6u);
    }

    /**
     * Get OSCPLL_STATUS1's CPU1_MODE field.
     *
     * Domain1 Low Power Mode
     */
    inline CCM_OSCPLL_STATUS1_CPU1_MODE get_OSCPLL_STATUS1_CPU1_MODE()
    {
        return CCM_OSCPLL_STATUS1_CPU1_MODE((OSCPLL_STATUS1 >> 4u) & 0b11u);
    }

    /**
     * Get OSCPLL_STATUS1's CPU0_MODE_DONE bit.
     *
     * Domain0 Low Power Mode task done
     */
    inline bool get_OSCPLL_STATUS1_CPU0_MODE_DONE()
    {
        return OSCPLL_STATUS1 & (1u << 3u);
    }

    /**
     * Get OSCPLL_STATUS1's CPU0_MODE_REQUEST bit.
     *
     * Domain0 request enter Low Power Mode
     */
    inline bool get_OSCPLL_STATUS1_CPU0_MODE_REQUEST()
    {
        return OSCPLL_STATUS1 & (1u << 2u);
    }

    /**
     * Get OSCPLL_STATUS1's CPU0_MODE field.
     *
     * Domain0 Low Power Mode
     */
    inline CCM_OSCPLL_STATUS1_CPU0_MODE get_OSCPLL_STATUS1_CPU0_MODE()
    {
        return CCM_OSCPLL_STATUS1_CPU0_MODE((OSCPLL_STATUS1 >> 0u) & 0b11u);
    }

    /**
     * Get all of OSCPLL_STATUS1's bit fields.
     *
     * (read-write) Clock source low power status
     */
    inline void get_OSCPLL_STATUS1(
        bool &STANDBY_OUT_REQUEST, bool &STANDBY_OUT_DONE,
        bool &STANDBY_IN_DONE, bool &STANDBY_IN_REQUEST,
        bool &SETPOINT_ON_DONE, bool &SETPOINT_ON_REQUEST,
        bool &SETPOINT_OFF_DONE, bool &SETPOINT_OFF_REQUEST,
        uint8_t &CURRENT_SETPOINT, uint8_t &TARGET_SETPOINT,
        bool &CPU3_MODE_DONE, bool &CPU3_MODE_REQUEST,
        CCM_OSCPLL_STATUS1_CPU3_MODE &CPU3_MODE, bool &CPU2_MODE_DONE,
        bool &CPU2_MODE_REQUEST, CCM_OSCPLL_STATUS1_CPU2_MODE &CPU2_MODE,
        bool &CPU1_MODE_DONE, bool &CPU1_MODE_REQUEST,
        CCM_OSCPLL_STATUS1_CPU1_MODE &CPU1_MODE, bool &CPU0_MODE_DONE,
        bool &CPU0_MODE_REQUEST, CCM_OSCPLL_STATUS1_CPU0_MODE &CPU0_MODE)
    {
        uint32_t curr = OSCPLL_STATUS1;

        STANDBY_OUT_REQUEST = curr & (1u << 31u);
        STANDBY_OUT_DONE = curr & (1u << 30u);
        STANDBY_IN_DONE = curr & (1u << 29u);
        STANDBY_IN_REQUEST = curr & (1u << 28u);
        SETPOINT_ON_DONE = curr & (1u << 27u);
        SETPOINT_ON_REQUEST = curr & (1u << 26u);
        SETPOINT_OFF_DONE = curr & (1u << 25u);
        SETPOINT_OFF_REQUEST = curr & (1u << 24u);
        CURRENT_SETPOINT = (curr >> 20u) & 0b1111u;
        TARGET_SETPOINT = (curr >> 16u) & 0b1111u;
        CPU3_MODE_DONE = curr & (1u << 15u);
        CPU3_MODE_REQUEST = curr & (1u << 14u);
        CPU3_MODE = CCM_OSCPLL_STATUS1_CPU3_MODE((curr >> 12u) & 0b11u);
        CPU2_MODE_DONE = curr & (1u << 11u);
        CPU2_MODE_REQUEST = curr & (1u << 10u);
        CPU2_MODE = CCM_OSCPLL_STATUS1_CPU2_MODE((curr >> 8u) & 0b11u);
        CPU1_MODE_DONE = curr & (1u << 7u);
        CPU1_MODE_REQUEST = curr & (1u << 6u);
        CPU1_MODE = CCM_OSCPLL_STATUS1_CPU1_MODE((curr >> 4u) & 0b11u);
        CPU0_MODE_DONE = curr & (1u << 3u);
        CPU0_MODE_REQUEST = curr & (1u << 2u);
        CPU0_MODE = CCM_OSCPLL_STATUS1_CPU0_MODE((curr >> 0u) & 0b11u);
    }

    /**
     * Get OSCPLL_CONFIG's SETPOINT_PRESENT bit.
     *
     * Setpoint present
     */
    inline bool get_OSCPLL_CONFIG_SETPOINT_PRESENT()
    {
        return OSCPLL_CONFIG & (1u << 4u);
    }

    /**
     * Get OSCPLL_CONFIG's AUTOMODE_PRESENT bit.
     *
     * Automode Present
     */
    inline bool get_OSCPLL_CONFIG_AUTOMODE_PRESENT()
    {
        return OSCPLL_CONFIG & (1u << 1u);
    }

    /**
     * Get all of OSCPLL_CONFIG's bit fields.
     *
     * (read-write) Clock source configuration
     */
    inline void get_OSCPLL_CONFIG(bool &SETPOINT_PRESENT,
                                  bool &AUTOMODE_PRESENT)
    {
        uint32_t curr = OSCPLL_CONFIG;

        SETPOINT_PRESENT = curr & (1u << 4u);
        AUTOMODE_PRESENT = curr & (1u << 1u);
    }

    /**
     * Get OSCPLL_AUTHEN's LOCK_MODE bit.
     *
     * Lock low power and access mode
     */
    inline bool get_OSCPLL_AUTHEN_LOCK_MODE()
    {
        return OSCPLL_AUTHEN & (1u << 20u);
    }

    /**
     * Set OSCPLL_AUTHEN's LOCK_MODE bit.
     *
     * Lock low power and access mode
     */
    inline void set_OSCPLL_AUTHEN_LOCK_MODE()
    {
        OSCPLL_AUTHEN |= 1u << 20u;
    }

    /**
     * Clear OSCPLL_AUTHEN's LOCK_MODE bit.
     *
     * Lock low power and access mode
     */
    inline void clear_OSCPLL_AUTHEN_LOCK_MODE()
    {
        OSCPLL_AUTHEN &= ~(1u << 20u);
    }

    /**
     * Toggle OSCPLL_AUTHEN's LOCK_MODE bit.
     *
     * Lock low power and access mode
     */
    inline void toggle_OSCPLL_AUTHEN_LOCK_MODE()
    {
        OSCPLL_AUTHEN ^= 1u << 20u;
    }

    /**
     * Get OSCPLL_AUTHEN's CPULPM bit.
     *
     * CPU Low Power Mode
     */
    inline bool get_OSCPLL_AUTHEN_CPULPM()
    {
        return OSCPLL_AUTHEN & (1u << 18u);
    }

    /**
     * Set OSCPLL_AUTHEN's CPULPM bit.
     *
     * CPU Low Power Mode
     */
    inline void set_OSCPLL_AUTHEN_CPULPM()
    {
        OSCPLL_AUTHEN |= 1u << 18u;
    }

    /**
     * Clear OSCPLL_AUTHEN's CPULPM bit.
     *
     * CPU Low Power Mode
     */
    inline void clear_OSCPLL_AUTHEN_CPULPM()
    {
        OSCPLL_AUTHEN &= ~(1u << 18u);
    }

    /**
     * Toggle OSCPLL_AUTHEN's CPULPM bit.
     *
     * CPU Low Power Mode
     */
    inline void toggle_OSCPLL_AUTHEN_CPULPM()
    {
        OSCPLL_AUTHEN ^= 1u << 18u;
    }

    /**
     * Get OSCPLL_AUTHEN's SETPOINT_MODE bit.
     *
     * LPCG works in Setpoint controlled Mode.
     */
    inline bool get_OSCPLL_AUTHEN_SETPOINT_MODE()
    {
        return OSCPLL_AUTHEN & (1u << 17u);
    }

    /**
     * Set OSCPLL_AUTHEN's SETPOINT_MODE bit.
     *
     * LPCG works in Setpoint controlled Mode.
     */
    inline void set_OSCPLL_AUTHEN_SETPOINT_MODE()
    {
        OSCPLL_AUTHEN |= 1u << 17u;
    }

    /**
     * Clear OSCPLL_AUTHEN's SETPOINT_MODE bit.
     *
     * LPCG works in Setpoint controlled Mode.
     */
    inline void clear_OSCPLL_AUTHEN_SETPOINT_MODE()
    {
        OSCPLL_AUTHEN &= ~(1u << 17u);
    }

    /**
     * Toggle OSCPLL_AUTHEN's SETPOINT_MODE bit.
     *
     * LPCG works in Setpoint controlled Mode.
     */
    inline void toggle_OSCPLL_AUTHEN_SETPOINT_MODE()
    {
        OSCPLL_AUTHEN ^= 1u << 17u;
    }

    /**
     * Get OSCPLL_AUTHEN's DOMAIN_MODE bit.
     *
     * Low power and access control by domain
     */
    inline bool get_OSCPLL_AUTHEN_DOMAIN_MODE()
    {
        return OSCPLL_AUTHEN & (1u << 16u);
    }

    /**
     * Set OSCPLL_AUTHEN's DOMAIN_MODE bit.
     *
     * Low power and access control by domain
     */
    inline void set_OSCPLL_AUTHEN_DOMAIN_MODE()
    {
        OSCPLL_AUTHEN |= 1u << 16u;
    }

    /**
     * Clear OSCPLL_AUTHEN's DOMAIN_MODE bit.
     *
     * Low power and access control by domain
     */
    inline void clear_OSCPLL_AUTHEN_DOMAIN_MODE()
    {
        OSCPLL_AUTHEN &= ~(1u << 16u);
    }

    /**
     * Toggle OSCPLL_AUTHEN's DOMAIN_MODE bit.
     *
     * Low power and access control by domain
     */
    inline void toggle_OSCPLL_AUTHEN_DOMAIN_MODE()
    {
        OSCPLL_AUTHEN ^= 1u << 16u;
    }

    /**
     * Get OSCPLL_AUTHEN's LOCK_LIST bit.
     *
     * Lock Whitelist
     */
    inline bool get_OSCPLL_AUTHEN_LOCK_LIST()
    {
        return OSCPLL_AUTHEN & (1u << 12u);
    }

    /**
     * Set OSCPLL_AUTHEN's LOCK_LIST bit.
     *
     * Lock Whitelist
     */
    inline void set_OSCPLL_AUTHEN_LOCK_LIST()
    {
        OSCPLL_AUTHEN |= 1u << 12u;
    }

    /**
     * Clear OSCPLL_AUTHEN's LOCK_LIST bit.
     *
     * Lock Whitelist
     */
    inline void clear_OSCPLL_AUTHEN_LOCK_LIST()
    {
        OSCPLL_AUTHEN &= ~(1u << 12u);
    }

    /**
     * Toggle OSCPLL_AUTHEN's LOCK_LIST bit.
     *
     * Lock Whitelist
     */
    inline void toggle_OSCPLL_AUTHEN_LOCK_LIST()
    {
        OSCPLL_AUTHEN ^= 1u << 12u;
    }

    /**
     * Get OSCPLL_AUTHEN's WHITE_LIST field.
     *
     * Whitelist
     */
    inline uint8_t get_OSCPLL_AUTHEN_WHITE_LIST()
    {
        return (OSCPLL_AUTHEN >> 8u) & 0b1111u;
    }

    /**
     * Set OSCPLL_AUTHEN's WHITE_LIST field.
     *
     * Whitelist
     */
    inline void set_OSCPLL_AUTHEN_WHITE_LIST(uint8_t value)
    {
        uint32_t curr = OSCPLL_AUTHEN;

        curr &= ~(0b1111u << 8u);
        curr |= (value & 0b1111u) << 8u;

        OSCPLL_AUTHEN = curr;
    }

    /**
     * Get OSCPLL_AUTHEN's LOCK_TZ bit.
     *
     * lock truszone setting
     */
    inline bool get_OSCPLL_AUTHEN_LOCK_TZ()
    {
        return OSCPLL_AUTHEN & (1u << 4u);
    }

    /**
     * Set OSCPLL_AUTHEN's LOCK_TZ bit.
     *
     * lock truszone setting
     */
    inline void set_OSCPLL_AUTHEN_LOCK_TZ()
    {
        OSCPLL_AUTHEN |= 1u << 4u;
    }

    /**
     * Clear OSCPLL_AUTHEN's LOCK_TZ bit.
     *
     * lock truszone setting
     */
    inline void clear_OSCPLL_AUTHEN_LOCK_TZ()
    {
        OSCPLL_AUTHEN &= ~(1u << 4u);
    }

    /**
     * Toggle OSCPLL_AUTHEN's LOCK_TZ bit.
     *
     * lock truszone setting
     */
    inline void toggle_OSCPLL_AUTHEN_LOCK_TZ()
    {
        OSCPLL_AUTHEN ^= 1u << 4u;
    }

    /**
     * Get OSCPLL_AUTHEN's TZ_NS bit.
     *
     * Non-secure access
     */
    inline bool get_OSCPLL_AUTHEN_TZ_NS()
    {
        return OSCPLL_AUTHEN & (1u << 1u);
    }

    /**
     * Set OSCPLL_AUTHEN's TZ_NS bit.
     *
     * Non-secure access
     */
    inline void set_OSCPLL_AUTHEN_TZ_NS()
    {
        OSCPLL_AUTHEN |= 1u << 1u;
    }

    /**
     * Clear OSCPLL_AUTHEN's TZ_NS bit.
     *
     * Non-secure access
     */
    inline void clear_OSCPLL_AUTHEN_TZ_NS()
    {
        OSCPLL_AUTHEN &= ~(1u << 1u);
    }

    /**
     * Toggle OSCPLL_AUTHEN's TZ_NS bit.
     *
     * Non-secure access
     */
    inline void toggle_OSCPLL_AUTHEN_TZ_NS()
    {
        OSCPLL_AUTHEN ^= 1u << 1u;
    }

    /**
     * Get OSCPLL_AUTHEN's TZ_USER bit.
     *
     * User access
     */
    inline bool get_OSCPLL_AUTHEN_TZ_USER()
    {
        return OSCPLL_AUTHEN & (1u << 0u);
    }

    /**
     * Set OSCPLL_AUTHEN's TZ_USER bit.
     *
     * User access
     */
    inline void set_OSCPLL_AUTHEN_TZ_USER()
    {
        OSCPLL_AUTHEN |= 1u << 0u;
    }

    /**
     * Clear OSCPLL_AUTHEN's TZ_USER bit.
     *
     * User access
     */
    inline void clear_OSCPLL_AUTHEN_TZ_USER()
    {
        OSCPLL_AUTHEN &= ~(1u << 0u);
    }

    /**
     * Toggle OSCPLL_AUTHEN's TZ_USER bit.
     *
     * User access
     */
    inline void toggle_OSCPLL_AUTHEN_TZ_USER()
    {
        OSCPLL_AUTHEN ^= 1u << 0u;
    }

    /**
     * Get all of OSCPLL_AUTHEN's bit fields.
     *
     * (read-write) Clock source access control
     */
    inline void get_OSCPLL_AUTHEN(bool &LOCK_MODE, bool &CPULPM,
                                  bool &SETPOINT_MODE, bool &DOMAIN_MODE,
                                  bool &LOCK_LIST, uint8_t &WHITE_LIST,
                                  bool &LOCK_TZ, bool &TZ_NS, bool &TZ_USER)
    {
        uint32_t curr = OSCPLL_AUTHEN;

        LOCK_MODE = curr & (1u << 20u);
        CPULPM = curr & (1u << 18u);
        SETPOINT_MODE = curr & (1u << 17u);
        DOMAIN_MODE = curr & (1u << 16u);
        LOCK_LIST = curr & (1u << 12u);
        WHITE_LIST = (curr >> 8u) & 0b1111u;
        LOCK_TZ = curr & (1u << 4u);
        TZ_NS = curr & (1u << 1u);
        TZ_USER = curr & (1u << 0u);
    }

    /**
     * Set all of OSCPLL_AUTHEN's bit fields.
     *
     * (read-write) Clock source access control
     */
    inline void set_OSCPLL_AUTHEN(bool LOCK_MODE, bool CPULPM,
                                  bool SETPOINT_MODE, bool DOMAIN_MODE,
                                  bool LOCK_LIST, uint8_t WHITE_LIST,
                                  bool LOCK_TZ, bool TZ_NS, bool TZ_USER)
    {
        uint32_t curr = OSCPLL_AUTHEN;

        curr &= ~(0b1u << 20u);
        curr |= (LOCK_MODE & 0b1u) << 20u;
        curr &= ~(0b1u << 18u);
        curr |= (CPULPM & 0b1u) << 18u;
        curr &= ~(0b1u << 17u);
        curr |= (SETPOINT_MODE & 0b1u) << 17u;
        curr &= ~(0b1u << 16u);
        curr |= (DOMAIN_MODE & 0b1u) << 16u;
        curr &= ~(0b1u << 12u);
        curr |= (LOCK_LIST & 0b1u) << 12u;
        curr &= ~(0b1111u << 8u);
        curr |= (WHITE_LIST & 0b1111u) << 8u;
        curr &= ~(0b1u << 4u);
        curr |= (LOCK_TZ & 0b1u) << 4u;
        curr &= ~(0b1u << 1u);
        curr |= (TZ_NS & 0b1u) << 1u;
        curr &= ~(0b1u << 0u);
        curr |= (TZ_USER & 0b1u) << 0u;

        OSCPLL_AUTHEN = curr;
    }
};

static_assert(sizeof(OSCPLL_instance) == OSCPLL_instance::size);

}; // namespace MIMXRT1176::CM7
