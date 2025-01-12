#include "PrimaryWindow.h"
#include <gtkmm/application.h>

// try using GtkDrawingArea
// This creates a canvas on which the user can draw. 

// BIG PICTURE
// 1. Create window with default size being maximized but with different settings options stored in XML
// 2. Create a menu at the top file, view, edit
// 3. Create a welcome screen for if the app was opened without giving a file to open
// 4. Create notebook mode with a toolbar on the left and a notebook that is a canvas on which the user can write,type,insert pictures
// 5. Profit? Not really but you get the idea.

int main(int argc, char* argv[])
{
  auto app = Gtk::Application::create("beta.knowtebook");

  return app->make_window_and_run<PrimaryWindow>(argc, argv);
}
