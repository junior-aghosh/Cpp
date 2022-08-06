#include<iostream>
#include<vector>
using namespace std;

void printvector(vector<string> &temp){
    /*for(auto element:temp){
        cout << element << " ";
    }*/

    for(auto i=temp.begin(); i != temp.end(); i++){
        cout << *i << " ";
    }
}

int main(){

    vector<string> days;
    int n;
    cout << "enter the number of string: "; 
    cin >> n;
    for(int i=0; i<n; i++){
        string element;
        cin >> element;
        days.emplace_back(element);
    }
    printvector(days);
  

  return 0;
}