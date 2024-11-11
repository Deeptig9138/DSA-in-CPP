#include <iostream>
using namespace std;

int main(){
    int n = 50;
    int i = 1;
    int sum = 0;

    while(i <= n){
        sum += i;
        i = i + 2;
    }
    cout<<sum;

    return 0;
}