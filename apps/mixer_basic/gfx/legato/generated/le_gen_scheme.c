#include "gfx/legato/generated/le_gen_scheme.h"

const leScheme defaultScheme = 
{
    {
        { { 0xCF, 0xCF, 0xFF, 0x80, 0x40, 0x0, 0xE1, 0x80, 0xFF, 0xE1, 0xCF, 0x0, 0x12, 0xFF, 0xE1, 0x91 } }, // GS_8
        { { 0xBA, 0xBA, 0xFF, 0x92, 0x49, 0x0, 0xDB, 0x92, 0xFF, 0xDB, 0xBA, 0x0, 0x3, 0xFF, 0xDB, 0x92 } }, // RGB_332
        { { 0xC67A, 0xC67A, 0xFFFF, 0x8410, 0x4208, 0x0, 0xD71C, 0x8410, 0xFFFF, 0xD71C, 0xC67A, 0x0, 0x1F, 0xFFFF, 0xD71C, 0x8C92 } }, // RGB_565
        { { 0xC675, 0xC675, 0xFFFF, 0x8421, 0x4211, 0x1, 0xD739, 0x8421, 0xFFFF, 0xD739, 0xC675, 0x1, 0x3F, 0xFFFF, 0xD739, 0x8CA5 } }, // RGBA_5551
        { { 0xC8D0D4, 0xC8D0D4, 0xFFFFFF, 0x808080, 0x404040, 0x0, 0xD6E3E7, 0x808080, 0xFFFFFF, 0xD6E3E7, 0xC8D0D4, 0x0, 0xFF, 0xFFFFFF, 0xD6E3E7, 0x8C9294 } }, // RGB_888
        { { 0xC8D0D4FF, 0xC8D0D4FF, 0xFFFFFFFF, 0x808080FF, 0x404040FF, 0xFF, 0xD6E3E7FF, 0x808080FF, 0xFFFFFFFF, 0xD6E3E7FF, 0xC8D0D4FF, 0xFF, 0xFFFF, 0xFFFFFFFF, 0xD6E3E7FF, 0x8C9294FF } }, // RGBA_8888
        { { 0xFFC8D0D4, 0xFFC8D0D4, 0xFFFFFFFF, 0xFF808080, 0xFF404040, 0xFF000000, 0xFFD6E3E7, 0xFF808080, 0xFFFFFFFF, 0xFFD6E3E7, 0xFFC8D0D4, 0xFF000000, 0xFF0000FF, 0xFFFFFFFF, 0xFFD6E3E7, 0xFF8C9294 } }, // ARGB_8888
        { { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 } },
        { { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 } },
        { { 0xFC, 0xFC, 0xF, 0x8, 0xED, 0x0, 0xFE, 0x8, 0xF, 0xFE, 0xFC, 0x0, 0xC, 0xF, 0xFE, 0xF6 } }, // INDEX_8
        { { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 } }, // MONOCHROME
    },
    0,
    NULL
};

const leScheme BaseScheme = 
{
    {
        { { 0x1C, 0xCF, 0xFF, 0x80, 0x40, 0x22, 0xE1, 0x80, 0xFF, 0xE1, 0xCF, 0x0, 0x12, 0xFF, 0xE1, 0x91 } }, // GS_8
        { { 0x24, 0xBA, 0xFF, 0x92, 0x49, 0x25, 0xDB, 0x92, 0xFF, 0xDB, 0xBA, 0x0, 0x3, 0xFF, 0xDB, 0x92 } }, // RGB_332
        { { 0x20C4, 0xC67A, 0xFFFF, 0x8410, 0x4208, 0x2906, 0xD71C, 0x8410, 0xFFFF, 0xD71C, 0xC67A, 0x0, 0x1F, 0xFFFF, 0xD71C, 0x8C92 } }, // RGB_565
        { { 0x20C9, 0xC675, 0xFFFF, 0x8421, 0x4211, 0x290D, 0xD739, 0x8421, 0xFFFF, 0xD739, 0xC675, 0x1, 0x3F, 0xFFFF, 0xD739, 0x8CA5 } }, // RGBA_5551
        { { 0x201A23, 0xC8D0D4, 0xFFFFFF, 0x808080, 0x404040, 0x291F2E, 0xD6E3E7, 0x808080, 0xFFFFFF, 0xD6E3E7, 0xC8D0D4, 0x0, 0xFF, 0xFFFFFF, 0xD6E3E7, 0x8C9294 } }, // RGB_888
        { { 0x201A23FF, 0xC8D0D4FF, 0xFFFFFFFF, 0x808080FF, 0x404040FF, 0x291F2EFF, 0xD6E3E7FF, 0x808080FF, 0xFFFFFFFF, 0xD6E3E7FF, 0xC8D0D4FF, 0xFF, 0xFFFF, 0xFFFFFFFF, 0xD6E3E7FF, 0x8C9294FF } }, // RGBA_8888
        { { 0xFF201A23, 0xFFC8D0D4, 0xFFFFFFFF, 0xFF808080, 0xFF404040, 0xFF291F2E, 0xFFD6E3E7, 0xFF808080, 0xFFFFFFFF, 0xFFD6E3E7, 0xFFC8D0D4, 0xFF000000, 0xFF0000FF, 0xFFFFFFFF, 0xFFD6E3E7, 0xFF8C9294 } }, // ARGB_8888
        { { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 } },
        { { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 } },
        { { 0xE9, 0xFC, 0xF, 0x8, 0xED, 0xEA, 0xFE, 0x8, 0xF, 0xFE, 0xFC, 0x0, 0xC, 0xF, 0xFE, 0xF6 } }, // INDEX_8
        { { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 } }, // MONOCHROME
    },
    0,
    NULL
};

