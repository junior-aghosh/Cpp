#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(){
    vector<char> str;
    string str(str.begin(), str.end());

    str.emplace_back("s");
    str.emplace_back("t");
    str.emplace_back("r");
    str.emplace_back("i");
    str.emplace_back("n");   
    str.emplace_back("g");

    int n = str.size();

    for(int i=0; i<str.size(); i++)
    cout << str[i] << endl;


    cout << "more: " << endl;

    


  return 0;
}