#include<iostream>
#include<vector>
#include<sstream>
#include<string>
using namespace std;

/*string =  "how do i split in vector"


*/
void split_string(string &line, vector<string> &words_v, char &delim){
    stringstream S(line);
    string temp = "";
    for(char &c:line){
        if(c == delim){
            words_v.push_back(temp);
            temp="";
            continue;
        }
        else{
            temp.push_back(c);
        }
        
    }
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