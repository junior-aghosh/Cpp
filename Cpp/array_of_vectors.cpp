#include<iostream>
#include<vector>
using namespace std;

void print(vector<int> &temp){
    cout << "size: " << temp.size() << " capacity: " << temp.capacity() << endl;
    for(auto element:temp){
        cout << element << " ";
    }
}

int main(){

    /* Array of vectors: N array as input with n size each
    3
    2
    1 2
    3
    1 2 3
    3
    4 5 6
    */

   int N;
   cout << "Enter the number of arrays to input: ";
   cin >> N;
   vector<int> arov[N];
   for(int i=0; i<N; i++){
       int size;
       cout << "enter the size of the array: ";
       cin >> size;
       for(int j=0; j<size; j++){
           int element;
           cout << "enter "<< size << " elements of array: ";
           cin >> element;
           arov[i].push_back(element);
       }arov[i].shrink_to_fit();
    
   }
   for(int i=0; i<N; i++){
       print(arov[i]);
       cout <<endl;
   }

   cout << arov[0][0];
   
  

  return 0;
}