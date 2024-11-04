#include <iostream>
#include <ncurses.h>
#include <stdlib.h>
void login() {
  int starx, starty; // i dont know why i put this variables

  // setting the space for the window login
  WINDOW *winlog = newwin(15, 50, 17, 67);
  start_color(); // maybe i will have to change this
  use_default_colors();
  init_pair(1, COLOR_BLACK, COLOR_WHITE);

  // setting the drawing of the window
  box(winlog, 0, 0);
  wbkgd(winlog, COLOR_PAIR(1));

  // setting window objects
  mvwprintw(winlog, 0, 22, "Log In");
  mvwprintw(winlog, 2, 3, "Username\n");
  // mvwprintw(winlog, 3, 3, "|");
  char User[80];
  mvwgetnstr(winlog, 3, 3, User, 30);
  noecho();
  mvwprintw(winlog, 7, 3, "anilist key\n");
  mvwprintw(winlog, 8, 3, "|");
  char *key = new char[1500];

  wgetstr(winlog, key);
  //   finishing the window login
  wbkgdset(stdscr, ' ');
  wrefresh(winlog);
  delwin(winlog);
  getch();
  delete[] key;
  clear();
}
