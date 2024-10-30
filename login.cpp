#include <ncurses.h>
void login() {
  int starx, starty;
  WINDOW *winlog = newwin(15, 50, 17, 67);
  box(winlog, 0, 0);
  start_color();
  init_pair(1, COLOR_MAGENTA, COLOR_CYAN);
  COLOR_PAIR(1);
  mvwprintw(winlog, 0, 22, "Log In");
  mvwprintw(winlog, 2, 3, "Username\n");
  mvwprintw(winlog, 3, 3, "|");
  char User[80];
  wgetstr(winlog, User);
  noecho();
  mvwprintw(winlog, 7, 3, "anilist key\n");
  mvwprintw(winlog, 8, 3, "|");
  char key[120];
  wgetstr(winlog, key);
  wrefresh(winlog);
}
