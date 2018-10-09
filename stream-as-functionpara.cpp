#include <iostream>
#include <fstream>
//How to use stream(ofstream as an example) as a function parameter

//why i have to using std space??
//If you don't want to use std namespace, u haveto add std:: ahead ofstream

void test(std::ofstream &out) ;//remember that you need to declare function in cpp

int main()
{
  std::ofstream out("saf-test");

      test(out);
      out.close();
      return 0;
}

void test(std::ofstream &out)
{
      out << "std you are right" << std::endl;
}
