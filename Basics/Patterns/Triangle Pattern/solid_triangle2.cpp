#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of rows: ";
    cin>>n;

    for (int i = 1; i <= n; i++){
        char ch = 'A';
        for(int j = 0; j < i; j++){
            cout<<ch;
            ch = ch + 1;
        }
        cout<<endl;
    }
    
    return 0;
}