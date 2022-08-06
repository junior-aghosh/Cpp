#include<iostream>
#include<vector>
using namespace std;

void printvector(vector<vector<int>> &temp){

    //TRAVERSING THROUGH 2D VECTOR USING SHORTCUT

    /*for(auto row: temp){
        for(auto col: row){
            cout << col << "|";
        }
        cout << endl;
    }*/

    //TRAVERSING THROUGH 2D VECTOR USING ITERATORS

    for(auto row=temp.begin(); row < temp.end(); row++){
        for(auto col=row->begin(); col < row->end(); col++){
            cout << *col << "|";
        }cout << endl;
    }
}
int main(){

   //vector<vector<int>> v2D {{1,2},{3,4}};
    //printvector(v2D);

/*    Exercise Problem: Define the 2D vector with different sizes of columns. 
Examples: 

Input : Number of rows : 5 
        Number of columns in rows : 
        2 3 4 5 1
Output : 1 2
         1 2 3
         1 2 3 4
         1 2 3 4 5 
         1
         */


    vector<vector<int>> v2D;

    int rows = 5;
    int columns[]={2,3,4,5,1};

    for(int i=0; i<5; i++){
        int value = columns[i];
        int var=1;
        vector<int> temp;
        for(int j=0; j<value; j++){
            temp.emplace_back(var);
            var += 1;
        }
        v2D.emplace_back(temp);
    }
    printvector(v2D);

    
    cout << v2D.capacity() << " " << v2D.size() << endl;
    v2D.shrink_to_fit();
    cout << endl << v2D.capacity() << " " << v2D.size();
  

  return 0;
}