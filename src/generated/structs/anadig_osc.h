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
struct [[gnu::packed]] anadig_osc
{
    /* Constant attributes. */
    static constexpr std::size_t size =
        196; /*!< anadig_osc's size in bytes. */

    /* Fields. */
    static constexpr std::size_t reserved_padding0_length = 4;
    const uint32_t reserved_padding0[reserved_padding0_length] = {};
    uint32_t OSC_48M_CTRL; /*!< (read-write) 48MHz RCOSC Control Register */
    static constexpr std::size_t reserved_padding1_length = 3;
    const uint32_t reserved_padding1[reserved_padding1_length] = {};
    uint32_t OSC_24M_CTRL; /*!< (read-write) 24MHz OSC Control Register */
    static constexpr std::size_t reserved_padding2_length = 7;
    const uint32_t reserved_padding2[reserved_padding2_length] = {};
    uint32_t
        OSC_400M_CTRL0; /*!< (read-write) 400MHz RCOSC Control0 Register */
    static constexpr std::size_t reserved_padding3_length = 3;
    const uint32_t reserved_padding3[reserved_padding3_length] = {};
    uint32_t
        OSC_400M_CTRL1; /*!< (read-write) 400MHz RCOSC Control1 Register */
    static constexpr std::size_t reserved_padding4_length = 3;
    const uint32_t reserved_padding4[reserved_padding4_length] = {};
    uint32_t
        OSC_400M_CTRL2; /*!< (read-write) 400MHz RCOSC Control2 Register */
    static constexpr std::size_t reserved_padding5_length = 23;
    const uint32_t reserved_padding5[reserved_padding5_length] = {};
    uint32_t OSC_16M_CTRL; /*!< (read-write) 16MHz RCOSC Control Register */

    /* Methods. */

    /**
     * Get OSC_48M_CTRL's RC_48M_CONTROL_MODE bit.
     *
     * 48MHz RCOSC Control Mode
     */
    inline bool get_OSC_48M_CTRL_RC_48M_CONTROL_MODE() volatile
    {
        return OSC_48M_CTRL & (1u << 31u);
    }

    /**
     * Set OSC_48M_CTRL's RC_48M_CONTROL_MODE bit.
     *
     * 48MHz RCOSC Control Mode
     */
    inline void set_OSC_48M_CTRL_RC_48M_CONTROL_MODE() volatile
    {
        OSC_48M_CTRL |= 1u << 31u;
    }

    /**
     * Clear OSC_48M_CTRL's RC_48M_CONTROL_MODE bit.
     *
     * 48MHz RCOSC Control Mode
     */
    inline void clear_OSC_48M_CTRL_RC_48M_CONTROL_MODE() volatile
    {
        OSC_48M_CTRL &= ~(1u << 31u);
    }

    /**
     * Toggle OSC_48M_CTRL's RC_48M_CONTROL_MODE bit.
     *
     * 48MHz RCOSC Control Mode
     */
    inline void toggle_OSC_48M_CTRL_RC_48M_CONTROL_MODE() volatile
    {
        OSC_48M_CTRL ^= 1u << 31u;
    }

    /**
     * Get OSC_48M_CTRL's RC_48M_DIV2_CONTROL_MODE bit.
     *
     * RCOSC_48M_DIV2 Control Mode
     */
    inline bool get_OSC_48M_CTRL_RC_48M_DIV2_CONTROL_MODE() volatile
    {
        return OSC_48M_CTRL & (1u << 30u);
    }

    /**
     * Set OSC_48M_CTRL's RC_48M_DIV2_CONTROL_MODE bit.
     *
     * RCOSC_48M_DIV2 Control Mode
     */
    inline void set_OSC_48M_CTRL_RC_48M_DIV2_CONTROL_MODE() volatile
    {
        OSC_48M_CTRL |= 1u << 30u;
    }

    /**
     * Clear OSC_48M_CTRL's RC_48M_DIV2_CONTROL_MODE bit.
     *
     * RCOSC_48M_DIV2 Control Mode
     */
    inline void clear_OSC_48M_CTRL_RC_48M_DIV2_CONTROL_MODE() volatile
    {
        OSC_48M_CTRL &= ~(1u << 30u);
    }

    /**
     * Toggle OSC_48M_CTRL's RC_48M_DIV2_CONTROL_MODE bit.
     *
     * RCOSC_48M_DIV2 Control Mode
     */
    inline void toggle_OSC_48M_CTRL_RC_48M_DIV2_CONTROL_MODE() volatile
    {
        OSC_48M_CTRL ^= 1u << 30u;
    }

