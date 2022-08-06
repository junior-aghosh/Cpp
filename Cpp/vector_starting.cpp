#include<iostream>
#include<vector>

using namespace std;

void printvector(vector<int> temp){
    for(auto itr =temp.begin(); itr != temp.end(); itr++)
    cout << *itr << "|";
}


int main(){

    vector<int> v;

    vector<int> number (5,10);



    //v.push_back(30);
    //v.push_back(40);
    //v.push_back(100);

    for(int i=1; i<11; i++)
    v.push_back(i*10);
    
    for(int i=0; i<v.size(); i++)
    cout << "v ["<< i << "] : " << v[i] << endl;

    vector<int>::iterator it;
    for(it=v.begin(); it != v.end(); it++)
    cout << "v[] : "<< *it << endl;

    cout << "vector number: " << endl;

    for(auto element:number)
    cout << element << endl;


    swap(v,number);
    cout<<"after vector swaps: "<<endl;
    for(auto element:v)
    cout << element << endl;

    for(auto element:number)
    cout << element << endl;

    cout << "printing through function: ";

    printvector(v);





    return 0;
}