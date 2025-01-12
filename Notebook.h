#ifndef NOTEBOOK_H
#define NOTEBOOK_H

#include <gtk/gtk.h>

class Notebook
{
/***************** Data *********************/
public:
    // In the gtk documentation example cairo_surface_t* is declared as static
    // However, static in C in that context means it is visible only in that file
    // In this context, static would mean that each notebook shares a cairo surface
    // I could be mistaken, but I don't think I want that. Likewise for methods
    // TODO: keep an eye out for interesting bugs that may result from this decision
    cairo_surface_t* surface;
private:

/**************** Behavior ******************/
public:
    void clear_surface();
    void resize_cb(GtkWidget* widget, int width, int height, gpointer data);
    void draw_cb(GtkDrawingArea* drawing_area, cairo_t* cr, int width, int height, gpointer data);
private:
};

#endif