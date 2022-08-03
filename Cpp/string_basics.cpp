#include<iostream>
#include<sstream>
#include<cstdlib>
using namespace std;

int main(){
    string s = "0710.99";
    
    //using string stream #include<sstrem> 
    //extract string from string variable using <<
    //input converted int value to int varable using >>

    stringstream convertmystring(s);
    float mynum;
    convertmystring >> mynum;

    cout << "String converted to num using sstream: " << mynum <<endl;

    //using stoi() function introduced in C++11 only work if compiler supports C++11

    int mynum1 = stoi(s);
    cout << "string to int using stoi(): " << mynum1 <<endl;

    //using atoi() #include<cstdlib> atoi() function takes a const character array or string literal as an argument and returns its value in an intege

    const char *s1= "0890.11";

    int mynum2 =atoi(s1);
    cout << "string to int using atoi(): " << mynum2 << endl;

    //number to string using to_string()

    float number = 11.909;
    string mystring = to_string(number);
    cout << mystring;


    return 0;
}