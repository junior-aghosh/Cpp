#include<iostream>
#include<vector>
using namespace std;

void printvector(vector<int> &temp){   //if used without & it creates a copy of vector during function call and copying takes O(n) time complexity
    cout << endl << "size: " << temp.size() << endl;
    for(int i=0; i<temp.size(); i++){
        cout << temp[i] << " ";
    }
}

int main(){

    vector<int> v1(3);   // Initializing with n inserts 0 in all indexes of vector
    v1.push_back(1);
    printvector(v1);
    
    cout << endl;

    vector<int> v2 = v1; // O(n) complexity as it's passing the actual vector copy
    v2.push_back(10);
    printvector(v1);
    printvector(v2);
    
  return 0;
}