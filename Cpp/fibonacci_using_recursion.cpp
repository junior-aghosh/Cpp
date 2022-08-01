#include<iostream>
using namespace std;

// 0 1 1 2 3 5 8 13 21 34 ...

int fibo(int n){
    if(n==1) return 0;
    else if (n==2) return 1;
    return fibo(n-1) + fibo(n-2);
}

int main(){
    int Nth;
    cout << "find nth fibonacci number: ";
    cin >> Nth;
    cout << fibo(Nth);
  

  return 0;
}