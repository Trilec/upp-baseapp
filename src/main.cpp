#include <CtrlLib/CtrlLib.h>
using namespace Upp;

struct BaseApp : TopWindow {
    BaseApp() {
        Title("Upp Base App");
        Sizeable().Zoomable();
    }
};

GUI_APP_MAIN
{
    BaseApp().Run();
}
