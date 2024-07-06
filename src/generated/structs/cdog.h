/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include "../enums/CDOG_CONTROL_ADDRESS_CTRL.h"
#include "../enums/CDOG_CONTROL_CONTROL_CTRL.h"
#include "../enums/CDOG_CONTROL_DEBUG_HALT_CTRL.h"
#include "../enums/CDOG_CONTROL_IRQ_PAUSE.h"
#include "../enums/CDOG_CONTROL_LOCK_CTRL.h"
#include "../enums/CDOG_CONTROL_MISCOMPARE_CTRL.h"
#include "../enums/CDOG_CONTROL_SEQUENCE_CTRL.h"
#include "../enums/CDOG_CONTROL_STATE_CTRL.h"
#include "../enums/CDOG_CONTROL_TIMEOUT_CTRL.h"
#include "../ifgen/common.h"

namespace MIMXRT1176::CM7
{

/**
 * CDOG
 */
struct [[gnu::packed]] cdog
{
    /* Constant attributes. */
    static constexpr std::size_t size = 76; /*!< cdog's size in bytes. */

    /* Fields. */
    uint32_t CONTROL;           /*!< (read-write) Control */
    uint32_t RELOAD;            /*!< (read-write) Instruction Timer reload */
    uint32_t INSTRUCTION_TIMER; /*!< (read-write) Instruction Timer */
    uint32_t SECURE_COUNTER;    /*!< (read-write) Secure Counter */
    uint32_t STATUS;            /*!< (read-write) Status 1 */
    uint32_t STATUS2;           /*!< (read-write) Status 2 */
    uint32_t FLAGS;             /*!< (read-write) Flags */
    uint32_t PERSISTENT;        /*!< (read-write) Persistent Data Storage */
    uint32_t START;             /*!< (read-write) START Command */
    uint32_t STOP;              /*!< (read-write) STOP Command */
    uint32_t RESTART;           /*!< (read-write) RESTART Command */
    uint32_t ADD;               /*!< (read-write) ADD Command */
    uint32_t ADD1;              /*!< (read-write) ADD1 Command */
    uint32_t ADD16;             /*!< (read-write) ADD16 Command */
    uint32_t ADD256;            /*!< (read-write) ADD256 Command */
    uint32_t SUB;               /*!< (read-write) SUB Command */
    uint32_t SUB1;              /*!< (read-write) SUB1 Command */
    uint32_t SUB16;             /*!< (read-write) SUB16 Command */
    uint32_t SUB256;            /*!< (read-write) SUB256 Command */

    /* Methods. */

    /**
     * Get CONTROL's DEBUG_HALT_CTRL field.
     *
     * DEBUG_HALT control
     */
    inline CDOG_CONTROL_DEBUG_HALT_CTRL get_CONTROL_DEBUG_HALT_CTRL() volatile
    {
        return CDOG_CONTROL_DEBUG_HALT_CTRL((CONTROL >> 30u) & 0b11u);
    }

    /**
     * Set CONTROL's DEBUG_HALT_CTRL field.
     *
     * DEBUG_HALT control
     */
    inline void set_CONTROL_DEBUG_HALT_CTRL(
        CDOG_CONTROL_DEBUG_HALT_CTRL value) volatile
    {
        uint32_t curr = CONTROL;

        curr &= ~(0b11u << 30u);
        curr |= (std::to_underlying(value) & 0b11u) << 30u;

        CONTROL = curr;
    }

    /**
     * Get CONTROL's IRQ_PAUSE field.
     *
     * IRQ pause control
     */
    inline CDOG_CONTROL_IRQ_PAUSE get_CONTROL_IRQ_PAUSE() volatile
    {
        return CDOG_CONTROL_IRQ_PAUSE((CONTROL >> 28u) & 0b11u);
    }

    /**
     * Set CONTROL's IRQ_PAUSE field.
     *
     * IRQ pause control
     */
    inline void set_CONTROL_IRQ_PAUSE(CDOG_CONTROL_IRQ_PAUSE value) volatile
    {
        uint32_t curr = CONTROL;

        curr &= ~(0b11u << 28u);
        curr |= (std::to_underlying(value) & 0b11u) << 28u;

        CONTROL = curr;
    }

