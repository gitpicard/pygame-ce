/* Auto generated file: with make_docs.py .  Docs go in docs/reST/ref/ . */
#define DOC_FREETYPE "Enhanced pygame module for loading and rendering computer fonts"
#define DOC_FREETYPE_GETERROR "get_error() -> str\nget_error() -> None\nReturn the latest FreeType error"
#define DOC_FREETYPE_GETVERSION "get_version(linked=True) -> (int, int, int)\nReturn the FreeType version"
#define DOC_FREETYPE_INIT "init(cache_size=64, resolution=72) -> None\nInitialize the underlying FreeType library."
#define DOC_FREETYPE_QUIT "quit() -> None\nShut down the underlying FreeType library."
#define DOC_FREETYPE_GETINIT "get_init() -> bool\nReturns True if the FreeType module is currently initialized."
#define DOC_FREETYPE_WASINIT "was_init() -> bool\nDEPRECATED: Use get_init() instead."
#define DOC_FREETYPE_GETCACHESIZE "get_cache_size() -> long\nReturn the glyph case size"
#define DOC_FREETYPE_GETDEFAULTRESOLUTION "get_default_resolution() -> long\nReturn the default pixel size in dots per inch"
#define DOC_FREETYPE_SETDEFAULTRESOLUTION "set_default_resolution(resolution, /)\nSet the default pixel size in dots per inch for the module"
#define DOC_FREETYPE_SYSFONT "SysFont(name, size, bold=False, italic=False) -> Font\ncreate a Font object from the system fonts"
#define DOC_FREETYPE_GETDEFAULTFONT "get_default_font() -> string\nGet the filename of the default font"
#define DOC_FREETYPE_FONT "Font(file, size=0, font_index=0, resolution=0, ucs4=False) -> Font\nFont(pathlib.Path) -> Font\nCreate a new Font instance from a supported font file."
#define DOC_FREETYPE_FONT_NAME "name -> string\nProper font name."
#define DOC_FREETYPE_FONT_STYLENAME "style_name -> str\nGets the font's style_name."
#define DOC_FREETYPE_FONT_PATH "path -> unicode\nFont file path"
#define DOC_FREETYPE_FONT_SIZE "size -> float\nsize -> (float, float)\nThe default point size used in rendering"
#define DOC_FREETYPE_FONT_GETRECT "get_rect(text, style=STYLE_DEFAULT, rotation=0, size=0) -> rect\nReturn the size and offset of rendered text"
#define DOC_FREETYPE_FONT_GETMETRICS "get_metrics(text, size=0) -> [(...), ...]\nReturn the glyph metrics for the given text"
#define DOC_FREETYPE_FONT_HEIGHT "height -> int\nThe unscaled height of the font in font units"
#define DOC_FREETYPE_FONT_ASCENDER "ascender -> int\nThe unscaled ascent of the font in font units"
#define DOC_FREETYPE_FONT_DESCENDER "descender -> int\nThe unscaled descent of the font in font units"
#define DOC_FREETYPE_FONT_GETSIZEDASCENDER "get_sized_ascender(size=0, /) -> int\nThe scaled ascent of the font in pixels"
#define DOC_FREETYPE_FONT_GETSIZEDDESCENDER "get_sized_descender(size=0, /) -> int\nThe scaled descent of the font in pixels"
#define DOC_FREETYPE_FONT_GETSIZEDHEIGHT "get_sized_height(size=0, /) -> int\nThe scaled height of the font in pixels"
#define DOC_FREETYPE_FONT_GETSIZEDGLYPHHEIGHT "get_sized_glyph_height(size=0, /) -> int\nThe scaled bounding box height of the font in pixels"
#define DOC_FREETYPE_FONT_GETSIZES "get_sizes() -> [(int, int, int, float, float), ...]\nget_sizes() -> []\nreturn the available sizes of embedded bitmaps"
#define DOC_FREETYPE_FONT_RENDER "render(text, fgcolor=None, bgcolor=None, style=STYLE_DEFAULT, rotation=0, size=0) -> (Surface, Rect)\nReturn rendered text as a surface"
#define DOC_FREETYPE_FONT_RENDERTO "render_to(surf, dest, text, fgcolor=None, bgcolor=None, style=STYLE_DEFAULT, rotation=0, size=0) -> Rect\nRender text onto an existing surface"
#define DOC_FREETYPE_FONT_RENDERRAW "render_raw(text, style=STYLE_DEFAULT, rotation=0, size=0, invert=False) -> (bytes, (int, int))\nReturn rendered text as a string of bytes"
#define DOC_FREETYPE_FONT_RENDERRAWTO "render_raw_to(array, text, dest=None, style=STYLE_DEFAULT, rotation=0, size=0, invert=False) -> Rect\nRender text into an array of ints"
#define DOC_FREETYPE_FONT_STYLE "style -> int\nThe font's style flags"
#define DOC_FREETYPE_FONT_UNDERLINE "underline -> bool\nThe state of the font's underline style flag"
#define DOC_FREETYPE_FONT_STRONG "strong -> bool\nThe state of the font's strong style flag"
#define DOC_FREETYPE_FONT_OBLIQUE "oblique -> bool\nThe state of the font's oblique style flag"
#define DOC_FREETYPE_FONT_WIDE "wide -> bool\nThe state of the font's wide style flag"
#define DOC_FREETYPE_FONT_STRENGTH "strength -> float\nThe strength associated with the strong or wide font styles"
#define DOC_FREETYPE_FONT_UNDERLINEADJUSTMENT "underline_adjustment -> float\nAdjustment factor for the underline position"
#define DOC_FREETYPE_FONT_FIXEDWIDTH "fixed_width -> bool\nGets whether the font is fixed-width"
#define DOC_FREETYPE_FONT_FIXEDSIZES "fixed_sizes -> int\nthe number of available bitmap sizes for the font"
#define DOC_FREETYPE_FONT_SCALABLE "scalable -> bool\nGets whether the font is scalable"
#define DOC_FREETYPE_FONT_USEBITMAPSTRIKES "use_bitmap_strikes -> bool\nallow the use of embedded bitmaps in an outline font file"
#define DOC_FREETYPE_FONT_ANTIALIASED "antialiased -> bool\nFont anti-aliasing mode"
#define DOC_FREETYPE_FONT_KERNING "kerning -> bool\nCharacter kerning mode"
#define DOC_FREETYPE_FONT_VERTICAL "vertical -> bool\nFont vertical mode"
#define DOC_FREETYPE_FONT_ROTATION "rotation -> int\ntext rotation in degrees counterclockwise"
#define DOC_FREETYPE_FONT_FGCOLOR "fgcolor -> Color\ndefault foreground color"
#define DOC_FREETYPE_FONT_BGCOLOR "bgcolor -> Color\ndefault background color"
#define DOC_FREETYPE_FONT_ORIGIN "origin -> bool\nFont render to text origin mode"
#define DOC_FREETYPE_FONT_PAD "pad -> bool\npadded boundary mode"
#define DOC_FREETYPE_FONT_UCS4 "ucs4 -> bool\nEnable UCS-4 mode"
#define DOC_FREETYPE_FONT_RESOLUTION "resolution -> int\nPixel resolution in dots per inch"
