#include <iostream>
#include <vector>
using namespace std;

void printmatrix(vector<vector<int>> &temp)
{
    for (int i = 0; i < temp.size(); i++)
    {
        for (int j = 0; j < temp[i].size(); j++)
        {
            cout << temp[i][j] << "|";
        }
        cout << endl;
    }
}

int main()
{

    // vector<vector<int>> matrix {{1,2,3}, {4,5,6}, {7,8,9}};
    // printmatrix(matrix);

    vector<vector<int>> dynamic;
    int row, column;
    cout << "enter row: ";
    cin >> row;
    cout << endl
         << "enter column: ";
    cin >> column;

    for (int i = 0; i < row; i++)
    {
        vector<int> temp;
        //dynamic.push_back(vector<int> ())
        for (int j = 0; j < column; j++)
        {
            temp.push_back(j);
            //dynamic[i].push_back(j)        }
        dynamic.push_back(temp);
    }
    printmatrix(dynamic);

    dynamic.shrink_to_fit();

    cout << dynamic.capacity() << " " << dynamic.size();

    return 0;
}
}