    /**
     * Get CONTROL's ADDRESS_CTRL field.
     *
     * ADDRESS fault control
     */
    inline CDOG_CONTROL_ADDRESS_CTRL get_CONTROL_ADDRESS_CTRL() volatile
    {
        return CDOG_CONTROL_ADDRESS_CTRL((CONTROL >> 17u) & 0b111u);
    }

    /**
     * Set CONTROL's ADDRESS_CTRL field.
     *
     * ADDRESS fault control
     */
    inline void set_CONTROL_ADDRESS_CTRL(
        CDOG_CONTROL_ADDRESS_CTRL value) volatile
    {
        uint32_t curr = CONTROL;

        curr &= ~(0b111u << 17u);
        curr |= (std::to_underlying(value) & 0b111u) << 17u;

        CONTROL = curr;
    }

    /**
     * Get CONTROL's STATE_CTRL field.
     *
     * STATE fault control
     */
    inline CDOG_CONTROL_STATE_CTRL get_CONTROL_STATE_CTRL() volatile
    {
        return CDOG_CONTROL_STATE_CTRL((CONTROL >> 14u) & 0b111u);
    }

    /**
     * Set CONTROL's STATE_CTRL field.
     *
     * STATE fault control
     */
    inline void set_CONTROL_STATE_CTRL(CDOG_CONTROL_STATE_CTRL value) volatile
    {
        uint32_t curr = CONTROL;

        curr &= ~(0b111u << 14u);
        curr |= (std::to_underlying(value) & 0b111u) << 14u;

        CONTROL = curr;
    }

    /**
     * Get CONTROL's CONTROL_CTRL field.
     *
     * CONTROL fault control
     */
    inline CDOG_CONTROL_CONTROL_CTRL get_CONTROL_CONTROL_CTRL() volatile
    {
        return CDOG_CONTROL_CONTROL_CTRL((CONTROL >> 11u) & 0b111u);
    }

    /**
     * Set CONTROL's CONTROL_CTRL field.
     *
     * CONTROL fault control
     */
    inline void set_CONTROL_CONTROL_CTRL(
        CDOG_CONTROL_CONTROL_CTRL value) volatile
    {
        uint32_t curr = CONTROL;

        curr &= ~(0b111u << 11u);
        curr |= (std::to_underlying(value) & 0b111u) << 11u;

        CONTROL = curr;
    }

    /**
     * Get CONTROL's SEQUENCE_CTRL field.
     *
     * SEQUENCE fault control
     */
    inline CDOG_CONTROL_SEQUENCE_CTRL get_CONTROL_SEQUENCE_CTRL() volatile
    {
        return CDOG_CONTROL_SEQUENCE_CTRL((CONTROL >> 8u) & 0b111u);
    }

    /**
     * Set CONTROL's SEQUENCE_CTRL field.
     *
     * SEQUENCE fault control
     */
    inline void set_CONTROL_SEQUENCE_CTRL(
        CDOG_CONTROL_SEQUENCE_CTRL value) volatile
    {
        uint32_t curr = CONTROL;

        curr &= ~(0b111u << 8u);
        curr |= (std::to_underlying(value) & 0b111u) << 8u;

        CONTROL = curr;
    }

    /**
     * Get CONTROL's MISCOMPARE_CTRL field.
     *
     * MISCOMPARE fault control
     */
    inline CDOG_CONTROL_MISCOMPARE_CTRL get_CONTROL_MISCOMPARE_CTRL() volatile
    {
        return CDOG_CONTROL_MISCOMPARE_CTRL((CONTROL >> 5u) & 0b111u);
    }

    /**
     * Set CONTROL's MISCOMPARE_CTRL field.
     *
     * MISCOMPARE fault control
     */
    inline void set_CONTROL_MISCOMPARE_CTRL(
        CDOG_CONTROL_MISCOMPARE_CTRL value) volatile
    {
        uint32_t curr = CONTROL;

        curr &= ~(0b111u << 5u);
        curr |= (std::to_underlying(value) & 0b111u) << 5u;

        CONTROL = curr;
    }

