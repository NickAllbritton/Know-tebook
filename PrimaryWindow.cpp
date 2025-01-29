#include "PrimaryWindow.h"
#include <map>

namespace
{
    std::map<unsigned int, Glib::ustring> mouse_buttons
    {
        {0, "No button"},
        {GDK_BUTTON_PRIMARY, "Primary"},
        {GDK_BUTTON_MIDDLE, "Middle"},
        {GDK_BUTTON_SECONDARY, "Secondary"}
    };
}

PrimaryWindow::PrimaryWindow()
{
    set_title("Know-tebook");
    maximize();

    set_child(notebook);

    /******************** Mouse events ***********************/
    auto motion_controller = Gtk::EventControllerMotion::create();
    motion_controller->signal_motion().connect(sigc::mem_fun(*this, &PrimaryWindow::on_mouse_motion));
    add_controller(motion_controller);

    mouse_press = Gtk::GestureClick::create();
    mouse_press->set_button(0); // All mouse buttons
    mouse_press->signal_pressed().connect(sigc::mem_fun(*this, &PrimaryWindow::on_notebook_mouse_pressed));
    add_controller(mouse_press);

    auto mouse_click = Gtk::GestureClick::create();
    mouse_click->set_button(GDK_BUTTON_PRIMARY); // left click
    mouse_click->signal_pressed().connect(sigc::mem_fun(*this, &PrimaryWindow::on_mouse_released));
    /*********************************************************/

}

void PrimaryWindow::on_mouse_motion(double x, double y)
{

}

void PrimaryWindow::on_notebook_mouse_pressed(int n_press, double x, double y)
{

}

void PrimaryWindow::on_mouse_released(int n_press, double x, double y)
{

}