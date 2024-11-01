#include "login.cpp"
#include <vector>

#include <iostream>
#include <ncurses.h>
using namespace std;
int main() {
  int ch;

  initscr();

  // init_pair(2, COLOR_WHITE, COLOR_BLACK);
  raw();
  keypad(stdscr, TRUE);

  ch = getch();

  if (ch == KEY_F(3)) {
    printw("F3 key pressed");
    login();
  }

  refresh();
  getch();

  endwin();
}
