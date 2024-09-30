//Jefferson Zheng
//Lab 3
//September 30, 2024

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
  //Fill With '#'
  cout << setfill('#');
  cout << '#' << setw(85) << '#' << endl;

  //Fill With Spaces, Add Text
  cout << setfill(' ');
  cout << '#' << setw(85) << '#' << endl;
  cout << '#' << setw(58) << "Ways to access the Task Manager on your Windows computer:" << setw(27) << '#' << endl;
  cout << '#' << setw(85) << '#' << endl;
  cout << '#' << setw(59) << "Press the key combination Ctrl + Shift + Escape" << setw(26) << '#' << endl;
  cout << '#' << setw(85) << '#' << endl;
  cout << '#' << setw(83) << "Press the key combination Ctrl + Alt + Delete and select \"Task Manager\"" << setw(2) << '#' << endl;
  cout << '#' << setw(85) << '#' << endl;
  cout << '#' << setw(64) << "Type \"Task Manager\" in the Windows Start menu search" << setw(21) << '#' << endl;
  cout << '#' << setw(85) << '#' << endl;

  //Fill With '#'
  cout << setfill('#');
  cout << '#' << setw(85) << '#' << endl;

  //Exits Successfully
  return 0;
}

/*
######################################################################################
#                                                                                    #
# Ways to access the Task Manager on your Windows computer:                          #
#                                                                                    #
#            Press the key combination Ctrl + Shift + Escape                         #
#                                                                                    #
#            Press the key combination Ctrl + Alt + Delete and select "Task Manager" #
#                                                                                    #
#            Type "Task Manager" in the Windows Start menu search                    #
#                                                                                    #
######################################################################################
*/