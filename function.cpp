//this function read readme.md and returns group member names

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void display(string filename) {
  string line;
  ifstream myfile (filename);
  if (myfile.is_open()) {
    getline (myfile,line);
    getline (myfile,line);
    cout << line << '\n';
    getline (myfile,line);
    cout << line << '\n';
    getline (myfile,line);
    cout << line << '\n';
    myfile.close();
  }
}