const leScheme PanelScheme = 
{
    {
        { { 0x22, 0xCF, 0xFF, 0x80, 0x40, 0x0, 0xE1, 0x80, 0xFF, 0xE1, 0xCF, 0x0, 0x12, 0xFF, 0xE1, 0x91 } }, // GS_8
        { { 0x25, 0xBA, 0xFF, 0x92, 0x49, 0x0, 0xDB, 0x92, 0xFF, 0xDB, 0xBA, 0x0, 0x3, 0xFF, 0xDB, 0x92 } }, // RGB_332
        { { 0x2906, 0xC67A, 0xFFFF, 0x8410, 0x4208, 0x0, 0xD71C, 0x8410, 0xFFFF, 0xD71C, 0xC67A, 0x0, 0x1F, 0xFFFF, 0xD71C, 0x8C92 } }, // RGB_565
        { { 0x290D, 0xC675, 0xFFFF, 0x8421, 0x4211, 0x1, 0xD739, 0x8421, 0xFFFF, 0xD739, 0xC675, 0x1, 0x3F, 0xFFFF, 0xD739, 0x8CA5 } }, // RGBA_5551
        { { 0x291F2E, 0xC8D0D4, 0xFFFFFF, 0x808080, 0x404040, 0x0, 0xD6E3E7, 0x808080, 0xFFFFFF, 0xD6E3E7, 0xC8D0D4, 0x0, 0xFF, 0xFFFFFF, 0xD6E3E7, 0x8C9294 } }, // RGB_888
        { { 0x291F2EFF, 0xC8D0D4FF, 0xFFFFFFFF, 0x808080FF, 0x404040FF, 0xFF, 0xD6E3E7FF, 0x808080FF, 0xFFFFFFFF, 0xD6E3E7FF, 0xC8D0D4FF, 0xFF, 0xFFFF, 0xFFFFFFFF, 0xD6E3E7FF, 0x8C9294FF } }, // RGBA_8888
        { { 0xFF291F2E, 0xFFC8D0D4, 0xFFFFFFFF, 0xFF808080, 0xFF404040, 0xFF000000, 0xFFD6E3E7, 0xFF808080, 0xFFFFFFFF, 0xFFD6E3E7, 0xFFC8D0D4, 0xFF000000, 0xFF0000FF, 0xFFFFFFFF, 0xFFD6E3E7, 0xFF8C9294 } }, // ARGB_8888
        { { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 } },
        { { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 } },
        { { 0xEA, 0xFC, 0xF, 0x8, 0xED, 0x0, 0xFE, 0x8, 0xF, 0xFE, 0xFC, 0x0, 0xC, 0xF, 0xFE, 0xF6 } }, // INDEX_8
        { { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 } }, // MONOCHROME
    },
    0,
    NULL
};

