/*
author:gulshan yadav
email: gulshany01@gmail.com
date: 24-jun-2021
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// this is naive solution 
void printPreviosGreater(int arr[], int num){
    for(int i = 0; i< num; i++){
        int j; 
        for(j = i-1; j>= 0; j--){
            if(arr[j]> arr[i]){
                cout << arr[j] <<" ";
                break;
            }
        }
        if(j == -1){
            cout << -1 << " ";
        }
    }
}

// efficient solution 

void previousElement(int arr[], int num){
    stack<int> s; 
    s.push(arr[0]);
    cout << -1 <<" ";
    for(int i = 1; i< num; i++){
        while(s.empty() == false && s.top() <= arr[i]){
            s.pop();
        }
        int prevGreater = s.empty() ? -1 : s.top();
        cout <<  prevGreater <<" ";
        s.push(arr[i]);
    }
}

int main(){
    int num; 
    cin >> num; 
    int arr[num];
    for(int i = 0; i< num; i++ ){
        cin >> arr[i];
    }
    printPreviosGreater(arr, num);
    cout << endl;
    previousElement(arr, num);
    return 0; 
}