#include "Notebook.h"
#include <cairomm/context.h>

Notebook::Notebook()
{
    set_draw_func(sigc::mem_fun(*this, &Notebook::on_draw));
}

Notebook::~Notebook()
{
    // TODO: Free memory
}

void Notebook::on_draw(const Cairo::RefPtr<Cairo::Context>& cr, int width, int height)
{
    // TODO: Use a grid or other padding structure offered by GTK/GTKmm to place the notebook
    // coordinates for the center of the notebook
    int xc = width / 2;
    int yc = height/ 2;

    cr->set_line_width(1.0);

    cr->set_source_rgb(0.8, 0.0, 0.0);

    // Set paths to be painted
    cr->move_to(0, 0);
    cr->line_to(xc, yc);
    cr->line_to(0, height);
    cr->move_to(xc, yc);
    cr->line_to(width, yc);
    // Paint the strokes along the given path
    cr->stroke();
}