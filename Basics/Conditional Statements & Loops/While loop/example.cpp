#include <iostream>
using namespace std;

int main(){
    int count = 1;

    int n;
    cout<<"Enter a number: ";
    cin>>n;

    while (count <= n)
    {
        cout<<count <<"\t";
        count++;
    }  
    return 0; 
}
