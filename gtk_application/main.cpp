#include <gtk/gtk.h>

GtkApplication* application;
GtkWidget* window;

static void GtkOnActivate(GtkApplication *app) 
{
  window = gtk_application_window_new(app);
  gtk_widget_show_all(window);
}

int main (int argc, char** argv)
{
  application = gtk_application_new ("null.null.GtkApplication", G_APPLICATION_FLAGS_NONE);
  g_signal_connect(application, "activate", G_CALLBACK(GtkOnActivate), NULL);
  return g_application_run(G_APPLICATION(application), argc, argv);
}