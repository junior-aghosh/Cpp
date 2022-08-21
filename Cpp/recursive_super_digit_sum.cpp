#include<iostream>
#include<vector>
#include<sstream>
#include<string>
using namespace std;

/*
Input 2 numbers space seperated n & k - calculate super digit of p where p = n times k
n = 9875  k = 4   
--> p = 9875987598759875
superDigit(p) = 9+8+7+5+9+8+7+5+9+8+7+5+9+8+7+5 = 116
superDigit(116) = 1+1+6 = 8
superDigit(8) = 8
*/

int super_digit(string &n, int &k){

    int one = 1;
    long long sum=0;      // 1st sum becomes large therefore use long long

    if (n.length()==1){      // recursion break statemet
        return stoi(n);
    }
    else{
        for(char &character:n){     // ranged based loop of characters on string  
        sum += int(character)-48;   // calculating digit sum of p
        }
        string sums = to_string(sum * k);   //multiplying with k
        return super_digit(sums,one);
    }
}

int main(){

    string line, temp;
    getline(cin, line);
    vector<string> store;
    stringstream st(line);
    while(getline(st,temp, ' ')){
        store.push_back(temp);
    }
    string n = store[0];
    int k = stoi(store[1]);
    int result = super_digit(n,k);

    cout << result;

    return 0;
}