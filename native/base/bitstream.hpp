#pragma once

#include <cstdint>
#include <cstddef>
#include <cassert>
#include <cstdlib>

#include <vector>

namespace xlab::base::Bitstream
{
    template <typename T>
    static inline void WB32(T &p, uint32_t d)
    {
        ((uint8_t *)(p))[3] = (d);
        ((uint8_t *)(p))[2] = (d) >> 8;
        ((uint8_t *)(p))[1] = (d) >> 16;
        ((uint8_t *)(p))[0] = (d) >> 24;
    }

    template <typename T>
    static inline void WL32(T &p, uint32_t d)
    {
        ((uint8_t *)(p))[0] = (d);
        ((uint8_t *)(p))[1] = (d) >> 8;
        ((uint8_t *)(p))[2] = (d) >> 16;
        ((uint8_t *)(p))[3] = (d) >> 24;
    }

}