#include <fstream>
#include <iostream>
#include <string>

//how to get strings from datafile which are separated by blank
using namespace std;

int main()
{
  ifstream fin("test.dat");
  int i=1;
  string species;

  while((fin.peek() != '\n'))
    // fin.peek() will check the string that you may read
  {
    i++;
    fin >> species;// as species is a string type, you will get a string between blank.
    cout << species<< endl;
  }
  return 0;
}
