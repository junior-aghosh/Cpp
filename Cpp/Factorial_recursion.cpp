#include<iostream>
using namespace std;

int fact(int n){
    if (n==0) return 1;
    return fact(n-1)*n;
}

int main(){
    int n;
    cin >> n;
    cout << fact(n);

  return 0;
}

// Complexity:
// Number of function calls --> n
// Complexity inside each function --> 0(1)

// total O(n)