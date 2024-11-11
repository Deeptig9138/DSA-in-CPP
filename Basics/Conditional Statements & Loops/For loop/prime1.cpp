#include <iostream>
using namespace std;

int main(){
    int n = 9;
    bool isPrime = true;

    for(int i = 2; i * i <= n; i++){
        if(n % i == 0){
            isPrime = false;
            break;
        }
    }

    if(isPrime == true){
        cout<<"It is prime";
    } else {
        cout<<"It is not prime";
    }
    
    return 0;
}