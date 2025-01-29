#ifndef PRIMARY_WINDOW_H
#define PRIMARY_WINDOW_H

#include <gtkmm/window.h>
#include "Notebook.h"

class PrimaryWindow : public Gtk::Window
{
/***************** Data *********************/
protected:
    Notebook notebook; // Gtk::DrawingArea to store notebook contents

/**************** Behavior ******************/
public:
    PrimaryWindow();
};

#endif