#pragma once

GtkTextBuffer *buffer;
char row[52];
GtkWidget *text_view;

void activate(GtkApplication* app, gpointer data);
gboolean add_row(void* data);
int main(int argc, char **argv);
