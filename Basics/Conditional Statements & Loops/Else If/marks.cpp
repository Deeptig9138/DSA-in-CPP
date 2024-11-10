#include <iostream>
using namespace std;

int main(){
    int marks;
    cout<<"Enter marks : ";
    cin>>marks;

    if(marks >= 90){
        cout<<"Grade A \n";
    } else if (marks >=80 && marks < 90)
    {
        cout<<"Grade B \n";
    } else {
        cout<<"Grade C \n";
    }
    
    return 0;
}