    /**
     * Get CONTROL's TIMEOUT_CTRL field.
     *
     * TIMEOUT fault control
     */
    inline CDOG_CONTROL_TIMEOUT_CTRL get_CONTROL_TIMEOUT_CTRL() volatile
    {
        return CDOG_CONTROL_TIMEOUT_CTRL((CONTROL >> 2u) & 0b111u);
    }

    /**
     * Set CONTROL's TIMEOUT_CTRL field.
     *
     * TIMEOUT fault control
     */
    inline void set_CONTROL_TIMEOUT_CTRL(
        CDOG_CONTROL_TIMEOUT_CTRL value) volatile
    {
        uint32_t curr = CONTROL;

        curr &= ~(0b111u << 2u);
        curr |= (std::to_underlying(value) & 0b111u) << 2u;

        CONTROL = curr;
    }

    /**
     * Get CONTROL's LOCK_CTRL field.
     *
     * Lock control
     */
    inline CDOG_CONTROL_LOCK_CTRL get_CONTROL_LOCK_CTRL() volatile
    {
        return CDOG_CONTROL_LOCK_CTRL((CONTROL >> 0u) & 0b11u);
    }

    /**
     * Set CONTROL's LOCK_CTRL field.
     *
     * Lock control
     */
    inline void set_CONTROL_LOCK_CTRL(CDOG_CONTROL_LOCK_CTRL value) volatile
    {
        uint32_t curr = CONTROL;

        curr &= ~(0b11u << 0u);
        curr |= (std::to_underlying(value) & 0b11u) << 0u;

        CONTROL = curr;
    }

    /**
     * Get all of CONTROL's bit fields.
     *
     * (read-write) Control
     */
    inline void get_CONTROL(CDOG_CONTROL_DEBUG_HALT_CTRL &DEBUG_HALT_CTRL,
                            CDOG_CONTROL_IRQ_PAUSE &IRQ_PAUSE,
                            CDOG_CONTROL_ADDRESS_CTRL &ADDRESS_CTRL,
                            CDOG_CONTROL_STATE_CTRL &STATE_CTRL,
                            CDOG_CONTROL_CONTROL_CTRL &CONTROL_CTRL,
                            CDOG_CONTROL_SEQUENCE_CTRL &SEQUENCE_CTRL,
                            CDOG_CONTROL_MISCOMPARE_CTRL &MISCOMPARE_CTRL,
                            CDOG_CONTROL_TIMEOUT_CTRL &TIMEOUT_CTRL,
                            CDOG_CONTROL_LOCK_CTRL &LOCK_CTRL) volatile
    {
        uint32_t curr = CONTROL;

        DEBUG_HALT_CTRL = CDOG_CONTROL_DEBUG_HALT_CTRL((curr >> 30u) & 0b11u);
        IRQ_PAUSE = CDOG_CONTROL_IRQ_PAUSE((curr >> 28u) & 0b11u);
        ADDRESS_CTRL = CDOG_CONTROL_ADDRESS_CTRL((curr >> 17u) & 0b111u);
        STATE_CTRL = CDOG_CONTROL_STATE_CTRL((curr >> 14u) & 0b111u);
        CONTROL_CTRL = CDOG_CONTROL_CONTROL_CTRL((curr >> 11u) & 0b111u);
        SEQUENCE_CTRL = CDOG_CONTROL_SEQUENCE_CTRL((curr >> 8u) & 0b111u);
        MISCOMPARE_CTRL = CDOG_CONTROL_MISCOMPARE_CTRL((curr >> 5u) & 0b111u);
        TIMEOUT_CTRL = CDOG_CONTROL_TIMEOUT_CTRL((curr >> 2u) & 0b111u);
        LOCK_CTRL = CDOG_CONTROL_LOCK_CTRL((curr >> 0u) & 0b11u);
    }

