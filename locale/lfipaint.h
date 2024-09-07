#ifndef LFIPAINT_H
#define LFIPAINT_H


/****************************************************************************/


/* This file was created automatically by CatComp.
 * Do NOT edit by hand!
 */


#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif

#ifdef CATCOMP_CODE
#ifndef CATCOMP_BLOCK
#define CATCOMP_ARRAY
#endif
#endif

#ifdef CATCOMP_ARRAY
#ifndef CATCOMP_NUMBERS
#define CATCOMP_NUMBERS
#endif
#ifndef CATCOMP_STRINGS
#define CATCOMP_STRINGS
#endif
#endif

#ifdef CATCOMP_BLOCK
#ifndef CATCOMP_STRINGS
#define CATCOMP_STRINGS
#endif
#endif


/****************************************************************************/


#ifdef CATCOMP_NUMBERS

#define MID_START 0
#define MID_File 1
#define MID_Picture 2
#define MID_Mode 3
#define MID_Brush 4
#define MID_Palette 5
#define MID_Prefs 6
#define MID_Load 7
#define MID_Save 8
#define MID_About 9
#define MID_Quit 10
#define MID_PictureFlip 11
#define MID_PictureFlipHorizontal 12
#define MID_PictureFlipVertical 13
#define MID_PictureSize 14
#define MID_PictureClear 15
#define MID_PictureRotate 16
#define MID_PictureRotateLeft 17
#define MID_PictureRotateRight 18
#define MID_PictureTrim 19
#define MID_PictureScale 20
#define MID_PictureEdgeFilter 21
#define MID_PictureSpare 22
#define MID_ModeColor 23
#define MID_ModeColorizing 24
#define MID_ModeSmooth 25
#define MID_ModeShade 26
#define MID_ModePixelate 27
#define MID_ModeSmear 28
#define MID_ModeShuffle 29
#define MID_BrushLoad 30
#define MID_BrushSave 31
#define MID_BrushUse 32
#define MID_BrushFlip 33
#define MID_BrushRotate 34
#define MID_BrushTilt 35
#define MID_BrushOutline 36
#define MID_BrushHorizontal 37
#define MID_BrushVertical 38
#define MID_BrushScale 39
#define MID_FillColorMode 40
#define MID_FillGradientHorizontal 41
#define MID_FillGradientVertical 42
#define MID_FillBrushStretched 43
#define MID_FillBrushPattern 44
#define MID_ShowCoordinate 45
#define MID_FillMode 46
#define MID_SymmetryTool 47
#define MID_PaletteLoad 48
#define MID_PaletteSave 49
#define MID_PaletteToGray 50
#define MID_PaletteIlluminate 51
#define MID_PaletteEnhanceColors 52
#define MID_PaletteInvertColors 53
#define MID_PaletteTool 54
#define MID_ToolBox 55
#define MID_ToolBoxLeft 56
#define MID_ToolBoxRight 57
#define MID_ToolBoxHideShow 58
#define MID_PrefsCoordinates 59
#define MID_PrefsFillMode 60
#define MID_PrefsSymmetri 61
#define MID_PrefsToolBox 62
#define MID_END 63
#define alart_bt_ok 64
#define alart_bt_cancel 65
#define alart_bt_abort 66
#define alert_bt_top_left 67
#define alert_bt_center 68
#define alert_bt_top_right 69
#define str_failure 70
#define str_unknown_file_format 71
#define str_coded_by 72
#define str_about 73
#define str_enhance_colors 74
#define str_luminate 75
#define str_load_palette 76
#define str_save_palette_as 77
#define str_load_picture 78
#define str_save_picture 79
#define str_load_brush 80
#define str_save_brush 81
#define str_resize_image 82
#define msg_change_image_size 83
#define msg_select_where_to_place_the_image 84
#define ID_END 85

#endif /* CATCOMP_NUMBERS */


/****************************************************************************/



#endif /* LFIPAINT_H */
