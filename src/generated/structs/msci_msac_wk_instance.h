/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include "../enums/XRDC2_D0_MSC_MSAC_W1_DL2.h"
#include "../enums/XRDC2_D0_MSC_MSAC_W1_EAL.h"
#include "../ifgen/common.h"

namespace MIMXRT1176::CM7
{

/**
 * no description available
 */
struct [[gnu::packed]] msci_msac_wk_instance
{
    /* Constant attributes. */
    static constexpr std::size_t size =
        8; /*!< msci_msac_wk_instance's size in bytes. */

    /* Fields. */
    uint32_t MSC_MSAC_W0; /*!< (read-write) Memory Slot Access Control */
    uint32_t MSC_MSAC_W1; /*!< (read-write) Memory Slot Access Control */

    /* Methods. */

    /**
     * Get MSC_MSAC_W0's EALO field.
     *
     * Exclusive Access Lock Owner
     */
    inline uint8_t get_MSC_MSAC_W0_EALO()
    {
        return (MSC_MSAC_W0 >> 24u) & 0b1111u;
    }

    /**
     * Get MSC_MSAC_W0's D7ACP field.
     *
     * Domain "x" access control policy
     */
    inline uint8_t get_MSC_MSAC_W0_D7ACP()
    {
        return (MSC_MSAC_W0 >> 21u) & 0b111u;
    }

    /**
     * Set MSC_MSAC_W0's D7ACP field.
     *
     * Domain "x" access control policy
     */
    inline void set_MSC_MSAC_W0_D7ACP(uint8_t value)
    {
        uint32_t curr = MSC_MSAC_W0;

        curr &= ~(0b111u << 21u);
        curr |= (value & 0b111u) << 21u;

        MSC_MSAC_W0 = curr;
    }

    /**
     * Get MSC_MSAC_W0's D6ACP field.
     *
     * Domain "x" access control policy
     */
    inline uint8_t get_MSC_MSAC_W0_D6ACP()
    {
        return (MSC_MSAC_W0 >> 18u) & 0b111u;
    }

    /**
     * Set MSC_MSAC_W0's D6ACP field.
     *
     * Domain "x" access control policy
     */
    inline void set_MSC_MSAC_W0_D6ACP(uint8_t value)
    {
        uint32_t curr = MSC_MSAC_W0;

        curr &= ~(0b111u << 18u);
        curr |= (value & 0b111u) << 18u;

        MSC_MSAC_W0 = curr;
    }

    /**
     * Get MSC_MSAC_W0's D5ACP field.
     *
     * Domain "x" access control policy
     */
    inline uint8_t get_MSC_MSAC_W0_D5ACP()
    {
        return (MSC_MSAC_W0 >> 15u) & 0b111u;
    }

    /**
     * Set MSC_MSAC_W0's D5ACP field.
     *
     * Domain "x" access control policy
     */
    inline void set_MSC_MSAC_W0_D5ACP(uint8_t value)
    {
        uint32_t curr = MSC_MSAC_W0;

        curr &= ~(0b111u << 15u);
        curr |= (value & 0b111u) << 15u;

        MSC_MSAC_W0 = curr;
    }

    /**
     * Get MSC_MSAC_W0's D4ACP field.
     *
     * Domain "x" access control policy
     */
    inline uint8_t get_MSC_MSAC_W0_D4ACP()
    {
        return (MSC_MSAC_W0 >> 12u) & 0b111u;
    }

    /**
     * Set MSC_MSAC_W0's D4ACP field.
     *
     * Domain "x" access control policy
     */
    inline void set_MSC_MSAC_W0_D4ACP(uint8_t value)
    {
        uint32_t curr = MSC_MSAC_W0;

        curr &= ~(0b111u << 12u);
        curr |= (value & 0b111u) << 12u;

        MSC_MSAC_W0 = curr;
    }

    /**
     * Get MSC_MSAC_W0's D3ACP field.
     *
     * Domain "x" access control policy
     */
    inline uint8_t get_MSC_MSAC_W0_D3ACP()
    {
        return (MSC_MSAC_W0 >> 9u) & 0b111u;
    }

