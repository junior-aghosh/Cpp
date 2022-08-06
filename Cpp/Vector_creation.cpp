#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> mv={1,2,3,4,5};
    for(int i=6; i<8; i++)
    mv.push_back(i);

    cout << "iterating through vector using begin() and end(): ";
    for(auto iterator=mv.begin(); iterator != mv.end(); iterator++)
    cout << *iterator << " ";
    

    cout << endl << "iterating through vector using rbegin() and rend(): ";
    for(auto iterator=mv.rbegin(); iterator != mv.rend(); iterator++)
    cout << *iterator << " ";


    //
    cout << endl << "the size of vector is: "<< mv.size() << endl;
    if (mv.empty()==false)
    cout << "vector is not empty" << endl;
    else
    cout << "vector is empty" << endl;

    return 0;
}