    /**
     * Set all of CONTROL's bit fields.
     *
     * (read-write) Control
     */
    inline void set_CONTROL(CDOG_CONTROL_DEBUG_HALT_CTRL DEBUG_HALT_CTRL,
                            CDOG_CONTROL_IRQ_PAUSE IRQ_PAUSE,
                            CDOG_CONTROL_ADDRESS_CTRL ADDRESS_CTRL,
                            CDOG_CONTROL_STATE_CTRL STATE_CTRL,
                            CDOG_CONTROL_CONTROL_CTRL CONTROL_CTRL,
                            CDOG_CONTROL_SEQUENCE_CTRL SEQUENCE_CTRL,
                            CDOG_CONTROL_MISCOMPARE_CTRL MISCOMPARE_CTRL,
                            CDOG_CONTROL_TIMEOUT_CTRL TIMEOUT_CTRL,
                            CDOG_CONTROL_LOCK_CTRL LOCK_CTRL) volatile
    {
        uint32_t curr = CONTROL;

        curr &= ~(0b11u << 30u);
        curr |= (std::to_underlying(DEBUG_HALT_CTRL) & 0b11u) << 30u;
        curr &= ~(0b11u << 28u);
        curr |= (std::to_underlying(IRQ_PAUSE) & 0b11u) << 28u;
        curr &= ~(0b111u << 17u);
        curr |= (std::to_underlying(ADDRESS_CTRL) & 0b111u) << 17u;
        curr &= ~(0b111u << 14u);
        curr |= (std::to_underlying(STATE_CTRL) & 0b111u) << 14u;
        curr &= ~(0b111u << 11u);
        curr |= (std::to_underlying(CONTROL_CTRL) & 0b111u) << 11u;
        curr &= ~(0b111u << 8u);
        curr |= (std::to_underlying(SEQUENCE_CTRL) & 0b111u) << 8u;
        curr &= ~(0b111u << 5u);
        curr |= (std::to_underlying(MISCOMPARE_CTRL) & 0b111u) << 5u;
        curr &= ~(0b111u << 2u);
        curr |= (std::to_underlying(TIMEOUT_CTRL) & 0b111u) << 2u;
        curr &= ~(0b11u << 0u);
        curr |= (std::to_underlying(LOCK_CTRL) & 0b11u) << 0u;

        CONTROL = curr;
    }

    /**
     * Get RELOAD's RLOAD field.
     *
     * Instruction Timer reload value
     */
    inline uint32_t get_RELOAD_RLOAD() volatile
    {
        return (RELOAD >> 0u) & 0b11111111111111111111111111111111u;
    }

    /**
     * Set RELOAD's RLOAD field.
     *
     * Instruction Timer reload value
     */
    inline void set_RELOAD_RLOAD(uint32_t value) volatile
    {
        uint32_t curr = RELOAD;

        curr &= ~(0b11111111111111111111111111111111u << 0u);
        curr |= (value & 0b11111111111111111111111111111111u) << 0u;

        RELOAD = curr;
    }

    /**
     * Get INSTRUCTION_TIMER's INSTIM field.
     *
     * Current value of the Instruction Timer
     */
    inline uint32_t get_INSTRUCTION_TIMER_INSTIM() volatile
    {
        return (INSTRUCTION_TIMER >> 0u) & 0b11111111111111111111111111111111u;
    }

    /**
     * Set INSTRUCTION_TIMER's INSTIM field.
     *
     * Current value of the Instruction Timer
     */
    inline void set_INSTRUCTION_TIMER_INSTIM(uint32_t value) volatile
    {
        uint32_t curr = INSTRUCTION_TIMER;

        curr &= ~(0b11111111111111111111111111111111u << 0u);
        curr |= (value & 0b11111111111111111111111111111111u) << 0u;

        INSTRUCTION_TIMER = curr;
    }

    /**
     * Set SECURE_COUNTER's SECCNT field.
     *
     * Secure Counter
     */
    inline void set_SECURE_COUNTER_SECCNT(uint32_t value) volatile
    {
        uint32_t curr = SECURE_COUNTER;

        curr &= ~(0b11111111111111111111111111111111u << 0u);
        curr |= (value & 0b11111111111111111111111111111111u) << 0u;

        SECURE_COUNTER = curr;
    }

    /**
     * Get STATUS's CURST field.
     *
     * Current State
     */
    inline uint8_t get_STATUS_CURST() volatile
    {
        return (STATUS >> 28u) & 0b1111u;
    }

