#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<vector<int>> dynamic;
    int outer_size;
    cin >> outer_size;
    for(int i=0; i<outer_size; i++){
        int inner_size;
        cin >> inner_size;
        dynamic.push_back(vector<int> ());
        //vector<int> temp;
        for(int j=0; j<inner_size; j++){
            int element;
            cin >> element;
            //temp.push_back(element);
            dynamic[i].push_back(element);
        }
    }
    for (int i = 0; i < dynamic.size(); i++)
    {
        for (int j = 0; j < dynamic[i].size(); j++)
        {
            cout << dynamic[i][j] << "|";
        }
        cout << endl;
    }
    cout << dynamic[0].size() << " " << dynamic[1].size();
    
  

    return 0;
}