    /**
     * Get OSC_48M_CTRL's RC_48M_DIV2_EN bit.
     *
     * RCOSC_48M_DIV2 Enable
     */
    inline bool get_OSC_48M_CTRL_RC_48M_DIV2_EN() volatile
    {
        return OSC_48M_CTRL & (1u << 24u);
    }

    /**
     * Set OSC_48M_CTRL's RC_48M_DIV2_EN bit.
     *
     * RCOSC_48M_DIV2 Enable
     */
    inline void set_OSC_48M_CTRL_RC_48M_DIV2_EN() volatile
    {
        OSC_48M_CTRL |= 1u << 24u;
    }

    /**
     * Clear OSC_48M_CTRL's RC_48M_DIV2_EN bit.
     *
     * RCOSC_48M_DIV2 Enable
     */
    inline void clear_OSC_48M_CTRL_RC_48M_DIV2_EN() volatile
    {
        OSC_48M_CTRL &= ~(1u << 24u);
    }

    /**
     * Toggle OSC_48M_CTRL's RC_48M_DIV2_EN bit.
     *
     * RCOSC_48M_DIV2 Enable
     */
    inline void toggle_OSC_48M_CTRL_RC_48M_DIV2_EN() volatile
    {
        OSC_48M_CTRL ^= 1u << 24u;
    }

    /**
     * Get OSC_48M_CTRL's TEN bit.
     *
     * 48MHz RCOSC Enable
     */
    inline bool get_OSC_48M_CTRL_TEN() volatile
    {
        return OSC_48M_CTRL & (1u << 1u);
    }

    /**
     * Set OSC_48M_CTRL's TEN bit.
     *
     * 48MHz RCOSC Enable
     */
    inline void set_OSC_48M_CTRL_TEN() volatile
    {
        OSC_48M_CTRL |= 1u << 1u;
    }

    /**
     * Clear OSC_48M_CTRL's TEN bit.
     *
     * 48MHz RCOSC Enable
     */
    inline void clear_OSC_48M_CTRL_TEN() volatile
    {
        OSC_48M_CTRL &= ~(1u << 1u);
    }

    /**
     * Toggle OSC_48M_CTRL's TEN bit.
     *
     * 48MHz RCOSC Enable
     */
    inline void toggle_OSC_48M_CTRL_TEN() volatile
    {
        OSC_48M_CTRL ^= 1u << 1u;
    }

    /**
     * Get all of OSC_48M_CTRL's bit fields.
     *
     * (read-write) 48MHz RCOSC Control Register
     */
    inline void get_OSC_48M_CTRL(bool &RC_48M_CONTROL_MODE,
                                 bool &RC_48M_DIV2_CONTROL_MODE,
                                 bool &RC_48M_DIV2_EN, bool &TEN) volatile
    {
        uint32_t curr = OSC_48M_CTRL;

        RC_48M_CONTROL_MODE = curr & (1u << 31u);
        RC_48M_DIV2_CONTROL_MODE = curr & (1u << 30u);
        RC_48M_DIV2_EN = curr & (1u << 24u);
        TEN = curr & (1u << 1u);
    }

    /**
     * Set all of OSC_48M_CTRL's bit fields.
     *
     * (read-write) 48MHz RCOSC Control Register
     */
    inline void set_OSC_48M_CTRL(bool RC_48M_CONTROL_MODE,
                                 bool RC_48M_DIV2_CONTROL_MODE,
                                 bool RC_48M_DIV2_EN, bool TEN) volatile
    {
        uint32_t curr = OSC_48M_CTRL;

        curr &= ~(0b1u << 31u);
        curr |= (RC_48M_CONTROL_MODE & 0b1u) << 31u;
        curr &= ~(0b1u << 30u);
        curr |= (RC_48M_DIV2_CONTROL_MODE & 0b1u) << 30u;
        curr &= ~(0b1u << 24u);
        curr |= (RC_48M_DIV2_EN & 0b1u) << 24u;
        curr &= ~(0b1u << 1u);
        curr |= (TEN & 0b1u) << 1u;

        OSC_48M_CTRL = curr;
    }

    /**
     * Get OSC_24M_CTRL's OSC_24M_CONTROL_MODE bit.
     *
     * 24MHz OSC Control Mode
     */
    inline bool get_OSC_24M_CTRL_OSC_24M_CONTROL_MODE() volatile
    {
        return OSC_24M_CTRL & (1u << 31u);
    }