    /**
     * Get STATUS's NUMILSEQF field.
     *
     * Number of SEQUENCE faults since the last POR
     */
    inline uint8_t get_STATUS_NUMILSEQF() volatile
    {
        return (STATUS >> 16u) & 0b11111111u;
    }

    /**
     * Get STATUS's NUMMISCOMPF field.
     *
     * Number of MISCOMPARE faults since the last POR
     */
    inline uint8_t get_STATUS_NUMMISCOMPF() volatile
    {
        return (STATUS >> 8u) & 0b11111111u;
    }

    /**
     * Get STATUS's NUMTOF field.
     *
     * Number of TIMEOUT faults since the last POR
     */
    inline uint8_t get_STATUS_NUMTOF() volatile
    {
        return (STATUS >> 0u) & 0b11111111u;
    }

    /**
     * Get all of STATUS's bit fields.
     *
     * (read-write) Status 1
     */
    inline void get_STATUS(uint8_t &CURST, uint8_t &NUMILSEQF,
                           uint8_t &NUMMISCOMPF, uint8_t &NUMTOF) volatile
    {
        uint32_t curr = STATUS;

        CURST = (curr >> 28u) & 0b1111u;
        NUMILSEQF = (curr >> 16u) & 0b11111111u;
        NUMMISCOMPF = (curr >> 8u) & 0b11111111u;
        NUMTOF = (curr >> 0u) & 0b11111111u;
    }

    /**
     * Get STATUS2's NUMILLA field.
     *
     * Number of ADDRESS faults since the last POR
     */
    inline uint8_t get_STATUS2_NUMILLA() volatile
    {
        return (STATUS2 >> 16u) & 0b11111111u;
    }

    /**
     * Get STATUS2's NUMILLSTF field.
     *
     * Number of STATE faults since the last POR
     */
    inline uint8_t get_STATUS2_NUMILLSTF() volatile
    {
        return (STATUS2 >> 8u) & 0b11111111u;
    }

    /**
     * Get STATUS2's NUMCNTF field.
     *
     * Number of CONTROL faults since the last POR
     */
    inline uint8_t get_STATUS2_NUMCNTF() volatile
    {
        return (STATUS2 >> 0u) & 0b11111111u;
    }

    /**
     * Get all of STATUS2's bit fields.
     *
     * (read-write) Status 2
     */
    inline void get_STATUS2(uint8_t &NUMILLA, uint8_t &NUMILLSTF,
                            uint8_t &NUMCNTF) volatile
    {
        uint32_t curr = STATUS2;

        NUMILLA = (curr >> 16u) & 0b11111111u;
        NUMILLSTF = (curr >> 8u) & 0b11111111u;
        NUMCNTF = (curr >> 0u) & 0b11111111u;
    }

    /**
     * Get FLAGS's POR_FLAG bit.
     *
     * Power-on reset flag
     */
    inline bool get_FLAGS_POR_FLAG() volatile
    {
        return FLAGS & (1u << 16u);
    }

    /**
     * Set FLAGS's POR_FLAG bit.
     *
     * Power-on reset flag
     */
    inline void set_FLAGS_POR_FLAG() volatile
    {
        FLAGS |= 1u << 16u;
    }

    /**
     * Clear FLAGS's POR_FLAG bit.
     *
     * Power-on reset flag
     */
    inline void clear_FLAGS_POR_FLAG() volatile
    {
        FLAGS &= ~(1u << 16u);
    }

    /**
     * Toggle FLAGS's POR_FLAG bit.
     *
     * Power-on reset flag
     */
    inline void toggle_FLAGS_POR_FLAG() volatile
    {
        FLAGS ^= 1u << 16u;
    }

    /**
     * Get FLAGS's ADDR_FLAG bit.
     *
     * ADDRESS fault flag
     */
    inline bool get_FLAGS_ADDR_FLAG() volatile
    {
        return FLAGS & (1u << 5u);
    }

    /**
     * Set FLAGS's ADDR_FLAG bit.
     *
     * ADDRESS fault flag
     */
    inline void set_FLAGS_ADDR_FLAG() volatile
    {
        FLAGS |= 1u << 5u;
    }

