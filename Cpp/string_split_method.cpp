#include<iostream>
using namespace std;

int main(){

    string sentence = "Hello this program splits the string";
    string word = "";

    for(char& c:sentence){
      if(c == ' '){
        cout << word << endl;
        word = "";
      }
      else{
        word = word + c;
      }
    }
    cout << word << endl;    // because last character is not space! (/0)

  return 0;
}