#ifndef PRIMARY_WINDOW_H
#define PRIMARY_WINDOW_H

#include <gtkmm/window.h>
#include <gtkmm/gestureclick.h>
#include <gtkmm/eventcontrollermotion.h>
#include "Notebook.h"

class PrimaryWindow : public Gtk::Window
{
/***************** Data *********************/
private:
    Glib::RefPtr<Gtk::GestureClick> mouse_press;
// Width, Height definitions might be unnecessary
//    int width; // Window width
//    int height; // Window height
protected:
    Notebook notebook; // Gtk::DrawingArea to store notebook contents

/**************** Behavior ******************/
public:
    PrimaryWindow();

protected:

private:
    void on_notebook_mouse_pressed(int n_press, double x, double y); // click in DrawingArea
    void on_mouse_released(int n_press, double x, double y);
    void on_mouse_motion(double x, double y);
};

#endif