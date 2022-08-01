#include<iostream>
using namespace std;

int main(){

    //example 1: range till sum?
    // 0 1 1 2 3 5 8 13 21 34 ...

    int num, first=0, second=1, third;

    cout << endl << "enter the range: ";
    cin >> num;

    while(first <= num){
        //calculating 3rd term
        third = first + second;
        //printing from 1st term
        cout << first << " ";
        //updating every term
        first = second;
        second = third;
    }

    //example 1: print fibonacci till nth term?
    // 0 1 1 2 3 5 8 13 21 34 ...

    int a=0,b=1,c,n,counter=0;
    cout << endl << "enter nth index to print fibonacci: ";
    cin >> n;

    while(counter < n){
        c=a+b;
        cout << a << " ";
        a=b;
        b=c;
        counter++;
    }

    return 0;
}