    /**
     * Set OSC_24M_CTRL's OSC_24M_CONTROL_MODE bit.
     *
     * 24MHz OSC Control Mode
     */
    inline void set_OSC_24M_CTRL_OSC_24M_CONTROL_MODE() volatile
    {
        OSC_24M_CTRL |= 1u << 31u;
    }

    /**
     * Clear OSC_24M_CTRL's OSC_24M_CONTROL_MODE bit.
     *
     * 24MHz OSC Control Mode
     */
    inline void clear_OSC_24M_CTRL_OSC_24M_CONTROL_MODE() volatile
    {
        OSC_24M_CTRL &= ~(1u << 31u);
    }

    /**
     * Toggle OSC_24M_CTRL's OSC_24M_CONTROL_MODE bit.
     *
     * 24MHz OSC Control Mode
     */
    inline void toggle_OSC_24M_CTRL_OSC_24M_CONTROL_MODE() volatile
    {
        OSC_24M_CTRL ^= 1u << 31u;
    }

    /**
     * Get OSC_24M_CTRL's OSC_24M_STABLE bit.
     *
     * 24MHz OSC Stable
     */
    inline bool get_OSC_24M_CTRL_OSC_24M_STABLE() volatile
    {
        return OSC_24M_CTRL & (1u << 30u);
    }

    /**
     * Get OSC_24M_CTRL's OSC_24M_GATE bit.
     *
     * 24MHz OSC Gate Control
     */
    inline bool get_OSC_24M_CTRL_OSC_24M_GATE() volatile
    {
        return OSC_24M_CTRL & (1u << 7u);
    }

    /**
     * Set OSC_24M_CTRL's OSC_24M_GATE bit.
     *
     * 24MHz OSC Gate Control
     */
    inline void set_OSC_24M_CTRL_OSC_24M_GATE() volatile
    {
        OSC_24M_CTRL |= 1u << 7u;
    }

    /**
     * Clear OSC_24M_CTRL's OSC_24M_GATE bit.
     *
     * 24MHz OSC Gate Control
     */
    inline void clear_OSC_24M_CTRL_OSC_24M_GATE() volatile
    {
        OSC_24M_CTRL &= ~(1u << 7u);
    }

    /**
     * Toggle OSC_24M_CTRL's OSC_24M_GATE bit.
     *
     * 24MHz OSC Gate Control
     */
    inline void toggle_OSC_24M_CTRL_OSC_24M_GATE() volatile
    {
        OSC_24M_CTRL ^= 1u << 7u;
    }

    /**
     * Get OSC_24M_CTRL's OSC_EN bit.
     *
     * 24MHz OSC Enable
     */
    inline bool get_OSC_24M_CTRL_OSC_EN() volatile
    {
        return OSC_24M_CTRL & (1u << 4u);
    }

    /**
     * Set OSC_24M_CTRL's OSC_EN bit.
     *
     * 24MHz OSC Enable
     */
    inline void set_OSC_24M_CTRL_OSC_EN() volatile
    {
        OSC_24M_CTRL |= 1u << 4u;
    }

    /**
     * Clear OSC_24M_CTRL's OSC_EN bit.
     *
     * 24MHz OSC Enable
     */
    inline void clear_OSC_24M_CTRL_OSC_EN() volatile
    {
        OSC_24M_CTRL &= ~(1u << 4u);
    }

    /**
     * Toggle OSC_24M_CTRL's OSC_EN bit.
     *
     * 24MHz OSC Enable
     */
    inline void toggle_OSC_24M_CTRL_OSC_EN() volatile
    {
        OSC_24M_CTRL ^= 1u << 4u;
    }

    /**
     * Get OSC_24M_CTRL's OSC_COMP_MODE bit.
     *
     * 24MHz OSC Comparator Mode
     */
    inline bool get_OSC_24M_CTRL_OSC_COMP_MODE() volatile
    {
        return OSC_24M_CTRL & (1u << 3u);
    }

    /**
     * Set OSC_24M_CTRL's OSC_COMP_MODE bit.
     *
     * 24MHz OSC Comparator Mode
     */
    inline void set_OSC_24M_CTRL_OSC_COMP_MODE() volatile
    {
        OSC_24M_CTRL |= 1u << 3u;
    }

    /**
     * Clear OSC_24M_CTRL's OSC_COMP_MODE bit.
     *
     * 24MHz OSC Comparator Mode
     */
    inline void clear_OSC_24M_CTRL_OSC_COMP_MODE() volatile
    {
        OSC_24M_CTRL &= ~(1u << 3u);
    }

    /**
     * Toggle OSC_24M_CTRL's OSC_COMP_MODE bit.
     *
     * 24MHz OSC Comparator Mode
     */
    inline void toggle_OSC_24M_CTRL_OSC_COMP_MODE() volatile
    {
        OSC_24M_CTRL ^= 1u << 3u;
    }

