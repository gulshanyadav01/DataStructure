/* 
author: gulshan yadav
date: 26-April-2021
*/
#include<iostream>
using namespace std;

void Toh(int num, char a , char b, char c){
    if( num == 1){
        cout << "move disk "<<  num << " from " << a << " to " << c << endl;
        return; 
    }
    Toh(num-1, a, c,  b); 
    cout << "move disk "<< num <<" from "  << a <<" to " << c << endl;
    Toh(num-1, b, a, c); 
}

int main(){
    int num; 
    cin >> num; 
    char a, b, c; 
    cin >> a >> b >>c; 
    Toh(3, a, b, c );
    return 0; 
}