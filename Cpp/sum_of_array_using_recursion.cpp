#include<iostream>
using namespace std;
//sum of array using recursion

//_________ sum(arr,n) --> sum of arrary
//___________ sum(arr,n) --> arr[n] + sum(arr, n-1)

/*--------not very intuitive---- sums the entire array/cannot count till n index!

int sum(int arr[], int size){
    if(size==1) return arr[size-1];
    return arr[size-1] + sum(arr,size-1);
    }

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    cout << sum(arr,5);

  return 0;
}
*/

//---- final result--- SUM TILL Nth INDEX!

int sum(int arr[], int n){
    if(n<0) return 0;
    return arr[n] + sum(arr,n-1);
    }

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    cout << sum(arr,4);

    return 0;
}


//complexity: O(n)+O(1) = O(n)