    /**
     * Clear FLAGS's ADDR_FLAG bit.
     *
     * ADDRESS fault flag
     */
    inline void clear_FLAGS_ADDR_FLAG() volatile
    {
        FLAGS &= ~(1u << 5u);
    }

    /**
     * Toggle FLAGS's ADDR_FLAG bit.
     *
     * ADDRESS fault flag
     */
    inline void toggle_FLAGS_ADDR_FLAG() volatile
    {
        FLAGS ^= 1u << 5u;
    }

    /**
     * Get FLAGS's STATE_FLAG bit.
     *
     * STATE fault flag
     */
    inline bool get_FLAGS_STATE_FLAG() volatile
    {
        return FLAGS & (1u << 4u);
    }

    /**
     * Set FLAGS's STATE_FLAG bit.
     *
     * STATE fault flag
     */
    inline void set_FLAGS_STATE_FLAG() volatile
    {
        FLAGS |= 1u << 4u;
    }

    /**
     * Clear FLAGS's STATE_FLAG bit.
     *
     * STATE fault flag
     */
    inline void clear_FLAGS_STATE_FLAG() volatile
    {
        FLAGS &= ~(1u << 4u);
    }

    /**
     * Toggle FLAGS's STATE_FLAG bit.
     *
     * STATE fault flag
     */
    inline void toggle_FLAGS_STATE_FLAG() volatile
    {
        FLAGS ^= 1u << 4u;
    }

    /**
     * Get FLAGS's CNT_FLAG bit.
     *
     * CONTROL fault flag
     */
    inline bool get_FLAGS_CNT_FLAG() volatile
    {
        return FLAGS & (1u << 3u);
    }

    /**
     * Set FLAGS's CNT_FLAG bit.
     *
     * CONTROL fault flag
     */
    inline void set_FLAGS_CNT_FLAG() volatile
    {
        FLAGS |= 1u << 3u;
    }

    /**
     * Clear FLAGS's CNT_FLAG bit.
     *
     * CONTROL fault flag
     */
    inline void clear_FLAGS_CNT_FLAG() volatile
    {
        FLAGS &= ~(1u << 3u);
    }

    /**
     * Toggle FLAGS's CNT_FLAG bit.
     *
     * CONTROL fault flag
     */
    inline void toggle_FLAGS_CNT_FLAG() volatile
    {
        FLAGS ^= 1u << 3u;
    }

    /**
     * Get FLAGS's SEQ_FLAG bit.
     *
     * SEQUENCE fault flag
     */
    inline bool get_FLAGS_SEQ_FLAG() volatile
    {
        return FLAGS & (1u << 2u);
    }

    /**
     * Set FLAGS's SEQ_FLAG bit.
     *
     * SEQUENCE fault flag
     */
    inline void set_FLAGS_SEQ_FLAG() volatile
    {
        FLAGS |= 1u << 2u;
    }

    /**
     * Clear FLAGS's SEQ_FLAG bit.
     *
     * SEQUENCE fault flag
     */
    inline void clear_FLAGS_SEQ_FLAG() volatile
    {
        FLAGS &= ~(1u << 2u);
    }

    /**
     * Toggle FLAGS's SEQ_FLAG bit.
     *
     * SEQUENCE fault flag
     */
    inline void toggle_FLAGS_SEQ_FLAG() volatile
    {
        FLAGS ^= 1u << 2u;
    }

    /**
     * Get FLAGS's MISCOM_FLAG bit.
     *
     * MISCOMPARE fault flag
     */
    inline bool get_FLAGS_MISCOM_FLAG() volatile
    {
        return FLAGS & (1u << 1u);
    }

    /**
     * Set FLAGS's MISCOM_FLAG bit.
     *
     * MISCOMPARE fault flag
     */
    inline void set_FLAGS_MISCOM_FLAG() volatile
    {
        FLAGS |= 1u << 1u;
    }

    /**
     * Clear FLAGS's MISCOM_FLAG bit.
     *
     * MISCOMPARE fault flag
     */
    inline void clear_FLAGS_MISCOM_FLAG() volatile
    {
        FLAGS &= ~(1u << 1u);
    }

