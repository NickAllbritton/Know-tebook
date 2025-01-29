#include "PrimaryWindow.h"

PrimaryWindow::PrimaryWindow()
{
    set_title("Know-tebook");
    maximize();

    set_child(notebook);
}