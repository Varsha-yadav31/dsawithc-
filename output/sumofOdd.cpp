#include<iostream>
using namespace std;
int main(){
    int n ;
    int sumOdd = 0;
    for(int i = 1 ; i<= n; i++){
        if(i%2 != 0){
            sumOdd += i;
        }
        cout<<sumOdd;

    }
}