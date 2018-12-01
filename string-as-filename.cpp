#include <iostream>
#include <cstring>
#include <fstream>
#include <string>
#include <sstream>

//How to attach a string argument with a integer/float/string in a C++ way !!!!!
//The main idea is using stringstream and connnect them by stream
//How convinient c++ is to do this fortran-dirty job!!!!
//If you want to use the method, you need to include <sstream> and <string>
using namespace std;

int main()
{
    int i=10;
    ostringstream jstep;

      jstep << i << "step.dat";

    ofstream out;
    //.open(char),while .str() is a string-type data
    //we can use str.c_str() and strcpy() function to accomplish this data-change
    //char ch[100];
    //string str=jstep.str();
    //strcpy(ch,str.c_str());
    //out.open(ch);
    
    //else way is just using (jstep.str()).c_str() to change datatype!!!!
    out.open((jstep.str()).c_str());
    //How convinient c++ is to do this fortran-dirty job!!!!
    out << "you are right" << endl;
    return 0;
}
