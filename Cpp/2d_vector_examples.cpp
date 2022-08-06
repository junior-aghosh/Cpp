#include<iostream>
#include<vector>
using namespace std;

void printvector(vector<int> &temp){
    for(auto element: temp)
    cout << element << "|";
}
/*void print2dvector(vector<vector<int>> &temp){
    for(auto row:temp){
        for(auto col:row){
            cout << col << "|";
        }cout << endl;
    }
}*/
void print2dvector(vector<vector<int>> &temp){
    for(auto i=0; i < temp.size(); i++){
        cout << "size: " << temp[i].size() << " capacity: " << temp[i].capacity() << endl;
        for(auto j=0; j < temp[i].size(); j++)
            cout << temp[i][j] << "|";
        cout << endl;
    }

    }

int main(){

    vector<int> v(4,9);
    vector<vector<int>> matrix(4,vector<int> (5,0));
    printvector(v);
    cout << endl << endl;
    print2dvector(matrix);

    cout << endl << matrix[0][0] << endl;

    matrix[0].push_back(3);
    matrix[0].shrink_to_fit();
    matrix[2].push_back(9);
    matrix[2].shrink_to_fit();
    matrix.push_back(vector<int> ());
    print2dvector(matrix);
    cout << endl << matrix.size() << " "<< matrix.capacity();


  return 0;
}