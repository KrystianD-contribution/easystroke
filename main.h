#ifndef __MAIN_H__
#define __MAIN_H__

#include <string>

#define P_QUIT 'q'
#define P_REGRAB 'g'
#define P_SUSPEND_GRAB 's'
#define P_RESTORE_GRAB 'r'
#define P_UPDATE_CURRENT 'u'
#define P_UPDATE_TRACE 't'

void send(char);
extern std::string config_dir;
extern int verbosity;
extern bool experimental;

void clear_mods();

extern "C" {
struct _XDisplay;
typedef struct _XDisplay Display;
}

extern Display *dpy;
#define ROOT (DefaultRootWindow(dpy))

class Win;
extern Win* win;

#endif
