#include<iostream>
using namespace std;

void printNumberPattern(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cout << j;
        }
        cout << endl;
    }
}

void printCharPattern(int n) {
    for (int i = 1; i <= n; i++) {
        char ch = 'A';
        for(int j = 1; j <= n; j++) {
            cout << ch;
            ch = ch + 1;
        }
        cout << endl;
    }
}
void printPattern(int n , int num){
    n = 4;
    num = 1;
    for (int i = 0; i<=n; i++){
        for(int j= 0; j<=n; j++ ){
            
        }

    }
}

int main() {
    int n = 5;
    printNumberPattern(n);
    cout << endl;
    printCharPattern(n);
    return 0;
}