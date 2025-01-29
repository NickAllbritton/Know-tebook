#ifndef NOTEBOOK_H
#define NOTEBOOK_H

#include <gtkmm/drawingarea.h>

class Notebook : public Gtk::DrawingArea
{
/***************** Data *********************/
public:
private:

/**************** Behavior ******************/
public:
    Notebook();
    virtual ~Notebook();
protected:
    void on_draw(const Cairo::RefPtr<Cairo::Context>& cr, int width, int height);
private:
};

#endif