    /**
     * Toggle FLAGS's MISCOM_FLAG bit.
     *
     * MISCOMPARE fault flag
     */
    inline void toggle_FLAGS_MISCOM_FLAG() volatile
    {
        FLAGS ^= 1u << 1u;
    }

    /**
     * Get FLAGS's TO_FLAG bit.
     *
     * TIMEOUT fault flag
     */
    inline bool get_FLAGS_TO_FLAG() volatile
    {
        return FLAGS & (1u << 0u);
    }

    /**
     * Set FLAGS's TO_FLAG bit.
     *
     * TIMEOUT fault flag
     */
    inline void set_FLAGS_TO_FLAG() volatile
    {
        FLAGS |= 1u << 0u;
    }

    /**
     * Clear FLAGS's TO_FLAG bit.
     *
     * TIMEOUT fault flag
     */
    inline void clear_FLAGS_TO_FLAG() volatile
    {
        FLAGS &= ~(1u << 0u);
    }

    /**
     * Toggle FLAGS's TO_FLAG bit.
     *
     * TIMEOUT fault flag
     */
    inline void toggle_FLAGS_TO_FLAG() volatile
    {
        FLAGS ^= 1u << 0u;
    }

    /**
     * Get all of FLAGS's bit fields.
     *
     * (read-write) Flags
     */
    inline void get_FLAGS(bool &POR_FLAG, bool &ADDR_FLAG, bool &STATE_FLAG,
                          bool &CNT_FLAG, bool &SEQ_FLAG, bool &MISCOM_FLAG,
                          bool &TO_FLAG) volatile
    {
        uint32_t curr = FLAGS;

        POR_FLAG = curr & (1u << 16u);
        ADDR_FLAG = curr & (1u << 5u);
        STATE_FLAG = curr & (1u << 4u);
        CNT_FLAG = curr & (1u << 3u);
        SEQ_FLAG = curr & (1u << 2u);
        MISCOM_FLAG = curr & (1u << 1u);
        TO_FLAG = curr & (1u << 0u);
    }

    /**
     * Set all of FLAGS's bit fields.
     *
     * (read-write) Flags
     */
    inline void set_FLAGS(bool POR_FLAG, bool ADDR_FLAG, bool STATE_FLAG,
                          bool CNT_FLAG, bool SEQ_FLAG, bool MISCOM_FLAG,
                          bool TO_FLAG) volatile
    {
        uint32_t curr = FLAGS;

        curr &= ~(0b1u << 16u);
        curr |= (POR_FLAG & 0b1u) << 16u;
        curr &= ~(0b1u << 5u);
        curr |= (ADDR_FLAG & 0b1u) << 5u;
        curr &= ~(0b1u << 4u);
        curr |= (STATE_FLAG & 0b1u) << 4u;
        curr &= ~(0b1u << 3u);
        curr |= (CNT_FLAG & 0b1u) << 3u;
        curr &= ~(0b1u << 2u);
        curr |= (SEQ_FLAG & 0b1u) << 2u;
        curr &= ~(0b1u << 1u);
        curr |= (MISCOM_FLAG & 0b1u) << 1u;
        curr &= ~(0b1u << 0u);
        curr |= (TO_FLAG & 0b1u) << 0u;

        FLAGS = curr;
    }

    /**
     * Get PERSISTENT's PERSIS field.
     *
     * Persistent Storage
     */
    inline uint32_t get_PERSISTENT_PERSIS() volatile
    {
        return (PERSISTENT >> 0u) & 0b11111111111111111111111111111111u;
    }

    /**
     * Set PERSISTENT's PERSIS field.
     *
     * Persistent Storage
     */
    inline void set_PERSISTENT_PERSIS(uint32_t value) volatile
    {
        uint32_t curr = PERSISTENT;

        curr &= ~(0b11111111111111111111111111111111u << 0u);
        curr |= (value & 0b11111111111111111111111111111111u) << 0u;

        PERSISTENT = curr;
    }

