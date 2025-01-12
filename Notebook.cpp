#include "Notebook.h"

void Notebook::clear_surface()
{
    cairo_t* cr;
    cr = cairo_create(surface);
    cairo_set_source_rgb(cr, 1, 1, 1);
    cairo_paint(cr);
    cairo_destroy(cr);
}

void Notebook::resize_cb(GtkWidget* widget, int width, int height, gpointer data)
{
    if(surface)
    {
        cairo_surface_destroy(surface);
        surface = NULL;
    }

    if(gtk_native_get_surface(gtk_widget_get_native(widget)))
    {
        surface = gtk_surface_create_similar_surface(gtk_native_get_surface(gtk_widget_get_native(widget)),
                        CAIRO_CONTENT_COLOR, gtk_widget_get_width(widget), gtk_widget_get_height(widget));
        
        clear_surface();
    }
}

void Notebook::draw_cb(GtkDrawingArea* drawing_area, cairo_t* cr, int width, int height, gpointer data)
{
    
}