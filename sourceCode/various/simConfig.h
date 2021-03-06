#ifndef SIM_CONFIG_INCLUDED
#define SIM_CONFIG_INCLUDED

#define SIM_FILENAME_OF_USER_SETTINGS_IN_BINARY_FILE "settings.dat"
#define SIM_SYSTEM_DIRECTORY_NAME "system"
#define SIM_CADFILES_DIRECTORY_NAME "cadFiles"
#define SIM_SCENE_EXTENSION "ttt"
#define SIM_MODEL_EXTENSION "ttm"
#define SIM_XR_SCENE_EXTENSION "brs"
#define SIM_XR_MODEL_EXTENSION "brm"
#define SIM_XML_SCENE_EXTENSION "simscene.xml"
#define SIM_XML_MODEL_EXTENSION "simmodel.xml"
#define SIM_MODEL_THUMBNAILFILE_NAME "simModelThumbnails.ttmt"
#define SIM_WEBPAGE_ADDRESS_TXT "www.coppeliarobotics.com"
#define SIM_WEBPAGE_EMAIL_TXT "info@coppeliarobotics.com"
#define SIM_COMPANY_NAME_TXT "Coppelia Robotics GmbH"
#define _SECURE_SCL 0 // Disables the bound check for vectors (a bit faster)
#define SIM_IS_BIT_SET(var,bit) (((var) & (1<<(bit)))!=0)
#define SIM_SET_BIT(var,bit) ((var) |= (1<<(bit)))
#define SIM_CLEAR_BIT(var,bit) ((var) &= (~(1<<(bit))))
#define SIM_TOGGLE_BIT(var,bit) ((var) ^= (1<<(bit)))
#define SIM_SET_CLEAR_BIT(var,bit,on) ((on) ? SIM_SET_BIT((var),(bit)) : SIM_CLEAR_BIT((var),(bit)) )
#define strTranslate(text) text
#define QTPROPERTYBROWSER_COLOR_GREY QColor(244,244,244)
#define QTPROPERTYBROWSER_COLOR_RED QColor(255,240,240)
#define QTPROPERTYBROWSER_COLOR_GREEN QColor(240,255,240)
#define QTPROPERTYBROWSER_COLOR_BLUE QColor(240,240,255)
#define QTPROPERTYBROWSER_COLOR_YELLOW QColor(255,255,240)
#define QTPROPERTYBROWSER_COLOR_CYAN QColor(240,255,255)
#define QTPROPERTYBROWSER_COLOR_PURPLE QColor(255,240,255)

#ifdef WIN_SIM
    #define SIM_LOWCASE_STRING_COMPARE(x,y) _stricmp(x,y)
#else
    #define SIM_LOWCASE_STRING_COMPARE(x,y) strcasecmp(x,y)
#endif

#endif // SIM_CONFIG_INCLUDED