    /**
     * Set START's STRT field.
     *
     * Start command
     */
    inline void set_START_STRT(uint32_t value) volatile
    {
        uint32_t curr = START;

        curr &= ~(0b11111111111111111111111111111111u << 0u);
        curr |= (value & 0b11111111111111111111111111111111u) << 0u;

        START = curr;
    }

    /**
     * Set STOP's STP field.
     *
     * Stop command
     */
    inline void set_STOP_STP(uint32_t value) volatile
    {
        uint32_t curr = STOP;

        curr &= ~(0b11111111111111111111111111111111u << 0u);
        curr |= (value & 0b11111111111111111111111111111111u) << 0u;

        STOP = curr;
    }

    /**
     * Set RESTART's RSTRT field.
     *
     * Restart command
     */
    inline void set_RESTART_RSTRT(uint32_t value) volatile
    {
        uint32_t curr = RESTART;

        curr &= ~(0b11111111111111111111111111111111u << 0u);
        curr |= (value & 0b11111111111111111111111111111111u) << 0u;

        RESTART = curr;
    }

    /**
     * Set ADD's AD field.
     *
     * ADD Write Value
     */
    inline void set_ADD_AD(uint32_t value) volatile
    {
        uint32_t curr = ADD;

        curr &= ~(0b11111111111111111111111111111111u << 0u);
        curr |= (value & 0b11111111111111111111111111111111u) << 0u;

        ADD = curr;
    }

    /**
     * Set ADD1's AD1 field.
     *
     * ADD 1
     */
    inline void set_ADD1_AD1(uint32_t value) volatile
    {
        uint32_t curr = ADD1;

        curr &= ~(0b11111111111111111111111111111111u << 0u);
        curr |= (value & 0b11111111111111111111111111111111u) << 0u;

        ADD1 = curr;
    }

    /**
     * Set ADD16's AD16 field.
     *
     * ADD 16
     */
    inline void set_ADD16_AD16(uint32_t value) volatile
    {
        uint32_t curr = ADD16;

        curr &= ~(0b11111111111111111111111111111111u << 0u);
        curr |= (value & 0b11111111111111111111111111111111u) << 0u;

        ADD16 = curr;
    }

    /**
     * Set ADD256's AD256 field.
     *
     * ADD 256
     */
    inline void set_ADD256_AD256(uint32_t value) volatile
    {
        uint32_t curr = ADD256;

        curr &= ~(0b11111111111111111111111111111111u << 0u);
        curr |= (value & 0b11111111111111111111111111111111u) << 0u;

        ADD256 = curr;
    }

    /**
     * Set SUB's S0B field.
     *
     * Subtract Write Value
     */
    inline void set_SUB_S0B(uint32_t value) volatile
    {
        uint32_t curr = SUB;

        curr &= ~(0b11111111111111111111111111111111u << 0u);
        curr |= (value & 0b11111111111111111111111111111111u) << 0u;

        SUB = curr;
    }

    /**
     * Set SUB1's S1B field.
     *
     * Subtract 1
     */
    inline void set_SUB1_S1B(uint32_t value) volatile
    {
        uint32_t curr = SUB1;

        curr &= ~(0b11111111111111111111111111111111u << 0u);
        curr |= (value & 0b11111111111111111111111111111111u) << 0u;

        SUB1 = curr;
    }

    /**
     * Set SUB16's SB16 field.
     *
     * Subtract 16
     */
    inline void set_SUB16_SB16(uint32_t value) volatile
    {
        uint32_t curr = SUB16;

        curr &= ~(0b11111111111111111111111111111111u << 0u);
        curr |= (value & 0b11111111111111111111111111111111u) << 0u;

        SUB16 = curr;
    }

    /**
     * Set SUB256's SB256 field.
     *
     * Subtract 256
     */
    inline void set_SUB256_SB256(uint32_t value) volatile
    {
        uint32_t curr = SUB256;

        curr &= ~(0b11111111111111111111111111111111u << 0u);
        curr |= (value & 0b11111111111111111111111111111111u) << 0u;

        SUB256 = curr;
    }
};

static_assert(sizeof(cdog) == cdog::size);

static volatile cdog *const CDOG = reinterpret_cast<cdog *>(0x41900000);

}; // namespace MIMXRT1176::CM7