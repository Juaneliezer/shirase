#include <ncurses.h>
#include <string>
void login() {
  int starx, starty;
  WINDOW *winlog = newwin(474, 264, 5, 5);
  wborder(winlog, '|', '|', '-', '-', '#', '+', '+', '+');
  wrefresh(winlog);
}