    /**
     * Get OSC_24M_CTRL's LP_EN bit.
     *
     * 24MHz OSC Low-Power Mode Enable
     */
    inline bool get_OSC_24M_CTRL_LP_EN() volatile
    {
        return OSC_24M_CTRL & (1u << 2u);
    }

    /**
     * Set OSC_24M_CTRL's LP_EN bit.
     *
     * 24MHz OSC Low-Power Mode Enable
     */
    inline void set_OSC_24M_CTRL_LP_EN() volatile
    {
        OSC_24M_CTRL |= 1u << 2u;
    }

    /**
     * Clear OSC_24M_CTRL's LP_EN bit.
     *
     * 24MHz OSC Low-Power Mode Enable
     */
    inline void clear_OSC_24M_CTRL_LP_EN() volatile
    {
        OSC_24M_CTRL &= ~(1u << 2u);
    }

    /**
     * Toggle OSC_24M_CTRL's LP_EN bit.
     *
     * 24MHz OSC Low-Power Mode Enable
     */
    inline void toggle_OSC_24M_CTRL_LP_EN() volatile
    {
        OSC_24M_CTRL ^= 1u << 2u;
    }

    /**
     * Get OSC_24M_CTRL's BYPASS_EN bit.
     *
     * 24MHz OSC Bypass Enable
     */
    inline bool get_OSC_24M_CTRL_BYPASS_EN() volatile
    {
        return OSC_24M_CTRL & (1u << 1u);
    }

    /**
     * Set OSC_24M_CTRL's BYPASS_EN bit.
     *
     * 24MHz OSC Bypass Enable
     */
    inline void set_OSC_24M_CTRL_BYPASS_EN() volatile
    {
        OSC_24M_CTRL |= 1u << 1u;
    }

    /**
     * Clear OSC_24M_CTRL's BYPASS_EN bit.
     *
     * 24MHz OSC Bypass Enable
     */
    inline void clear_OSC_24M_CTRL_BYPASS_EN() volatile
    {
        OSC_24M_CTRL &= ~(1u << 1u);
    }

    /**
     * Toggle OSC_24M_CTRL's BYPASS_EN bit.
     *
     * 24MHz OSC Bypass Enable
     */
    inline void toggle_OSC_24M_CTRL_BYPASS_EN() volatile
    {
        OSC_24M_CTRL ^= 1u << 1u;
    }

    /**
     * Get OSC_24M_CTRL's BYPASS_CLK bit.
     *
     * 24MHz OSC Bypass Clock
     */
    inline bool get_OSC_24M_CTRL_BYPASS_CLK() volatile
    {
        return OSC_24M_CTRL & (1u << 0u);
    }

    /**
     * Set OSC_24M_CTRL's BYPASS_CLK bit.
     *
     * 24MHz OSC Bypass Clock
     */
    inline void set_OSC_24M_CTRL_BYPASS_CLK() volatile
    {
        OSC_24M_CTRL |= 1u << 0u;
    }

    /**
     * Clear OSC_24M_CTRL's BYPASS_CLK bit.
     *
     * 24MHz OSC Bypass Clock
     */
    inline void clear_OSC_24M_CTRL_BYPASS_CLK() volatile
    {
        OSC_24M_CTRL &= ~(1u << 0u);
    }

    /**
     * Toggle OSC_24M_CTRL's BYPASS_CLK bit.
     *
     * 24MHz OSC Bypass Clock
     */
    inline void toggle_OSC_24M_CTRL_BYPASS_CLK() volatile
    {
        OSC_24M_CTRL ^= 1u << 0u;
    }

    /**
     * Get all of OSC_24M_CTRL's bit fields.
     *
     * (read-write) 24MHz OSC Control Register
     */
    inline void get_OSC_24M_CTRL(bool &OSC_24M_CONTROL_MODE,
                                 bool &OSC_24M_STABLE, bool &OSC_24M_GATE,
                                 bool &OSC_EN, bool &OSC_COMP_MODE,
                                 bool &LP_EN, bool &BYPASS_EN,
                                 bool &BYPASS_CLK) volatile
    {
        uint32_t curr = OSC_24M_CTRL;

        OSC_24M_CONTROL_MODE = curr & (1u << 31u);
        OSC_24M_STABLE = curr & (1u << 30u);
        OSC_24M_GATE = curr & (1u << 7u);
        OSC_EN = curr & (1u << 4u);
        OSC_COMP_MODE = curr & (1u << 3u);
        LP_EN = curr & (1u << 2u);
        BYPASS_EN = curr & (1u << 1u);
        BYPASS_CLK = curr & (1u << 0u);
    }