const leScheme BarScheme = 
{
    {
        { { 0x0, 0xCF, 0xFF, 0x80, 0x40, 0xDC, 0xE1, 0x80, 0xDC, 0xE1, 0xCF, 0x0, 0x12, 0xFF, 0xE1, 0x91 } }, // GS_8
        { { 0x0, 0xBA, 0xFF, 0x92, 0x49, 0x7F, 0xDB, 0x92, 0x7F, 0xDB, 0xBA, 0x0, 0x3, 0xFF, 0xDB, 0x92 } }, // RGB_332
        { { 0x0, 0xC67A, 0xFFFF, 0x8410, 0x4208, 0x67FC, 0xD71C, 0x8410, 0x67FC, 0xD71C, 0xC67A, 0x0, 0x1F, 0xFFFF, 0xD71C, 0x8C92 } }, // RGB_565
        { { 0x1, 0xC675, 0xFFFF, 0x8421, 0x4211, 0x67F9, 0xD739, 0x8421, 0x67F9, 0xD739, 0xC675, 0x1, 0x3F, 0xFFFF, 0xD739, 0x8CA5 } }, // RGBA_5551
        { { 0x0, 0xC8D0D4, 0xFFFFFF, 0x808080, 0x404040, 0x64FFE8, 0xD6E3E7, 0x808080, 0x63FFE6, 0xD6E3E7, 0xC8D0D4, 0x0, 0xFF, 0xFFFFFF, 0xD6E3E7, 0x8C9294 } }, // RGB_888
        { { 0xFF, 0xC8D0D4FF, 0xFFFFFFFF, 0x808080FF, 0x404040FF, 0x64FFE8FF, 0xD6E3E7FF, 0x808080FF, 0x63FFE6FF, 0xD6E3E7FF, 0xC8D0D4FF, 0xFF, 0xFFFF, 0xFFFFFFFF, 0xD6E3E7FF, 0x8C9294FF } }, // RGBA_8888
        { { 0xFF000000, 0xFFC8D0D4, 0xFFFFFFFF, 0xFF808080, 0xFF404040, 0xFF64FFE8, 0xFFD6E3E7, 0xFF808080, 0xFF63FFE6, 0xFFD6E3E7, 0xFFC8D0D4, 0xFF000000, 0xFF0000FF, 0xFFFFFFFF, 0xFFD6E3E7, 0xFF8C9294 } }, // ARGB_8888
        { { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 } },
        { { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 } },
        { { 0x0, 0xFC, 0xF, 0x8, 0xED, 0x55, 0xFE, 0x8, 0x55, 0xFE, 0xFC, 0x0, 0xC, 0xF, 0xFE, 0xF6 } }, // INDEX_8
        { { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 } }, // MONOCHROME
    },
    0,
    NULL
};

const leScheme RedScheme = 
{
    {
        { { 0x54, 0xCF, 0xFF, 0x80, 0x40, 0x0, 0xE1, 0x80, 0xFF, 0xE1, 0xCF, 0x54, 0x12, 0xFF, 0xE1, 0x91 } }, // GS_8
        { { 0xC5, 0xBA, 0xFF, 0x92, 0x49, 0x0, 0xDB, 0x92, 0xFF, 0xDB, 0xBA, 0xC5, 0x3, 0xFF, 0xDB, 0x92 } }, // RGB_332
        { { 0xD189, 0xC67A, 0xFFFF, 0x8410, 0x4208, 0x0, 0xD71C, 0x8410, 0xFFFF, 0xD71C, 0xC67A, 0xD189, 0x1F, 0xFFFF, 0xD71C, 0x8C92 } }, // RGB_565
        { { 0xD193, 0xC675, 0xFFFF, 0x8421, 0x4211, 0x1, 0xD739, 0x8421, 0xFFFF, 0xD739, 0xC675, 0xD193, 0x3F, 0xFFFF, 0xD739, 0x8CA5 } }, // RGBA_5551
        { { 0xD22F4C, 0xC8D0D4, 0xFFFFFF, 0x808080, 0x404040, 0x0, 0xD6E3E7, 0x808080, 0xFFFFFF, 0xD6E3E7, 0xC8D0D4, 0xD22F4C, 0xFF, 0xFFFFFF, 0xD6E3E7, 0x8C9294 } }, // RGB_888
        { { 0xD22F4CFF, 0xC8D0D4FF, 0xFFFFFFFF, 0x808080FF, 0x404040FF, 0xFF, 0xD6E3E7FF, 0x808080FF, 0xFFFFFFFF, 0xD6E3E7FF, 0xC8D0D4FF, 0xD22F4CFF, 0xFFFF, 0xFFFFFFFF, 0xD6E3E7FF, 0x8C9294FF } }, // RGBA_8888
        { { 0xFFD22F4C, 0xFFC8D0D4, 0xFFFFFFFF, 0xFF808080, 0xFF404040, 0xFF000000, 0xFFD6E3E7, 0xFF808080, 0xFFFFFFFF, 0xFFD6E3E7, 0xFFC8D0D4, 0xFFD22F4C, 0xFF0000FF, 0xFFFFFFFF, 0xFFD6E3E7, 0xFF8C9294 } }, // ARGB_8888
        { { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 } },
        { { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 } },
        { { 0xA0, 0xFC, 0xF, 0x8, 0xED, 0x0, 0xFE, 0x8, 0xF, 0xFE, 0xFC, 0xA0, 0xC, 0xF, 0xFE, 0xF6 } }, // INDEX_8
        { { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 } }, // MONOCHROME
    },
    0,
    NULL
};

