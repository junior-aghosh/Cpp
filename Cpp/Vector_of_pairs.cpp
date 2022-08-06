#include<iostream>
#include<vector>
#include<utility>
using namespace std;

void printvec(vector<pair<int,char>> &temp){
    /*for(auto element:temp){
        cout << element.first << ", " << element.second << ")(";
    }*/

    for(int i=0; i < temp.size(); ++i)
    cout << temp[i].first << ", " << temp[i].second << "|";
}
void print2(vector<pair<int,string>> &temp){
    for(auto element:temp){
        cout << "(" << element.first << ", " << element.second << ")";
    }
}

int main(){
//1st example

    vector<pair<int,char>> Case ={{1,'a'}, {2,'b'}, {3,'c'}, {4,'d'}};
    printvec(Case);
    cout<<endl;
    //cout << Case[0].first;

//ANother example

    vector<pair<int,string>> week;
    cout << endl << "enter number of pairs to insert: ";
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        int x;
        string y;
        cin >> x >> y;
        //week.push_back({x,y}); //week.push_back(make_pair(x,y));
        pair<int,string> pair;
        pair = make_pair(x,y);
        week.push_back(pair);
    }
    print2(week);

//Final example
    vector<pair<int,string>> weekdays;
    int a[] = {1,2,3,4,5};
    string b[] = {"monday", "tuesday", "wednesday", "thursday"};
    for(int i=0; i<5; i++){
        weekdays.push_back({a[i],b[i]});
        //cout << a[i] <<" "<< b[i] << endl;     
    }
    print2(weekdays);

    return 0;
}