#include <iostream>
using namespace std;

int main(){
    int n = 4;
    int num = 1;

    for(int i = 1; i <= n; i++){
        for(int j = i; j > 0; j--){
            cout<<num <<" ";
            num++;
        }
        cout<<endl;
    }

    return 0;
}