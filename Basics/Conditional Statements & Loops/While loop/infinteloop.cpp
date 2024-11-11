// Don't run this file but if you do so then force kill your terminal by pressing ctrl + c

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
    }  
    return 0; 
}