    /**
     * Set MSC_MSAC_W0's D3ACP field.
     *
     * Domain "x" access control policy
     */
    inline void set_MSC_MSAC_W0_D3ACP(uint8_t value)
    {
        uint32_t curr = MSC_MSAC_W0;

        curr &= ~(0b111u << 9u);
        curr |= (value & 0b111u) << 9u;

        MSC_MSAC_W0 = curr;
    }

    /**
     * Get MSC_MSAC_W0's D2ACP field.
     *
     * Domain "x" access control policy
     */
    inline uint8_t get_MSC_MSAC_W0_D2ACP()
    {
        return (MSC_MSAC_W0 >> 6u) & 0b111u;
    }

    /**
     * Set MSC_MSAC_W0's D2ACP field.
     *
     * Domain "x" access control policy
     */
    inline void set_MSC_MSAC_W0_D2ACP(uint8_t value)
    {
        uint32_t curr = MSC_MSAC_W0;

        curr &= ~(0b111u << 6u);
        curr |= (value & 0b111u) << 6u;

        MSC_MSAC_W0 = curr;
    }

    /**
     * Get MSC_MSAC_W0's D1ACP field.
     *
     * Domain "x" access control policy
     */
    inline uint8_t get_MSC_MSAC_W0_D1ACP()
    {
        return (MSC_MSAC_W0 >> 3u) & 0b111u;
    }

    /**
     * Set MSC_MSAC_W0's D1ACP field.
     *
     * Domain "x" access control policy
     */
    inline void set_MSC_MSAC_W0_D1ACP(uint8_t value)
    {
        uint32_t curr = MSC_MSAC_W0;

        curr &= ~(0b111u << 3u);
        curr |= (value & 0b111u) << 3u;

        MSC_MSAC_W0 = curr;
    }

    /**
     * Get MSC_MSAC_W0's D0ACP field.
     *
     * Domain "x" access control policy
     */
    inline uint8_t get_MSC_MSAC_W0_D0ACP()
    {
        return (MSC_MSAC_W0 >> 0u) & 0b111u;
    }

    /**
     * Set MSC_MSAC_W0's D0ACP field.
     *
     * Domain "x" access control policy
     */
    inline void set_MSC_MSAC_W0_D0ACP(uint8_t value)
    {
        uint32_t curr = MSC_MSAC_W0;

        curr &= ~(0b111u << 0u);
        curr |= (value & 0b111u) << 0u;

        MSC_MSAC_W0 = curr;
    }

    /**
     * Get all of MSC_MSAC_W0's bit fields.
     *
     * (read-write) Memory Slot Access Control
     */
    inline void get_MSC_MSAC_W0(uint8_t &EALO, uint8_t &D7ACP, uint8_t &D6ACP,
                                uint8_t &D5ACP, uint8_t &D4ACP, uint8_t &D3ACP,
                                uint8_t &D2ACP, uint8_t &D1ACP, uint8_t &D0ACP)
    {
        uint32_t curr = MSC_MSAC_W0;

        EALO = (curr >> 24u) & 0b1111u;
        D7ACP = (curr >> 21u) & 0b111u;
        D6ACP = (curr >> 18u) & 0b111u;
        D5ACP = (curr >> 15u) & 0b111u;
        D4ACP = (curr >> 12u) & 0b111u;
        D3ACP = (curr >> 9u) & 0b111u;
        D2ACP = (curr >> 6u) & 0b111u;
        D1ACP = (curr >> 3u) & 0b111u;
        D0ACP = (curr >> 0u) & 0b111u;
    }