    /**
     * Set all of OSC_24M_CTRL's bit fields.
     *
     * (read-write) 24MHz OSC Control Register
     */
    inline void set_OSC_24M_CTRL(bool OSC_24M_CONTROL_MODE, bool OSC_24M_GATE,
                                 bool OSC_EN, bool OSC_COMP_MODE, bool LP_EN,
                                 bool BYPASS_EN, bool BYPASS_CLK) volatile
    {
        uint32_t curr = OSC_24M_CTRL;

        curr &= ~(0b1u << 31u);
        curr |= (OSC_24M_CONTROL_MODE & 0b1u) << 31u;
        curr &= ~(0b1u << 7u);
        curr |= (OSC_24M_GATE & 0b1u) << 7u;
        curr &= ~(0b1u << 4u);
        curr |= (OSC_EN & 0b1u) << 4u;
        curr &= ~(0b1u << 3u);
        curr |= (OSC_COMP_MODE & 0b1u) << 3u;
        curr &= ~(0b1u << 2u);
        curr |= (LP_EN & 0b1u) << 2u;
        curr &= ~(0b1u << 1u);
        curr |= (BYPASS_EN & 0b1u) << 1u;
        curr &= ~(0b1u << 0u);
        curr |= (BYPASS_CLK & 0b1u) << 0u;

        OSC_24M_CTRL = curr;
    }

    /**
     * Get OSC_400M_CTRL0's OSC400M_AI_BUSY bit.
     *
     * 400MHz OSC AI BUSY
     */
    inline bool get_OSC_400M_CTRL0_OSC400M_AI_BUSY() volatile
    {
        return OSC_400M_CTRL0 & (1u << 31u);
    }

    /**
     * Get OSC_400M_CTRL1's RC_400M_CONTROL_MODE bit.
     *
     * 400MHz RCOSC Control mode
     */
    inline bool get_OSC_400M_CTRL1_RC_400M_CONTROL_MODE() volatile
    {
        return OSC_400M_CTRL1 & (1u << 31u);
    }

    /**
     * Set OSC_400M_CTRL1's RC_400M_CONTROL_MODE bit.
     *
     * 400MHz RCOSC Control mode
     */
    inline void set_OSC_400M_CTRL1_RC_400M_CONTROL_MODE() volatile
    {
        OSC_400M_CTRL1 |= 1u << 31u;
    }

    /**
     * Clear OSC_400M_CTRL1's RC_400M_CONTROL_MODE bit.
     *
     * 400MHz RCOSC Control mode
     */
    inline void clear_OSC_400M_CTRL1_RC_400M_CONTROL_MODE() volatile
    {
        OSC_400M_CTRL1 &= ~(1u << 31u);
    }

    /**
     * Toggle OSC_400M_CTRL1's RC_400M_CONTROL_MODE bit.
     *
     * 400MHz RCOSC Control mode
     */
    inline void toggle_OSC_400M_CTRL1_RC_400M_CONTROL_MODE() volatile
    {
        OSC_400M_CTRL1 ^= 1u << 31u;
    }

    /**
     * Get OSC_400M_CTRL1's CLKGATE_400MEG bit.
     *
     * Clock gate control for 400MHz RCOSC
     */
    inline bool get_OSC_400M_CTRL1_CLKGATE_400MEG() volatile
    {
        return OSC_400M_CTRL1 & (1u << 1u);
    }

    /**
     * Set OSC_400M_CTRL1's CLKGATE_400MEG bit.
     *
     * Clock gate control for 400MHz RCOSC
     */
    inline void set_OSC_400M_CTRL1_CLKGATE_400MEG() volatile
    {
        OSC_400M_CTRL1 |= 1u << 1u;
    }

    /**
     * Clear OSC_400M_CTRL1's CLKGATE_400MEG bit.
     *
     * Clock gate control for 400MHz RCOSC
     */
    inline void clear_OSC_400M_CTRL1_CLKGATE_400MEG() volatile
    {
        OSC_400M_CTRL1 &= ~(1u << 1u);
    }

    /**
     * Toggle OSC_400M_CTRL1's CLKGATE_400MEG bit.
     *
     * Clock gate control for 400MHz RCOSC
     */
    inline void toggle_OSC_400M_CTRL1_CLKGATE_400MEG() volatile
    {
        OSC_400M_CTRL1 ^= 1u << 1u;
    }

