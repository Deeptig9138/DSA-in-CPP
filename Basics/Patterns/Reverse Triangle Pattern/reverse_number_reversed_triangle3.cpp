#include <iostream>
using namespace std;

int main(){
    char ch = 'D';

    for(char i = ch; i >= 'A'; i--){
        for(char j = i; j >= 'A'; j--){
            cout<<j <<" ";
        }
        cout<<endl;
    }
    return 0;
}