    /**
     * Set all of MSC_MSAC_W0's bit fields.
     *
     * (read-write) Memory Slot Access Control
     */
    inline void set_MSC_MSAC_W0(uint8_t D7ACP, uint8_t D6ACP, uint8_t D5ACP,
                                uint8_t D4ACP, uint8_t D3ACP, uint8_t D2ACP,
                                uint8_t D1ACP, uint8_t D0ACP)
    {
        uint32_t curr = MSC_MSAC_W0;

        curr &= ~(0b111u << 21u);
        curr |= (D7ACP & 0b111u) << 21u;
        curr &= ~(0b111u << 18u);
        curr |= (D6ACP & 0b111u) << 18u;
        curr &= ~(0b111u << 15u);
        curr |= (D5ACP & 0b111u) << 15u;
        curr &= ~(0b111u << 12u);
        curr |= (D4ACP & 0b111u) << 12u;
        curr &= ~(0b111u << 9u);
        curr |= (D3ACP & 0b111u) << 9u;
        curr &= ~(0b111u << 6u);
        curr |= (D2ACP & 0b111u) << 6u;
        curr &= ~(0b111u << 3u);
        curr |= (D1ACP & 0b111u) << 3u;
        curr &= ~(0b111u << 0u);
        curr |= (D0ACP & 0b111u) << 0u;

        MSC_MSAC_W0 = curr;
    }

    /**
     * Get MSC_MSAC_W1's VLD bit.
     *
     * Valid
     */
    inline bool get_MSC_MSAC_W1_VLD()
    {
        return MSC_MSAC_W1 & (1u << 31u);
    }

    /**
     * Set MSC_MSAC_W1's VLD bit.
     *
     * Valid
     */
    inline void set_MSC_MSAC_W1_VLD()
    {
        MSC_MSAC_W1 |= 1u << 31u;
    }

    /**
     * Clear MSC_MSAC_W1's VLD bit.
     *
     * Valid
     */
    inline void clear_MSC_MSAC_W1_VLD()
    {
        MSC_MSAC_W1 &= ~(1u << 31u);
    }

    /**
     * Toggle MSC_MSAC_W1's VLD bit.
     *
     * Valid
     */
    inline void toggle_MSC_MSAC_W1_VLD()
    {
        MSC_MSAC_W1 ^= 1u << 31u;
    }

    /**
     * Get MSC_MSAC_W1's DL2 field.
     *
     * Descriptor Lock
     */
    inline XRDC2_D0_MSC_MSAC_W1_DL2 get_MSC_MSAC_W1_DL2()
    {
        return XRDC2_D0_MSC_MSAC_W1_DL2((MSC_MSAC_W1 >> 29u) & 0b11u);
    }

    /**
     * Set MSC_MSAC_W1's DL2 field.
     *
     * Descriptor Lock
     */
    inline void set_MSC_MSAC_W1_DL2(XRDC2_D0_MSC_MSAC_W1_DL2 value)
    {
        uint32_t curr = MSC_MSAC_W1;

        curr &= ~(0b11u << 29u);
        curr |= (std::to_underlying(value) & 0b11u) << 29u;

        MSC_MSAC_W1 = curr;
    }

    /**
     * Get MSC_MSAC_W1's EAL field.
     *
     * Exclusive Access Lock
     */
    inline XRDC2_D0_MSC_MSAC_W1_EAL get_MSC_MSAC_W1_EAL()
    {
        return XRDC2_D0_MSC_MSAC_W1_EAL((MSC_MSAC_W1 >> 24u) & 0b11u);
    }

    /**
     * Set MSC_MSAC_W1's EAL field.
     *
     * Exclusive Access Lock
     */
    inline void set_MSC_MSAC_W1_EAL(XRDC2_D0_MSC_MSAC_W1_EAL value)
    {
        uint32_t curr = MSC_MSAC_W1;

        curr &= ~(0b11u << 24u);
        curr |= (std::to_underlying(value) & 0b11u) << 24u;

        MSC_MSAC_W1 = curr;
    }

    /**
     * Get MSC_MSAC_W1's D15ACP field.
     *
     * Domain "x" access control policy
     */
    inline uint8_t get_MSC_MSAC_W1_D15ACP()
    {
        return (MSC_MSAC_W1 >> 21u) & 0b111u;
    }

    /**
     * Set MSC_MSAC_W1's D15ACP field.
     *
     * Domain "x" access control policy
     */
    inline void set_MSC_MSAC_W1_D15ACP(uint8_t value)
    {
        uint32_t curr = MSC_MSAC_W1;

        curr &= ~(0b111u << 21u);
        curr |= (value & 0b111u) << 21u;

        MSC_MSAC_W1 = curr;
    }

