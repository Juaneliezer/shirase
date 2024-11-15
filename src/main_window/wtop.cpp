#include <ncurses.h>

void toptions();
void wtop() {
  // init the top window
  WINDOW *wtop = newwin(2, 187, 0, 0);
  init_pair(2, COLOR_WHITE, COLOR_BLUE);
  wbkgd(wtop, COLOR_PAIR(2));
  // configuring the screen
  mvwprintw(wtop, 0, 0, "Shirase");
  mvwprintw(wtop, 1, 0, "F1:Watching");
  mvwprintw(wtop, 1, 15, "F2:To watch");
  mvwprintw(wtop, 1, 30, "F3:Dropped");
  // funoptions();

  int chtop = wgetch(wtop);
  switch (chtop) {
  default:
  case KEY_F(1):
    // watching();
    break;

  case KEY_F(2):
    // watch();
    break;

  case KEY_F(3):
    // dropped();
    break;
  }

  wrefresh(wtop);
}
