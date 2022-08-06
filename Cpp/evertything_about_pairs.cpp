#include<iostream>
#include<utility>
using namespace std;

int main(){
  
    pair<int,string> p1;
    pair<int,char> p2;
    p2 = make_pair(2,'c');
    pair<int,char> p3 (100,'z');


    cout << p1.first <<" "<< p1.second << endl;
    cout << p2.first << " "<< p2.second << endl;
    cout << p3.first << " "<< p3.second << endl;

    pair<int,char> &newpair = p2;
    newpair.second = 'x';
    
    cout << p2.first << " " << p2.second << endl;

    swap(p2,p3);
    cout <<"after swap p2 and p3: "<< endl;
    cout << p2.first << " "<< p2.second << endl;
    cout << p3.first << " "<< p3.second << endl;



    // array of pairs;

    int a[]={1,2,3,4};
    char c[]={'a','b','c','d'};

    pair<int,char> arr_pair[4];
    for(int i=0; i<4; i++){
        arr_pair[i] = {a[i],c[i]};
    }

    for(int i=0; i<4; i++)
    cout << arr_pair[i].first << "," << arr_pair[i].second << " | ";


  return 0;
}