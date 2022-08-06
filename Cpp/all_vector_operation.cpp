#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> numbers = {1,2,3,4,5};
    cout << numbers.front() << endl << numbers.back() << endl;
    cout << "size: " << numbers.size() << endl << "capacity: " << numbers.capacity() << endl;
    // size denotes the number of elements currently in the vector
    // while capacity denotes the number of elements the vector can hold
    cout << "pushing 1 more element beyond the current capacity of vector doubles its capcity\n" ;
    //decreasing size of vector does not reduce capacity
    numbers.push_back(0);
    cout << "size: " << numbers.size() << endl << "capacity: " << numbers.capacity() << endl;

    numbers.push_back(0);
    numbers.push_back(0);
    numbers.push_back(0);
    numbers.push_back(0);
    numbers.push_back(0);
    numbers.pop_back();
    numbers.pop_back();
    numbers.pop_back();
    numbers.pop_back();
    numbers.pop_back();
    numbers.shrink_to_fit();
    cout << "size: " << numbers.size() << endl << "capacity: " << numbers.capacity() << endl;


    vector<int> v1={2,4,6,8};
    v1.insert(v1.begin(),0);
    cout << endl << v1[0] << " " << v1[1] << " " << v1[2];
    v1.erase(v1.begin());
    cout << endl << v1[0];

    




    
  return 0;
}