    /**
     * Get OSC_400M_CTRL1's PWD bit.
     *
     * Power down control for 400MHz RCOSC
     */
    inline bool get_OSC_400M_CTRL1_PWD() volatile
    {
        return OSC_400M_CTRL1 & (1u << 0u);
    }

    /**
     * Set OSC_400M_CTRL1's PWD bit.
     *
     * Power down control for 400MHz RCOSC
     */
    inline void set_OSC_400M_CTRL1_PWD() volatile
    {
        OSC_400M_CTRL1 |= 1u << 0u;
    }

    /**
     * Clear OSC_400M_CTRL1's PWD bit.
     *
     * Power down control for 400MHz RCOSC
     */
    inline void clear_OSC_400M_CTRL1_PWD() volatile
    {
        OSC_400M_CTRL1 &= ~(1u << 0u);
    }

    /**
     * Toggle OSC_400M_CTRL1's PWD bit.
     *
     * Power down control for 400MHz RCOSC
     */
    inline void toggle_OSC_400M_CTRL1_PWD() volatile
    {
        OSC_400M_CTRL1 ^= 1u << 0u;
    }

    /**
     * Get all of OSC_400M_CTRL1's bit fields.
     *
     * (read-write) 400MHz RCOSC Control1 Register
     */
    inline void get_OSC_400M_CTRL1(bool &RC_400M_CONTROL_MODE,
                                   bool &CLKGATE_400MEG, bool &PWD) volatile
    {
        uint32_t curr = OSC_400M_CTRL1;

        RC_400M_CONTROL_MODE = curr & (1u << 31u);
        CLKGATE_400MEG = curr & (1u << 1u);
        PWD = curr & (1u << 0u);
    }

    /**
     * Set all of OSC_400M_CTRL1's bit fields.
     *
     * (read-write) 400MHz RCOSC Control1 Register
     */
    inline void set_OSC_400M_CTRL1(bool RC_400M_CONTROL_MODE,
                                   bool CLKGATE_400MEG, bool PWD) volatile
    {
        uint32_t curr = OSC_400M_CTRL1;

        curr &= ~(0b1u << 31u);
        curr |= (RC_400M_CONTROL_MODE & 0b1u) << 31u;
        curr &= ~(0b1u << 1u);
        curr |= (CLKGATE_400MEG & 0b1u) << 1u;
        curr &= ~(0b1u << 0u);
        curr |= (PWD & 0b1u) << 0u;

        OSC_400M_CTRL1 = curr;
    }

    /**
     * Get OSC_400M_CTRL2's OSC_TUNE_VAL field.
     *
     * Oscillator Tune Value
     */
    inline uint8_t get_OSC_400M_CTRL2_OSC_TUNE_VAL() volatile
    {
        return (OSC_400M_CTRL2 >> 24u) & 0b11111111u;
    }

    /**
     * Set OSC_400M_CTRL2's OSC_TUNE_VAL field.
     *
     * Oscillator Tune Value
     */
    inline void set_OSC_400M_CTRL2_OSC_TUNE_VAL(uint8_t value) volatile
    {
        uint32_t curr = OSC_400M_CTRL2;

        curr &= ~(0b11111111u << 24u);
        curr |= (value & 0b11111111u) << 24u;

        OSC_400M_CTRL2 = curr;
    }

    /**
     * Get OSC_400M_CTRL2's TUNE_BYP bit.
     *
     * Bypass tuning logic
     */
    inline bool get_OSC_400M_CTRL2_TUNE_BYP() volatile
    {
        return OSC_400M_CTRL2 & (1u << 10u);
    }

    /**
     * Set OSC_400M_CTRL2's TUNE_BYP bit.
     *
     * Bypass tuning logic
     */
    inline void set_OSC_400M_CTRL2_TUNE_BYP() volatile
    {
        OSC_400M_CTRL2 |= 1u << 10u;
    }

    /**
     * Clear OSC_400M_CTRL2's TUNE_BYP bit.
     *
     * Bypass tuning logic
     */
    inline void clear_OSC_400M_CTRL2_TUNE_BYP() volatile
    {
        OSC_400M_CTRL2 &= ~(1u << 10u);
    }

    /**
     * Toggle OSC_400M_CTRL2's TUNE_BYP bit.
     *
     * Bypass tuning logic
     */
    inline void toggle_OSC_400M_CTRL2_TUNE_BYP() volatile
    {
        OSC_400M_CTRL2 ^= 1u << 10u;
    }

    /**
     * Get OSC_400M_CTRL2's ENABLE_CLK bit.
     *
     * Clock enable
     */
    inline bool get_OSC_400M_CTRL2_ENABLE_CLK() volatile
    {
        return OSC_400M_CTRL2 & (1u << 0u);
    }

