/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM7
{

enum class GPC_STBY_CTRL_STBY_LDO_OUT_CTRL_CNT_MODE : uint8_t
{
    b0 /*!< Counter disable mode: not use step counter, step completes once
          receiving step_done */
        ,
    b1 = 1 /*!< Counter delay mode: delay after receiving step_done, delay
              cycle number is STEP_CNT */
        ,
    b2 =
        2 /*!< Ignore step_done response, the counter starts to count once step
             begins, when counter reaches STEP_CNT value, the step completes */
        ,
    b3 = 3 /*!< Time out mode, the counter starts to count once step begins,
              the step completes when either step_done received or counting to
              STEP_CNT value */
};
static_assert(sizeof(GPC_STBY_CTRL_STBY_LDO_OUT_CTRL_CNT_MODE) == 1);

/**
 * Converts GPC_STBY_CTRL_STBY_LDO_OUT_CTRL_CNT_MODE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(GPC_STBY_CTRL_STBY_LDO_OUT_CTRL_CNT_MODE instance)
{
    const char *result = "UNKNOWN GPC_STBY_CTRL_STBY_LDO_OUT_CTRL_CNT_MODE";

    switch (instance)
    {
    case GPC_STBY_CTRL_STBY_LDO_OUT_CTRL_CNT_MODE::b0:
        result = "b0";
        break;
    case GPC_STBY_CTRL_STBY_LDO_OUT_CTRL_CNT_MODE::b1:
        result = "b1";
        break;
    case GPC_STBY_CTRL_STBY_LDO_OUT_CTRL_CNT_MODE::b2:
        result = "b2";
        break;
    case GPC_STBY_CTRL_STBY_LDO_OUT_CTRL_CNT_MODE::b3:
        result = "b3";
        break;
    }

    return result;
}

/**
 * Converts a C string to GPC_STBY_CTRL_STBY_LDO_OUT_CTRL_CNT_MODE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        GPC_STBY_CTRL_STBY_LDO_OUT_CTRL_CNT_MODE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "b0", 2)))
    {
        output = GPC_STBY_CTRL_STBY_LDO_OUT_CTRL_CNT_MODE::b0;
    }
    else if ((result = !strncmp(data, "b1", 2)))
    {
        output = GPC_STBY_CTRL_STBY_LDO_OUT_CTRL_CNT_MODE::b1;
    }
    else if ((result = !strncmp(data, "b2", 2)))
    {
        output = GPC_STBY_CTRL_STBY_LDO_OUT_CTRL_CNT_MODE::b2;
    }
    else if ((result = !strncmp(data, "b3", 2)))
    {
        output = GPC_STBY_CTRL_STBY_LDO_OUT_CTRL_CNT_MODE::b3;
    }

    return result;
}

}; // namespace MIMXRT1176::CM7