const leScheme WhiteTextScheme = 
{
    {
        { { 0xCF, 0xCF, 0xFF, 0x80, 0x40, 0xFF, 0xE1, 0x80, 0xFF, 0xE1, 0xCF, 0xFF, 0x12, 0xFF, 0xE1, 0x91 } }, // GS_8
        { { 0xBA, 0xBA, 0xFF, 0x92, 0x49, 0xFF, 0xDB, 0x92, 0xFF, 0xDB, 0xBA, 0xFF, 0x3, 0xFF, 0xDB, 0x92 } }, // RGB_332
        { { 0xC67A, 0xC67A, 0xFFFF, 0x8410, 0x4208, 0xFFFF, 0xD71C, 0x8410, 0xFFFF, 0xD71C, 0xC67A, 0xFFFF, 0x1F, 0xFFFF, 0xD71C, 0x8C92 } }, // RGB_565
        { { 0xC675, 0xC675, 0xFFFF, 0x8421, 0x4211, 0xFFFF, 0xD739, 0x8421, 0xFFFF, 0xD739, 0xC675, 0xFFFF, 0x3F, 0xFFFF, 0xD739, 0x8CA5 } }, // RGBA_5551
        { { 0xC8D0D4, 0xC8D0D4, 0xFFFFFF, 0x808080, 0x404040, 0xFFFFFF, 0xD6E3E7, 0x808080, 0xFFFFFF, 0xD6E3E7, 0xC8D0D4, 0xFFFFFF, 0xFF, 0xFFFFFF, 0xD6E3E7, 0x8C9294 } }, // RGB_888
        { { 0xC8D0D4FF, 0xC8D0D4FF, 0xFFFFFFFF, 0x808080FF, 0x404040FF, 0xFFFFFFFF, 0xD6E3E7FF, 0x808080FF, 0xFFFFFFFF, 0xD6E3E7FF, 0xC8D0D4FF, 0xFFFFFFFF, 0xFFFF, 0xFFFFFFFF, 0xD6E3E7FF, 0x8C9294FF } }, // RGBA_8888
        { { 0xFFC8D0D4, 0xFFC8D0D4, 0xFFFFFFFF, 0xFF808080, 0xFF404040, 0xFFFFFFFF, 0xFFD6E3E7, 0xFF808080, 0xFFFFFFFF, 0xFFD6E3E7, 0xFFC8D0D4, 0xFFFFFFFF, 0xFF0000FF, 0xFFFFFFFF, 0xFFD6E3E7, 0xFF8C9294 } }, // ARGB_8888
        { { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 } },
        { { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 } },
        { { 0xFC, 0xFC, 0xF, 0x8, 0xED, 0xF, 0xFE, 0x8, 0xF, 0xFE, 0xFC, 0xF, 0xC, 0xF, 0xFE, 0xF6 } }, // INDEX_8
        { { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 } }, // MONOCHROME
    },
    0,
    NULL
};

