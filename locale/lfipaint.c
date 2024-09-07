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


#ifdef CATCOMP_STRINGS

#define MID_START_STR ""
#define MID_File_STR "File"
#define MID_Picture_STR "Picture"
#define MID_Mode_STR "Mode"
#define MID_Brush_STR "Brush"
#define MID_Palette_STR "Palette"
#define MID_Prefs_STR "Prefs"
#define MID_Load_STR "Load"
#define MID_Save_STR "Save"
#define MID_About_STR "About"
#define MID_Quit_STR "Quit"
#define MID_PictureFlip_STR "Flip"
#define MID_PictureFlipHorizontal_STR "Horizontal"
#define MID_PictureFlipVertical_STR "Vertical"
#define MID_PictureSize_STR "Size"
#define MID_PictureClear_STR "Clear"
#define MID_PictureRotate_STR "Rotate"
#define MID_PictureRotateLeft_STR "Rotate Left"
#define MID_PictureRotateRight_STR "Rotate Right"
#define MID_PictureTrim_STR "Trim"
#define MID_PictureScale_STR "Scale"
#define MID_PictureEdgeFilter_STR "Edge filter"
#define MID_PictureSpare_STR "Spare"
#define MID_ModeColor_STR "Color"
#define MID_ModeColorizing_STR "Colorizing"
#define MID_ModeSmooth_STR "Smooth"
#define MID_ModeShade_STR "Shade"
#define MID_ModePixelate_STR "Pixelate"
#define MID_ModeSmear_STR "Smear"
#define MID_ModeShuffle_STR "Shuffle"
#define MID_BrushLoad_STR "Load Brush"
#define MID_BrushSave_STR "Save Brush"
#define MID_BrushUse_STR "Use Brush"
#define MID_BrushFlip_STR "Flip brush"
#define MID_BrushRotate_STR "Rotate brush"
#define MID_BrushTilt_STR "Tilt"
#define MID_BrushOutline_STR "Outline"
#define MID_BrushHorizontal_STR "Horizontal"
#define MID_BrushVertical_STR "Vertical"
#define MID_BrushScale_STR "Scale"
#define MID_FillColorMode_STR "Color Mode"
#define MID_FillGradientHorizontal_STR "Gradient Horizontal"
#define MID_FillGradientVertical_STR "Gradient Vertical"
#define MID_FillBrushStretched_STR "Brush stretched"
#define MID_FillBrushPattern_STR "Brush pattern"
#define MID_ShowCoordinate_STR "Show coordinate"
#define MID_FillMode_STR "Fill mode"
#define MID_SymmetryTool_STR "Symmetry tool"
#define MID_PaletteLoad_STR "Load Palette"
#define MID_PaletteSave_STR "Save Palette"
#define MID_PaletteToGray_STR "Palette to gray"
#define MID_PaletteIlluminate_STR "Illuminate"
#define MID_PaletteEnhanceColors_STR "Enhance colors"
#define MID_PaletteInvertColors_STR "Invert colors"
#define MID_PaletteTool_STR "Palette tool"
#define MID_ToolBox_STR "Toolbox"
#define MID_ToolBoxLeft_STR "Left"
#define MID_ToolBoxRight_STR "Right"
#define MID_ToolBoxHideShow_STR "Hide/Show"
#define MID_PrefsCoordinates_STR "Coordinates"
#define MID_PrefsFillMode_STR "Fill mode"
#define MID_PrefsSymmetri_STR "Symmetry"
#define MID_PrefsToolBox_STR "Toolbox"
#define MID_END_STR ""
#define alart_bt_ok_STR "_Ok"
#define alart_bt_cancel_STR "_Cancel"
#define alart_bt_abort_STR "_Abort"
#define alert_bt_top_left_STR "top left"
#define alert_bt_center_STR "center"
#define alert_bt_top_right_STR "top right"
#define str_failure_STR "Failure"
#define str_unknown_file_format_STR "Unknown file format"
#define str_coded_by_STR "Coded by"
#define str_about_STR "About"
#define str_enhance_colors_STR "Enhance colors"
#define str_luminate_STR "Luminate"
#define str_load_palette_STR "Load palette"
#define str_save_palette_as_STR "Save palette as"
#define str_load_picture_STR "Load picture"
#define str_save_picture_STR "Save picture"
#define str_load_brush_STR "Load brush"
#define str_save_brush_STR "Save brush"
#define str_resize_image_STR "Resize image"
#define msg_change_image_size_STR "Image size w,h"
#define msg_select_where_to_place_the_image_STR "Select where to place the image"
#define ID_END_STR "Size of locale"

