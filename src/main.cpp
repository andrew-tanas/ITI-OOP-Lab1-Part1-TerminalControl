#include <iostream>

#include "../include/terminalControl.hpp"

using namespace std;
using namespace terminalControl;
int main() {
  if (!bInitTerminal()) {
    cout << "Terminal Initialization failed \n";
    return 1;
  }
  vClearScreen();
  // while(1);
  //   std::cout << "Hello, World!\n";
  // cout << "\033[31;44m";
  // cout << "\033[6;11H";
  // cout << "Hello, World!\n";
  char* text = "Hello, World!";
  vPrintColoredTextAtPosition(5, 20, text, 32, 45);
  vPrintColoredTextAtPosition(6, 20, text, 33, 46);
  vPrintColoredTextAtPosition(7, 20, text, 34, 47);
  vPrintColoredTextAtPosition(8, 20, text, 35, 48);
  // vResetTerminal();
  //   cout << "\033[0m";

  return 0;
}