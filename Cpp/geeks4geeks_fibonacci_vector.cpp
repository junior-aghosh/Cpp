#include<iostream>
#include<vector>
using namespace std;

/*
Given a number N, find the first N Fibonacci numbers. The first two number of the series are 1 and 1.
(using vector) 

Example 1:

Input:
N = 5
Output: 1 1 2 3 5*/

vector<long long> printf(int n){
    vector<long long> temp;
    temp.push_back(1);
    if (n<2) return temp;
    else{
        temp.push_back(1);
        int i=0;
        while(n != temp.size()){
            temp.push_back(temp[i]+temp[i+1]);
            i=i+1;
        }
        return temp;
    }

}

int main(){
    int N;
    cout << "Enter N: ";
    cin >> N;
    vector<long long> result = printf(N);
    for(auto element:result){
        cout << element << " ";
    }

    
    return 0;
}