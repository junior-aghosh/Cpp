#include<iostream>
#include<utility>
#include<vector>
using namespace std;

// using auto keyword there is no need for declaring the iterator like container :: iterator it!!

int main(){

    vector<pair<int,int>> v_p = {{1,2},{3,4},{5,6}};
    for(pair<int,int> &value : v_p){   // or just use auto keyword!!!
        cout << value.first << " " << value.second << " | ";
    }

    /*vector<pair<int,int>> :: iterator it;
    for(it=v_p.begin(); it !=v_p.end(); it++){
        cout << (*it).first << " " << (*it).second<< " "<< endl;
        // "it" is a pointer pointing to the location of pairs
        // *it is the value dereferenced for pair and first and second can be used to view elements
        //cout << it->first << " " << it->second;
    }*/
    cout << endl << "range based loop reference: " << endl;
    vector <int> vec ={1,2,3,4};
    for(auto value : vec){
        value++;
        cout << value <<" ";
    }
    // above method takes a copy of vector elements in value!!!! more space complexity!!!
    // using reference & the actual values are used in below case. any change will refelct in actual vector 
    cout <<  "orginal ";
    for(auto &value : vec){
    cout << value << " ";
    }

  

  return 0;
}