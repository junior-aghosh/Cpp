#include<iostream>
#include<vector>
#include<sstream>
#include<string>
using namespace std;

void split_string(string &line, vector<string> &words_v, char &delim){
    stringstream S(line);
    string temp = "";
    for(char &c:line){    // ranged based loop to iterate over characters of string
        if(c == delim){    // if space encountered push the temp string in vector and clear the temp
            words_v.push_back(temp);
            temp="";
            continue;
        }
        else{
            temp = temp + c;  // concatenate characters in temp string till the word is formed
        }
    }
    words_v.push_back(temp); // this is to store the last word of the sentence in vector as the condition only checks for space
}

int main(){

    string line;
    vector<string> words_v;
    char delim = ' ';

    getline(cin, line);
    split_string(line, words_v, delim);
    for(auto element:words_v){
        cout << element << endl;
    }

    return 0;
}