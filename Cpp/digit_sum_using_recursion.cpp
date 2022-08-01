#include<iostream>
using namespace std;

// digitsum(123)= 3 + digitsum(12)
// digitsum(n) = last_digit + digitsum(n_modified)
// digitsum(n) = (n%10) + digitsum(n/10)


int digitsum(int n){
    if(n==0) return 0;
    return digitsum(n/10) + (n%10);
}

int main(){
    int a=1234;
    cout << digitsum(a);

  return 0;
}

//Complexity: number of digits in n + O(1)
//log(n)