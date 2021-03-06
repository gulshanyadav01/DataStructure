/* 
author: *gulshan yadav*
date: 22-oct-2020
*/
#include<iostream>
#include<algorithm>
#include<list>
#include<vector>
#include<unordered_set>
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
int insertion(){
    unordered_map<int,int > m;
    m.insert({1,2});
    m.insert({3,4});
    cout << m[]
}

int main(){
    unordered_map<string, int > m;
    m["gulshan"] = 20;
    m.insert({"sudarshan",21});
    m.insert({"priyanka",22});

    for(auto x: m){
        cout << x.first << " " << x.second<< endl;
    }
    // to find a key if it is present 
    // then it not return the invalid iterator 
    // other it return the invalid iterator
    if(m.find("gulshn") != m.end()){
        cout << "found"<< "\n";
    }
    else{
        cout << "not found"<< "\n";
    }
    cout <<"size"<<  m.size()<< endl;
    // we can iterate through a unordered map by 
    for(auto it = m.begin(); it != m.end(); it++){
        cout << it->first <<" " << it->second << endl;
    }
    if(m.count("gulshan")>0){
        cout << "present"<< "\n";
    }
    else{
        cout << "not present" << "\n";
    }

    // erase function is used to remove key and value pair:
    m.erase("gulshan");
    cout << "size"<<  m.size()<< endl;
    return 0; 
}
