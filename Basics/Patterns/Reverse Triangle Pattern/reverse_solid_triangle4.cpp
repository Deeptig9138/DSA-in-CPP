#include <iostream>
using namespace std;

int main(){
    int n = 5;

    for(int i = n; i > 0; i--){
        char ch = 'E';
        for(int j = i; j > 0; j--){
            cout<<ch;
            ch--;
        }
        cout<<endl;
    }

    return 0;
}