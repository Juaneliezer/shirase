#include <iostream>
#include <ncurses.h>
#include <string>
using namespace std;
void login() {
  int starx, starty;
  WINDOW *winlog = newwin(15, 50, 17, 67);
  wborder(winlog, '|', '|', '-', '-', '#', '+', '+', '+');
  mvwprintw(winlog, 0, 22, "Log In");
  mvwprintw(winlog, 2, 3, "Username\n");
  char User[80];
  wgetstr(winlog, User);
  wrefresh(winlog);
}