const leScheme GrayScheme = 
{
    {
        { { 0xCF, 0xCF, 0xFF, 0x80, 0x40, 0x0, 0xE1, 0x80, 0xFF, 0xE1, 0xCF, 0x62, 0x12, 0xFF, 0xE1, 0x91 } }, // GS_8
        { { 0xBA, 0xBA, 0xFF, 0x92, 0x49, 0x0, 0xDB, 0x92, 0xFF, 0xDB, 0xBA, 0x6D, 0x3, 0xFF, 0xDB, 0x92 } }, // RGB_332
        { { 0xC67A, 0xC67A, 0xFFFF, 0x8410, 0x4208, 0x0, 0xD71C, 0x8410, 0xFFFF, 0xD71C, 0xC67A, 0x6AED, 0x1F, 0xFFFF, 0xD71C, 0x8C92 } }, // RGB_565
        { { 0xC675, 0xC675, 0xFFFF, 0x8421, 0x4211, 0x1, 0xD739, 0x8421, 0xFFFF, 0xD739, 0xC675, 0x6B1B, 0x3F, 0xFFFF, 0xD739, 0x8CA5 } }, // RGBA_5551
        { { 0xC8D0D4, 0xC8D0D4, 0xFFFFFF, 0x808080, 0x404040, 0x0, 0xD6E3E7, 0x808080, 0xFFFFFF, 0xD6E3E7, 0xC8D0D4, 0x695F6F, 0xFF, 0xFFFFFF, 0xD6E3E7, 0x8C9294 } }, // RGB_888
        { { 0xC8D0D4FF, 0xC8D0D4FF, 0xFFFFFFFF, 0x808080FF, 0x404040FF, 0xFF, 0xD6E3E7FF, 0x808080FF, 0xFFFFFFFF, 0xD6E3E7FF, 0xC8D0D4FF, 0x695F6FFF, 0xFFFF, 0xFFFFFFFF, 0xD6E3E7FF, 0x8C9294FF } }, // RGBA_8888
        { { 0xFFC8D0D4, 0xFFC8D0D4, 0xFFFFFFFF, 0xFF808080, 0xFF404040, 0xFF000000, 0xFFD6E3E7, 0xFF808080, 0xFFFFFFFF, 0xFFD6E3E7, 0xFFC8D0D4, 0xFF695F6F, 0xFF0000FF, 0xFFFFFFFF, 0xFFD6E3E7, 0xFF8C9294 } }, // ARGB_8888
        { { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 } },
        { { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 } },
        { { 0xFC, 0xFC, 0xF, 0x8, 0xED, 0x0, 0xFE, 0x8, 0xF, 0xFE, 0xFC, 0xF0, 0xC, 0xF, 0xFE, 0xF6 } }, // INDEX_8
        { { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 } }, // MONOCHROME
    },
    0,
    NULL
};

const leScheme GreenScheme = 
{
    {
        { { 0xDC, 0xCF, 0xFF, 0x80, 0x40, 0x0, 0xE1, 0x80, 0xFF, 0xE1, 0xCF, 0x0, 0x12, 0xFF, 0xE1, 0x91 } }, // GS_8
        { { 0x7F, 0xBA, 0xFF, 0x92, 0x49, 0x0, 0xDB, 0x92, 0xFF, 0xDB, 0xBA, 0x0, 0x3, 0xFF, 0xDB, 0x92 } }, // RGB_332
        { { 0x67FC, 0xC67A, 0xFFFF, 0x8410, 0x4208, 0x0, 0xD71C, 0x8410, 0xFFFF, 0xD71C, 0xC67A, 0x0, 0x1F, 0xFFFF, 0xD71C, 0x8C92 } }, // RGB_565
        { { 0x67F9, 0xC675, 0xFFFF, 0x8421, 0x4211, 0x1, 0xD739, 0x8421, 0xFFFF, 0xD739, 0xC675, 0x1, 0x3F, 0xFFFF, 0xD739, 0x8CA5 } }, // RGBA_5551
        { { 0x64FFE8, 0xC8D0D4, 0xFFFFFF, 0x808080, 0x404040, 0x0, 0xD6E3E7, 0x808080, 0xFFFFFF, 0xD6E3E7, 0xC8D0D4, 0x0, 0xFF, 0xFFFFFF, 0xD6E3E7, 0x8C9294 } }, // RGB_888
        { { 0x64FFE8FF, 0xC8D0D4FF, 0xFFFFFFFF, 0x808080FF, 0x404040FF, 0xFF, 0xD6E3E7FF, 0x808080FF, 0xFFFFFFFF, 0xD6E3E7FF, 0xC8D0D4FF, 0xFF, 0xFFFF, 0xFFFFFFFF, 0xD6E3E7FF, 0x8C9294FF } }, // RGBA_8888
        { { 0xFF64FFE8, 0xFFC8D0D4, 0xFFFFFFFF, 0xFF808080, 0xFF404040, 0xFF000000, 0xFFD6E3E7, 0xFF808080, 0xFFFFFFFF, 0xFFD6E3E7, 0xFFC8D0D4, 0xFF000000, 0xFF0000FF, 0xFFFFFFFF, 0xFFD6E3E7, 0xFF8C9294 } }, // ARGB_8888
        { { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 } },
        { { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 } },
        { { 0x55, 0xFC, 0xF, 0x8, 0xED, 0x0, 0xFE, 0x8, 0xF, 0xFE, 0xFC, 0x0, 0xC, 0xF, 0xFE, 0xF6 } }, // INDEX_8
        { { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 } }, // MONOCHROME
    },
    0,
    NULL
};

