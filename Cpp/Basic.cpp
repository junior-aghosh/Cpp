#include<iostream>
using namespace std;

int func(int n){
    if(n==0) return 0;
    //cout << n << endl;
    func(n-1);
    cout << n << endl;
}

int main(){  
    func(10);
    return 0;
}