    /**
     * Set OSC_400M_CTRL2's ENABLE_CLK bit.
     *
     * Clock enable
     */
    inline void set_OSC_400M_CTRL2_ENABLE_CLK() volatile
    {
        OSC_400M_CTRL2 |= 1u << 0u;
    }

    /**
     * Clear OSC_400M_CTRL2's ENABLE_CLK bit.
     *
     * Clock enable
     */
    inline void clear_OSC_400M_CTRL2_ENABLE_CLK() volatile
    {
        OSC_400M_CTRL2 &= ~(1u << 0u);
    }

    /**
     * Toggle OSC_400M_CTRL2's ENABLE_CLK bit.
     *
     * Clock enable
     */
    inline void toggle_OSC_400M_CTRL2_ENABLE_CLK() volatile
    {
        OSC_400M_CTRL2 ^= 1u << 0u;
    }

    /**
     * Get all of OSC_400M_CTRL2's bit fields.
     *
     * (read-write) 400MHz RCOSC Control2 Register
     */
    inline void get_OSC_400M_CTRL2(uint8_t &OSC_TUNE_VAL, bool &TUNE_BYP,
                                   bool &ENABLE_CLK) volatile
    {
        uint32_t curr = OSC_400M_CTRL2;

        OSC_TUNE_VAL = (curr >> 24u) & 0b11111111u;
        TUNE_BYP = curr & (1u << 10u);
        ENABLE_CLK = curr & (1u << 0u);
    }

    /**
     * Set all of OSC_400M_CTRL2's bit fields.
     *
     * (read-write) 400MHz RCOSC Control2 Register
     */
    inline void set_OSC_400M_CTRL2(uint8_t OSC_TUNE_VAL, bool TUNE_BYP,
                                   bool ENABLE_CLK) volatile
    {
        uint32_t curr = OSC_400M_CTRL2;

        curr &= ~(0b11111111u << 24u);
        curr |= (OSC_TUNE_VAL & 0b11111111u) << 24u;
        curr &= ~(0b1u << 10u);
        curr |= (TUNE_BYP & 0b1u) << 10u;
        curr &= ~(0b1u << 0u);
        curr |= (ENABLE_CLK & 0b1u) << 0u;

        OSC_400M_CTRL2 = curr;
    }

    /**
     * Get OSC_16M_CTRL's RC_16M_CONTROL_MODE bit.
     *
     * Control Mode for 16MHz Oscillator
     */
    inline bool get_OSC_16M_CTRL_RC_16M_CONTROL_MODE() volatile
    {
        return OSC_16M_CTRL & (1u << 31u);
    }

    /**
     * Set OSC_16M_CTRL's RC_16M_CONTROL_MODE bit.
     *
     * Control Mode for 16MHz Oscillator
     */
    inline void set_OSC_16M_CTRL_RC_16M_CONTROL_MODE() volatile
    {
        OSC_16M_CTRL |= 1u << 31u;
    }

    /**
     * Clear OSC_16M_CTRL's RC_16M_CONTROL_MODE bit.
     *
     * Control Mode for 16MHz Oscillator
     */
    inline void clear_OSC_16M_CTRL_RC_16M_CONTROL_MODE() volatile
    {
        OSC_16M_CTRL &= ~(1u << 31u);
    }

    /**
     * Toggle OSC_16M_CTRL's RC_16M_CONTROL_MODE bit.
     *
     * Control Mode for 16MHz Oscillator
     */
    inline void toggle_OSC_16M_CTRL_RC_16M_CONTROL_MODE() volatile
    {
        OSC_16M_CTRL ^= 1u << 31u;
    }

    /**
     * Get OSC_16M_CTRL's SOURCE_SEL_16M bit.
     *
     * Source select
     */
    inline bool get_OSC_16M_CTRL_SOURCE_SEL_16M() volatile
    {
        return OSC_16M_CTRL & (1u << 8u);
    }

    /**
     * Set OSC_16M_CTRL's SOURCE_SEL_16M bit.
     *
     * Source select
     */
    inline void set_OSC_16M_CTRL_SOURCE_SEL_16M() volatile
    {
        OSC_16M_CTRL |= 1u << 8u;
    }

    /**
     * Clear OSC_16M_CTRL's SOURCE_SEL_16M bit.
     *
     * Source select
     */
    inline void clear_OSC_16M_CTRL_SOURCE_SEL_16M() volatile
    {
        OSC_16M_CTRL &= ~(1u << 8u);
    }

