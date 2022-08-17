#include<iostream>
using namespace std;

int main(){

// char to int conversion - typecasting
    char c = 'A';
    char b = '1';
    cout << int(c) << endl; // Char is stored as ASCII so type casting prints the ascii value
    cout << (int(b)-48);  // subtract 48 from ascii to get the actual integer
    cout << b -'0';
    return 0;
}