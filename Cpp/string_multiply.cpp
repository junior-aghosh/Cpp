#include<iostream>
#include<string>
#include<sstream>
using namespace std;

string multiply(string &n,int k){
    string result = "";
    while (k--){
        result = result.append(n);
    }
    return result;
}

int main(){
    string n = "450";
    int k = 4;
    cout << n << " " << k << endl ;
    string out;
    while(k--){
        out = out.append(n);
    }
    cout << out << endl;
    cout << multiply(n,k);
  return 0;
}