    /**
     * Get MSC_MSAC_W1's D14ACP field.
     *
     * Domain "x" access control policy
     */
    inline uint8_t get_MSC_MSAC_W1_D14ACP()
    {
        return (MSC_MSAC_W1 >> 18u) & 0b111u;
    }

    /**
     * Set MSC_MSAC_W1's D14ACP field.
     *
     * Domain "x" access control policy
     */
    inline void set_MSC_MSAC_W1_D14ACP(uint8_t value)
    {
        uint32_t curr = MSC_MSAC_W1;

        curr &= ~(0b111u << 18u);
        curr |= (value & 0b111u) << 18u;

        MSC_MSAC_W1 = curr;
    }

    /**
     * Get MSC_MSAC_W1's D13ACP field.
     *
     * Domain "x" access control policy
     */
    inline uint8_t get_MSC_MSAC_W1_D13ACP()
    {
        return (MSC_MSAC_W1 >> 15u) & 0b111u;
    }

    /**
     * Set MSC_MSAC_W1's D13ACP field.
     *
     * Domain "x" access control policy
     */
    inline void set_MSC_MSAC_W1_D13ACP(uint8_t value)
    {
        uint32_t curr = MSC_MSAC_W1;

        curr &= ~(0b111u << 15u);
        curr |= (value & 0b111u) << 15u;

        MSC_MSAC_W1 = curr;
    }

    /**
     * Get MSC_MSAC_W1's D12ACP field.
     *
     * Domain "x" access control policy
     */
    inline uint8_t get_MSC_MSAC_W1_D12ACP()
    {
        return (MSC_MSAC_W1 >> 12u) & 0b111u;
    }

    /**
     * Set MSC_MSAC_W1's D12ACP field.
     *
     * Domain "x" access control policy
     */
    inline void set_MSC_MSAC_W1_D12ACP(uint8_t value)
    {
        uint32_t curr = MSC_MSAC_W1;

        curr &= ~(0b111u << 12u);
        curr |= (value & 0b111u) << 12u;

        MSC_MSAC_W1 = curr;
    }

    /**
     * Get MSC_MSAC_W1's D11ACP field.
     *
     * Domain "x" access control policy
     */
    inline uint8_t get_MSC_MSAC_W1_D11ACP()
    {
        return (MSC_MSAC_W1 >> 9u) & 0b111u;
    }

    /**
     * Set MSC_MSAC_W1's D11ACP field.
     *
     * Domain "x" access control policy
     */
    inline void set_MSC_MSAC_W1_D11ACP(uint8_t value)
    {
        uint32_t curr = MSC_MSAC_W1;

        curr &= ~(0b111u << 9u);
        curr |= (value & 0b111u) << 9u;

        MSC_MSAC_W1 = curr;
    }

    /**
     * Get MSC_MSAC_W1's D10ACP field.
     *
     * Domain "x" access control policy
     */
    inline uint8_t get_MSC_MSAC_W1_D10ACP()
    {
        return (MSC_MSAC_W1 >> 6u) & 0b111u;
    }

    /**
     * Set MSC_MSAC_W1's D10ACP field.
     *
     * Domain "x" access control policy
     */
    inline void set_MSC_MSAC_W1_D10ACP(uint8_t value)
    {
        uint32_t curr = MSC_MSAC_W1;

        curr &= ~(0b111u << 6u);
        curr |= (value & 0b111u) << 6u;

        MSC_MSAC_W1 = curr;
    }

    /**
     * Get MSC_MSAC_W1's D9ACP field.
     *
     * Domain "x" access control policy
     */
    inline uint8_t get_MSC_MSAC_W1_D9ACP()
    {
        return (MSC_MSAC_W1 >> 3u) & 0b111u;
    }

    /**
     * Set MSC_MSAC_W1's D9ACP field.
     *
     * Domain "x" access control policy
     */
    inline void set_MSC_MSAC_W1_D9ACP(uint8_t value)
    {
        uint32_t curr = MSC_MSAC_W1;

        curr &= ~(0b111u << 3u);
        curr |= (value & 0b111u) << 3u;

        MSC_MSAC_W1 = curr;
    }

