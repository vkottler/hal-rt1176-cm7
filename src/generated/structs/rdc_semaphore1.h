/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include "../enums/RDC_SEMAPHORE1_GATE_GTFSM.h"
#include "../enums/RDC_SEMAPHORE1_GATE_LDOM.h"
#include "../enums/RDC_SEMAPHORE1_RSTGT_R_RSTGSM.h"
#include "../ifgen/common.h"

namespace MIMXRT1176::CM7
{

/**
 * SEMA42
 */
struct [[gnu::packed]] rdc_semaphore1
{
    /* Constant attributes. */
    static constexpr std::size_t size =
        68; /*!< rdc_semaphore1's size in bytes. */

    /* Fields. */
    static constexpr std::size_t GATE_length = 64;
    uint8_t GATE[GATE_length]; /*!< (read-write) Gate Register */
    static constexpr std::size_t reserved_padding0_length = 2;
    const uint8_t reserved_padding0[reserved_padding0_length] = {};
    uint16_t RSTGT_R; /*!< (read-write) Reset Gate Read */

    /* Methods. */

    /**
     * Get GATE's LDOM field.
     *
     * Read-only bits. They indicate which domain had currently locked the
     * gate.
     */
    inline RDC_SEMAPHORE1_GATE_LDOM get_GATE_LDOM(std::size_t index) volatile
    {
        return RDC_SEMAPHORE1_GATE_LDOM((GATE[index] >> 4u) & 0b11u);
    }

    /**
     * Get GATE's GTFSM field.
     *
     * Gate Finite State Machine.
     */
    inline RDC_SEMAPHORE1_GATE_GTFSM get_GATE_GTFSM(std::size_t index) volatile
    {
        return RDC_SEMAPHORE1_GATE_GTFSM((GATE[index] >> 0u) & 0b1111u);
    }

    /**
     * Set GATE's GTFSM field.
     *
     * Gate Finite State Machine.
     */
    inline void set_GATE_GTFSM(std::size_t index,
                               RDC_SEMAPHORE1_GATE_GTFSM value) volatile
    {
        uint8_t curr = GATE[index];

        curr &= ~(0b1111u << 0u);
        curr |= (std::to_underlying(value) & 0b1111u) << 0u;

        GATE[index] = curr;
    }

    /**
     * Get all of GATE's bit fields.
     *
     * (read-write) Gate Register
     */
    inline void get_GATE(std::size_t index, RDC_SEMAPHORE1_GATE_LDOM &LDOM,
                         RDC_SEMAPHORE1_GATE_GTFSM &GTFSM) volatile
    {
        uint8_t curr = GATE[index];

        LDOM = RDC_SEMAPHORE1_GATE_LDOM((curr >> 4u) & 0b11u);
        GTFSM = RDC_SEMAPHORE1_GATE_GTFSM((curr >> 0u) & 0b1111u);
    }

    /**
     * Get RSTGT_R's RSTGTN field.
     *
     * Reset Gate Number
     */
    inline uint8_t get_RSTGT_R_RSTGTN() volatile
    {
        return (RSTGT_R >> 8u) & 0b11111111u;
    }

    /**
     * Set RSTGT_R's RSTGTN field.
     *
     * Reset Gate Number
     */
    inline void set_RSTGT_R_RSTGTN(uint8_t value) volatile
    {
        uint16_t curr = RSTGT_R;

        curr &= ~(0b11111111u << 8u);
        curr |= (value & 0b11111111u) << 8u;

        RSTGT_R = curr;
    }

    /**
     * Get RSTGT_R's RSTGSM field.
     *
     * Reset Gate Finite State Machine
     */
    inline RDC_SEMAPHORE1_RSTGT_R_RSTGSM get_RSTGT_R_RSTGSM() volatile
    {
        return RDC_SEMAPHORE1_RSTGT_R_RSTGSM((RSTGT_R >> 4u) & 0b11u);
    }

    /**
     * Get RSTGT_R's RSTGMS field.
     *
     * Reset Gate Bus Master
     */
    inline uint8_t get_RSTGT_R_RSTGMS() volatile
    {
        return (RSTGT_R >> 0u) & 0b1111u;
    }

    /**
     * Get all of RSTGT_R's bit fields.
     *
     * (read-write) Reset Gate Read
     */
    inline void get_RSTGT_R(uint8_t &RSTGTN,
                            RDC_SEMAPHORE1_RSTGT_R_RSTGSM &RSTGSM,
                            uint8_t &RSTGMS) volatile
    {
        uint16_t curr = RSTGT_R;

        RSTGTN = (curr >> 8u) & 0b11111111u;
        RSTGSM = RDC_SEMAPHORE1_RSTGT_R_RSTGSM((curr >> 4u) & 0b11u);
        RSTGMS = (curr >> 0u) & 0b1111u;
    }
};

static_assert(sizeof(rdc_semaphore1) == rdc_semaphore1::size);

static volatile rdc_semaphore1 *const RDC_SEMAPHORE1 =
    reinterpret_cast<rdc_semaphore1 *>(0x40C44000);

static volatile rdc_semaphore1 *const RDC_SEMAPHORE2 =
    reinterpret_cast<rdc_semaphore1 *>(0x40CCC000);

}; // namespace MIMXRT1176::CM7