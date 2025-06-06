#include<iostream>
using namespace std;
void sumUsingWhileLoop(); // Function prototype

int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;
    int sum = 0;
    for(int i = 1; i <= n; i++) {
        sum += i;
    }
    cout << "Sum using for loop: " << sum << endl;

    sumUsingWhileLoop(); // Call the function
}

// by using while loop
void sumUsingWhileLoop() {
    int m;
    cout << "Enter m: ";
    cin >> m;
    int sum = 0;
    int i = 1;
    while(i <= m){
        sum += i;
        i++;
    }
    cout << "Sum using while loop: " << sum << endl;
}