    /**
     * Toggle OSC_16M_CTRL's SOURCE_SEL_16M bit.
     *
     * Source select
     */
    inline void toggle_OSC_16M_CTRL_SOURCE_SEL_16M() volatile
    {
        OSC_16M_CTRL ^= 1u << 8u;
    }

    /**
     * Get OSC_16M_CTRL's EN_POWER_SAVE bit.
     *
     * Power Save Enable
     */
    inline bool get_OSC_16M_CTRL_EN_POWER_SAVE() volatile
    {
        return OSC_16M_CTRL & (1u << 3u);
    }

    /**
     * Set OSC_16M_CTRL's EN_POWER_SAVE bit.
     *
     * Power Save Enable
     */
    inline void set_OSC_16M_CTRL_EN_POWER_SAVE() volatile
    {
        OSC_16M_CTRL |= 1u << 3u;
    }

    /**
     * Clear OSC_16M_CTRL's EN_POWER_SAVE bit.
     *
     * Power Save Enable
     */
    inline void clear_OSC_16M_CTRL_EN_POWER_SAVE() volatile
    {
        OSC_16M_CTRL &= ~(1u << 3u);
    }

    /**
     * Toggle OSC_16M_CTRL's EN_POWER_SAVE bit.
     *
     * Power Save Enable
     */
    inline void toggle_OSC_16M_CTRL_EN_POWER_SAVE() volatile
    {
        OSC_16M_CTRL ^= 1u << 3u;
    }

    /**
     * Get OSC_16M_CTRL's EN_IRC4M16M bit.
     *
     * Enable Clock Output
     */
    inline bool get_OSC_16M_CTRL_EN_IRC4M16M() volatile
    {
        return OSC_16M_CTRL & (1u << 1u);
    }

    /**
     * Set OSC_16M_CTRL's EN_IRC4M16M bit.
     *
     * Enable Clock Output
     */
    inline void set_OSC_16M_CTRL_EN_IRC4M16M() volatile
    {
        OSC_16M_CTRL |= 1u << 1u;
    }

    /**
     * Clear OSC_16M_CTRL's EN_IRC4M16M bit.
     *
     * Enable Clock Output
     */
    inline void clear_OSC_16M_CTRL_EN_IRC4M16M() volatile
    {
        OSC_16M_CTRL &= ~(1u << 1u);
    }

    /**
     * Toggle OSC_16M_CTRL's EN_IRC4M16M bit.
     *
     * Enable Clock Output
     */
    inline void toggle_OSC_16M_CTRL_EN_IRC4M16M() volatile
    {
        OSC_16M_CTRL ^= 1u << 1u;
    }

    /**
     * Get all of OSC_16M_CTRL's bit fields.
     *
     * (read-write) 16MHz RCOSC Control Register
     */
    inline void get_OSC_16M_CTRL(bool &RC_16M_CONTROL_MODE,
                                 bool &SOURCE_SEL_16M, bool &EN_POWER_SAVE,
                                 bool &EN_IRC4M16M) volatile
    {
        uint32_t curr = OSC_16M_CTRL;

        RC_16M_CONTROL_MODE = curr & (1u << 31u);
        SOURCE_SEL_16M = curr & (1u << 8u);
        EN_POWER_SAVE = curr & (1u << 3u);
        EN_IRC4M16M = curr & (1u << 1u);
    }

    /**
     * Set all of OSC_16M_CTRL's bit fields.
     *
     * (read-write) 16MHz RCOSC Control Register
     */
    inline void set_OSC_16M_CTRL(bool RC_16M_CONTROL_MODE, bool SOURCE_SEL_16M,
                                 bool EN_POWER_SAVE, bool EN_IRC4M16M) volatile
    {
        uint32_t curr = OSC_16M_CTRL;

        curr &= ~(0b1u << 31u);
        curr |= (RC_16M_CONTROL_MODE & 0b1u) << 31u;
        curr &= ~(0b1u << 8u);
        curr |= (SOURCE_SEL_16M & 0b1u) << 8u;
        curr &= ~(0b1u << 3u);
        curr |= (EN_POWER_SAVE & 0b1u) << 3u;
        curr &= ~(0b1u << 1u);
        curr |= (EN_IRC4M16M & 0b1u) << 1u;

        OSC_16M_CTRL = curr;
    }
};

static_assert(sizeof(anadig_osc) == anadig_osc::size);

static volatile anadig_osc *const ANADIG_OSC =
    reinterpret_cast<anadig_osc *>(0x40C84000);

}; // namespace MIMXRT1176::CM7
