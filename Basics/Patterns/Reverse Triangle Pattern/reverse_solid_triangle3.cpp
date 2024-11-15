#include <iostream>
using namespace std;

int main(){
    int n = 5;

    for(int i = n; i > 0; i--){
        int num = 5;
        for(int j = i; j > 0; j--){
            cout<<num;
            num--;
        }
        cout<<endl;
    }

    return 0;
}