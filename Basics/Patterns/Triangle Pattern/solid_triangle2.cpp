// Very logical and interesting!!!
#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of rows: ";
    cin>>n;

    for (int i = 1; i <= n; i++){
        char ch = 'A' + (i - 1);
        for(int j = 0; j < i; j++){
            cout<<ch <<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
