#include "gfx/legato/generated/le_gen_scheme.h"

const leScheme WhiteScheme = 
{
    {
        { { 0xFF, 0xCF, 0xFF, 0x80, 0x40, 0xFF, 0xE1, 0x80, 0xFF, 0xE1, 0xCF, 0x0, 0x12, 0xFF, 0xE1, 0x91 } }, // GS_8
        { { 0xFF, 0xBA, 0xFF, 0x92, 0x49, 0xFF, 0xDB, 0x92, 0xFF, 0xDB, 0xBA, 0x0, 0x3, 0xFF, 0xDB, 0x92 } }, // RGB_332
        { { 0xFFFF, 0xC67A, 0xFFFF, 0x8410, 0x4208, 0xFFFF, 0xD71C, 0x8410, 0xFFFF, 0xD71C, 0xC67A, 0x0, 0x1F, 0xFFFF, 0xD71C, 0x8C92 } }, // RGB_565
        { { 0xFFFF, 0xC675, 0xFFFF, 0x8421, 0x4211, 0xFFFF, 0xD739, 0x8421, 0xFFFF, 0xD739, 0xC675, 0x1, 0x3F, 0xFFFF, 0xD739, 0x8CA5 } }, // RGBA_5551
        { { 0xFFFFFF, 0xC8D0D4, 0xFFFFFF, 0x808080, 0x404040, 0xFFFFFF, 0xD6E3E7, 0x808080, 0xFFFFFF, 0xD6E3E7, 0xC8D0D4, 0x0, 0xFF, 0xFFFFFF, 0xD6E3E7, 0x8C9294 } }, // RGB_888
        { { 0xFFFFFFFF, 0xC8D0D4FF, 0xFFFFFFFF, 0x808080FF, 0x404040FF, 0xFFFFFFFF, 0xD6E3E7FF, 0x808080FF, 0xFFFFFFFF, 0xD6E3E7FF, 0xC8D0D4FF, 0xFF, 0xFFFF, 0xFFFFFFFF, 0xD6E3E7FF, 0x8C9294FF } }, // RGBA_8888
        { { 0xFFFFFFFF, 0xFFC8D0D4, 0xFFFFFFFF, 0xFF808080, 0xFF404040, 0xFFFFFFFF, 0xFFD6E3E7, 0xFF808080, 0xFFFFFFFF, 0xFFD6E3E7, 0xFFC8D0D4, 0xFF000000, 0xFF0000FF, 0xFFFFFFFF, 0xFFD6E3E7, 0xFF8C9294 } }, // ARGB_8888
        { { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 } },
        { { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 } },
        { { 0xF, 0xFC, 0xF, 0x8, 0xED, 0xF, 0xFE, 0x8, 0xF, 0xFE, 0xFC, 0x0, 0xC, 0xF, 0xFE, 0xF6 } }, // INDEX_8
        { { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 } }, // MONOCHROME
    },
    0,
    NULL
};

