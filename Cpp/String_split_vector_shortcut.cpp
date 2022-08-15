#include<iostream>
#include<vector>
#include<sstream>
#include<string>
using namespace std;

int main(){
    string s, tmp;
    getline(cin,s);
    stringstream ss(s);
    vector<string> words;

    while(getline(ss, tmp, ' ')){
        words.push_back(tmp);

    }
    for(auto i = words.begin(); i < words.end(); i++){
        cout << *i << endl;
    }
  

  return 0;
}