    /**
     * Get MSC_MSAC_W1's D8ACP field.
     *
     * Domain "x" access control policy
     */
    inline uint8_t get_MSC_MSAC_W1_D8ACP()
    {
        return (MSC_MSAC_W1 >> 0u) & 0b111u;
    }

    /**
     * Set MSC_MSAC_W1's D8ACP field.
     *
     * Domain "x" access control policy
     */
    inline void set_MSC_MSAC_W1_D8ACP(uint8_t value)
    {
        uint32_t curr = MSC_MSAC_W1;

        curr &= ~(0b111u << 0u);
        curr |= (value & 0b111u) << 0u;

        MSC_MSAC_W1 = curr;
    }

    /**
     * Get all of MSC_MSAC_W1's bit fields.
     *
     * (read-write) Memory Slot Access Control
     */
    inline void get_MSC_MSAC_W1(bool &VLD, XRDC2_D0_MSC_MSAC_W1_DL2 &DL2,
                                XRDC2_D0_MSC_MSAC_W1_EAL &EAL, uint8_t &D15ACP,
                                uint8_t &D14ACP, uint8_t &D13ACP,
                                uint8_t &D12ACP, uint8_t &D11ACP,
                                uint8_t &D10ACP, uint8_t &D9ACP,
                                uint8_t &D8ACP)
    {
        uint32_t curr = MSC_MSAC_W1;

        VLD = curr & (1u << 31u);
        DL2 = XRDC2_D0_MSC_MSAC_W1_DL2((curr >> 29u) & 0b11u);
        EAL = XRDC2_D0_MSC_MSAC_W1_EAL((curr >> 24u) & 0b11u);
        D15ACP = (curr >> 21u) & 0b111u;
        D14ACP = (curr >> 18u) & 0b111u;
        D13ACP = (curr >> 15u) & 0b111u;
        D12ACP = (curr >> 12u) & 0b111u;
        D11ACP = (curr >> 9u) & 0b111u;
        D10ACP = (curr >> 6u) & 0b111u;
        D9ACP = (curr >> 3u) & 0b111u;
        D8ACP = (curr >> 0u) & 0b111u;
    }

    /**
     * Set all of MSC_MSAC_W1's bit fields.
     *
     * (read-write) Memory Slot Access Control
     */
    inline void set_MSC_MSAC_W1(bool VLD, XRDC2_D0_MSC_MSAC_W1_DL2 DL2,
                                XRDC2_D0_MSC_MSAC_W1_EAL EAL, uint8_t D15ACP,
                                uint8_t D14ACP, uint8_t D13ACP, uint8_t D12ACP,
                                uint8_t D11ACP, uint8_t D10ACP, uint8_t D9ACP,
                                uint8_t D8ACP)
    {
        uint32_t curr = MSC_MSAC_W1;

        curr &= ~(0b1u << 31u);
        curr |= (VLD & 0b1u) << 31u;
        curr &= ~(0b11u << 29u);
        curr |= (std::to_underlying(DL2) & 0b11u) << 29u;
        curr &= ~(0b11u << 24u);
        curr |= (std::to_underlying(EAL) & 0b11u) << 24u;
        curr &= ~(0b111u << 21u);
        curr |= (D15ACP & 0b111u) << 21u;
        curr &= ~(0b111u << 18u);
        curr |= (D14ACP & 0b111u) << 18u;
        curr &= ~(0b111u << 15u);
        curr |= (D13ACP & 0b111u) << 15u;
        curr &= ~(0b111u << 12u);
        curr |= (D12ACP & 0b111u) << 12u;
        curr &= ~(0b111u << 9u);
        curr |= (D11ACP & 0b111u) << 9u;
        curr &= ~(0b111u << 6u);
        curr |= (D10ACP & 0b111u) << 6u;
        curr &= ~(0b111u << 3u);
        curr |= (D9ACP & 0b111u) << 3u;
        curr &= ~(0b111u << 0u);
        curr |= (D8ACP & 0b111u) << 0u;

        MSC_MSAC_W1 = curr;
    }
};

static_assert(sizeof(msci_msac_wk_instance) == msci_msac_wk_instance::size);

}; // namespace MIMXRT1176::CM7