const leScheme PM5Scheme = 
{
    {
        { { 0xF4, 0xCF, 0xFF, 0x80, 0x40, 0x0, 0xE1, 0x80, 0xFF, 0xE1, 0xCF, 0x69, 0x12, 0xFF, 0xE1, 0x91 } }, // GS_8
        { { 0xFF, 0xBA, 0xFF, 0x92, 0x49, 0x0, 0xDB, 0x92, 0xFF, 0xDB, 0xBA, 0xC8, 0x3, 0xFF, 0xDB, 0x92 } }, // RGB_332
        { { 0xF79E, 0xC67A, 0xFFFF, 0x8410, 0x4208, 0x0, 0xD71C, 0x8410, 0xFFFF, 0xD71C, 0xC67A, 0xD284, 0x1F, 0xFFFF, 0xD71C, 0x8C92 } }, // RGB_565
        { { 0xF7BD, 0xC675, 0xFFFF, 0x8421, 0x4211, 0x1, 0xD739, 0x8421, 0xFFFF, 0xD739, 0xC675, 0xD289, 0x3F, 0xFFFF, 0xD739, 0x8CA5 } }, // RGBA_5551
        { { 0xF4F4F4, 0xC8D0D4, 0xFFFFFF, 0x808080, 0x404040, 0x0, 0xD6E3E7, 0x808080, 0xFFFFFF, 0xD6E3E7, 0xC8D0D4, 0xD65025, 0xFF, 0xFFFFFF, 0xD6E3E7, 0x8C9294 } }, // RGB_888
        { { 0xF4F4F4FF, 0xC8D0D4FF, 0xFFFFFFFF, 0x808080FF, 0x404040FF, 0xFF, 0xD6E3E7FF, 0x808080FF, 0xFFFFFFFF, 0xD6E3E7FF, 0xC8D0D4FF, 0xD65025FF, 0xFFFF, 0xFFFFFFFF, 0xD6E3E7FF, 0x8C9294FF } }, // RGBA_8888
        { { 0xFFF4F4F4, 0xFFC8D0D4, 0xFFFFFFFF, 0xFF808080, 0xFF404040, 0xFF000000, 0xFFD6E3E7, 0xFF808080, 0xFFFFFFFF, 0xFFD6E3E7, 0xFFC8D0D4, 0xFFD65025, 0xFF0000FF, 0xFFFFFFFF, 0xFFD6E3E7, 0xFF8C9294 } }, // ARGB_8888
        { { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 } },
        { { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 } },
        { { 0xFF, 0xFC, 0xF, 0x8, 0xED, 0x0, 0xFE, 0x8, 0xF, 0xFE, 0xFC, 0xA5, 0xC, 0xF, 0xFE, 0xF6 } }, // INDEX_8
        { { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 } }, // MONOCHROME
    },
    0,
    NULL
};

const leScheme GrayScheme = 
{
    {
        { { 0xCF, 0x5E, 0xFF, 0x80, 0x40, 0xDD, 0xE1, 0x80, 0xFF, 0xE1, 0xCF, 0x67, 0x12, 0xFF, 0xE1, 0x91 } }, // GS_8
        { { 0xBA, 0xD, 0xFF, 0x92, 0x49, 0xDB, 0xDB, 0x92, 0xFF, 0xDB, 0xBA, 0x6D, 0x3, 0xFF, 0xDB, 0x92 } }, // RGB_332
        { { 0xC67A, 0xBAE, 0xFFFF, 0x8410, 0x4208, 0xDEFB, 0xD71C, 0x8410, 0xFFFF, 0xD71C, 0xC67A, 0x6B2D, 0x1F, 0xFFFF, 0xD71C, 0x8C92 } }, // RGB_565
        { { 0xC675, 0xB9D, 0xFFFF, 0x8421, 0x4211, 0xDEF7, 0xD739, 0x8421, 0xFFFF, 0xD739, 0xC675, 0x6B5B, 0x3F, 0xFFFF, 0xD739, 0x8CA5 } }, // RGBA_5551
        { { 0xC8D0D4, 0x67676, 0xFFFFFF, 0x808080, 0x404040, 0xDDDDDD, 0xD6E3E7, 0x808080, 0xFFFFFF, 0xD6E3E7, 0xC8D0D4, 0x676767, 0xFF, 0xFFFFFF, 0xD6E3E7, 0x8C9294 } }, // RGB_888
        { { 0xC8D0D4FF, 0x67676FF, 0xFFFFFFFF, 0x808080FF, 0x404040FF, 0xDDDDDDFF, 0xD6E3E7FF, 0x808080FF, 0xFFFFFFFF, 0xD6E3E7FF, 0xC8D0D4FF, 0x676767FF, 0xFFFF, 0xFFFFFFFF, 0xD6E3E7FF, 0x8C9294FF } }, // RGBA_8888
        { { 0xFFC8D0D4, 0xFF067676, 0xFFFFFFFF, 0xFF808080, 0xFF404040, 0xFFDDDDDD, 0xFFD6E3E7, 0xFF808080, 0xFFFFFFFF, 0xFFD6E3E7, 0xFFC8D0D4, 0xFF676767, 0xFF0000FF, 0xFFFFFFFF, 0xFFD6E3E7, 0xFF8C9294 } }, // ARGB_8888
        { { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 } },
        { { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 } },
        { { 0xFC, 0x6, 0xF, 0x8, 0xED, 0xFD, 0xFE, 0x8, 0xF, 0xFE, 0xFC, 0xF0, 0xC, 0xF, 0xFE, 0xF6 } }, // INDEX_8
        { { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 } }, // MONOCHROME
    },
    0,
    NULL
};

