#include <gtk/gtk.h>

static void activate(GtkApplication* app, gpointer user_data)
{
    GtkWidget* window;  

    window = gtk_application_window_new(app);
    gtk_window_set_title(GTK_WINDOW(window), "Know-tebook");
    gtk_window_maximize(GTK_WINDOW(window));
    gtk_window_present(GTK_WINDOW(window));
}

// try using GtkDrawingArea
// This creates a canvas on which the user can draw. 

// BIG PICTURE
// 1. Create window with default size being maximized but with different settings options stored in XML
// 2. Create a menu at the top file, view, edit
// 3. Create a welcome screen for if the app was opened without giving a file to open
// 4. Create notebook mode with a toolbar on the left and a notebook that is a canvas on which the user can write,type,insert pictures
// 5. Profit? Not really but you get the idea.

int main (int argc, char* argv[]) 
{
    GtkApplication* app;
    int status;

    app = gtk_application_new("beta.knowtebook", G_APPLICATION_DEFAULT_FLAGS);
    g_signal_connect(app, "activate", G_CALLBACK(activate), NULL);
    status = g_application_run(G_APPLICATION(app), argc, argv);
    g_object_unref(app);

    return status;
}
