#include<iostream>
using namespace std;

long long int fibonacci( long long int );


int main(){
    int x;
    cin >> x;
    cout << fibonacci(x);
    return 0; 
}

long long int fibonacci(long long int x){

   
   if (x == 1){
        return 1 ;
    }if (x == 0){
        return 0;
    } else{
    return fibonacci(x-1) + fibonacci(x-2) ;

    }
}