#endif /* CATCOMP_STRINGS */


/****************************************************************************/


#ifdef CATCOMP_ARRAY

struct CatCompArrayType
{
    LONG         cca_ID;
    CONST_STRPTR cca_Str;
};

STATIC CONST struct CatCompArrayType CatCompArray[] =
{
    {MID_START,(CONST_STRPTR)MID_START_STR},
    {MID_File,(CONST_STRPTR)MID_File_STR},
    {MID_Picture,(CONST_STRPTR)MID_Picture_STR},
    {MID_Mode,(CONST_STRPTR)MID_Mode_STR},
    {MID_Brush,(CONST_STRPTR)MID_Brush_STR},
    {MID_Palette,(CONST_STRPTR)MID_Palette_STR},
    {MID_Prefs,(CONST_STRPTR)MID_Prefs_STR},
    {MID_Load,(CONST_STRPTR)MID_Load_STR},
    {MID_Save,(CONST_STRPTR)MID_Save_STR},
    {MID_About,(CONST_STRPTR)MID_About_STR},
    {MID_Quit,(CONST_STRPTR)MID_Quit_STR},
    {MID_PictureFlip,(CONST_STRPTR)MID_PictureFlip_STR},
    {MID_PictureFlipHorizontal,(CONST_STRPTR)MID_PictureFlipHorizontal_STR},
    {MID_PictureFlipVertical,(CONST_STRPTR)MID_PictureFlipVertical_STR},
    {MID_PictureSize,(CONST_STRPTR)MID_PictureSize_STR},
    {MID_PictureClear,(CONST_STRPTR)MID_PictureClear_STR},
    {MID_PictureRotate,(CONST_STRPTR)MID_PictureRotate_STR},
    {MID_PictureRotateLeft,(CONST_STRPTR)MID_PictureRotateLeft_STR},
    {MID_PictureRotateRight,(CONST_STRPTR)MID_PictureRotateRight_STR},
    {MID_PictureTrim,(CONST_STRPTR)MID_PictureTrim_STR},
    {MID_PictureScale,(CONST_STRPTR)MID_PictureScale_STR},
    {MID_PictureEdgeFilter,(CONST_STRPTR)MID_PictureEdgeFilter_STR},
    {MID_PictureSpare,(CONST_STRPTR)MID_PictureSpare_STR},
    {MID_ModeColor,(CONST_STRPTR)MID_ModeColor_STR},
    {MID_ModeColorizing,(CONST_STRPTR)MID_ModeColorizing_STR},
    {MID_ModeSmooth,(CONST_STRPTR)MID_ModeSmooth_STR},
    {MID_ModeShade,(CONST_STRPTR)MID_ModeShade_STR},
    {MID_ModePixelate,(CONST_STRPTR)MID_ModePixelate_STR},
    {MID_ModeSmear,(CONST_STRPTR)MID_ModeSmear_STR},
    {MID_ModeShuffle,(CONST_STRPTR)MID_ModeShuffle_STR},
    {MID_BrushLoad,(CONST_STRPTR)MID_BrushLoad_STR},
    {MID_BrushSave,(CONST_STRPTR)MID_BrushSave_STR},
    {MID_BrushUse,(CONST_STRPTR)MID_BrushUse_STR},
    {MID_BrushFlip,(CONST_STRPTR)MID_BrushFlip_STR},
    {MID_BrushRotate,(CONST_STRPTR)MID_BrushRotate_STR},
    {MID_BrushTilt,(CONST_STRPTR)MID_BrushTilt_STR},
    {MID_BrushOutline,(CONST_STRPTR)MID_BrushOutline_STR},
    {MID_BrushHorizontal,(CONST_STRPTR)MID_BrushHorizontal_STR},
    {MID_BrushVertical,(CONST_STRPTR)MID_BrushVertical_STR},
    {MID_BrushScale,(CONST_STRPTR)MID_BrushScale_STR},
    {MID_FillColorMode,(CONST_STRPTR)MID_FillColorMode_STR},
    {MID_FillGradientHorizontal,(CONST_STRPTR)MID_FillGradientHorizontal_STR},
    {MID_FillGradientVertical,(CONST_STRPTR)MID_FillGradientVertical_STR},
    {MID_FillBrushStretched,(CONST_STRPTR)MID_FillBrushStretched_STR},
    {MID_FillBrushPattern,(CONST_STRPTR)MID_FillBrushPattern_STR},
    {MID_ShowCoordinate,(CONST_STRPTR)MID_ShowCoordinate_STR},
    {MID_FillMode,(CONST_STRPTR)MID_FillMode_STR},
    {MID_SymmetryTool,(CONST_STRPTR)MID_SymmetryTool_STR},
    {MID_PaletteLoad,(CONST_STRPTR)MID_PaletteLoad_STR},
    {MID_PaletteSave,(CONST_STRPTR)MID_PaletteSave_STR},
    {MID_PaletteToGray,(CONST_STRPTR)MID_PaletteToGray_STR},
    {MID_PaletteIlluminate,(CONST_STRPTR)MID_PaletteIlluminate_STR},
    {MID_PaletteEnhanceColors,(CONST_STRPTR)MID_PaletteEnhanceColors_STR},
    {MID_PaletteInvertColors,(CONST_STRPTR)MID_PaletteInvertColors_STR},
    {MID_PaletteTool,(CONST_STRPTR)MID_PaletteTool_STR},
    {MID_ToolBox,(CONST_STRPTR)MID_ToolBox_STR},
    {MID_ToolBoxLeft,(CONST_STRPTR)MID_ToolBoxLeft_STR},
    {MID_ToolBoxRight,(CONST_STRPTR)MID_ToolBoxRight_STR},
    {MID_ToolBoxHideShow,(CONST_STRPTR)MID_ToolBoxHideShow_STR},
    {MID_PrefsCoordinates,(CONST_STRPTR)MID_PrefsCoordinates_STR},
    {MID_PrefsFillMode,(CONST_STRPTR)MID_PrefsFillMode_STR},
    {MID_PrefsSymmetri,(CONST_STRPTR)MID_PrefsSymmetri_STR},
    {MID_PrefsToolBox,(CONST_STRPTR)MID_PrefsToolBox_STR},
    {MID_END,(CONST_STRPTR)MID_END_STR},
    {alart_bt_ok,(CONST_STRPTR)alart_bt_ok_STR},
    {alart_bt_cancel,(CONST_STRPTR)alart_bt_cancel_STR},
    {alart_bt_abort,(CONST_STRPTR)alart_bt_abort_STR},
    {alert_bt_top_left,(CONST_STRPTR)alert_bt_top_left_STR},
    {alert_bt_center,(CONST_STRPTR)alert_bt_center_STR},
    {alert_bt_top_right,(CONST_STRPTR)alert_bt_top_right_STR},
    {str_failure,(CONST_STRPTR)str_failure_STR},
    {str_unknown_file_format,(CONST_STRPTR)str_unknown_file_format_STR},
    {str_coded_by,(CONST_STRPTR)str_coded_by_STR},
    {str_about,(CONST_STRPTR)str_about_STR},
    {str_enhance_colors,(CONST_STRPTR)str_enhance_colors_STR},
    {str_luminate,(CONST_STRPTR)str_luminate_STR},
    {str_load_palette,(CONST_STRPTR)str_load_palette_STR},
    {str_save_palette_as,(CONST_STRPTR)str_save_palette_as_STR},
    {str_load_picture,(CONST_STRPTR)str_load_picture_STR},
    {str_save_picture,(CONST_STRPTR)str_save_picture_STR},
    {str_load_brush,(CONST_STRPTR)str_load_brush_STR},
    {str_save_brush,(CONST_STRPTR)str_save_brush_STR},
    {str_resize_image,(CONST_STRPTR)str_resize_image_STR},
    {msg_change_image_size,(CONST_STRPTR)msg_change_image_size_STR},
    {msg_select_where_to_place_the_image,(CONST_STRPTR)msg_select_where_to_place_the_image_STR},
    {ID_END,(CONST_STRPTR)ID_END_STR},
};

#endif /* CATCOMP_ARRAY */


/****************************************************************************/



#endif /* LFIPAINT_H */
