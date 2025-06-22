//function is a black box that tack the input and return the output

#include<iostream>
using namespace std;
//function difine kr rhe hain 
 void printHello(){
    cout<<"hlo\n";
   }
   double sum(int a ,int b){
    double s = a + b;
    return s;

   }
   int minOfTwo(int a,int b){
    if(a<b){
        return a;
    }else{
        return b;
    }
   }
   int main(){
    //func ko call krte hain /invock the function
    printHello();
    cout<<"min ="<<minOfTwo(5,3)<<endl;
    return 0;

   }