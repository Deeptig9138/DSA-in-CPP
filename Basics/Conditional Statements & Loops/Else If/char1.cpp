// Implicit type conversion (char to int)
#include <iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter a character ";
    cin>>ch;

    if(ch >= 97 &&  ch <= 122){ //ASCII value for lower case is 97 - 122
        cout<<"Lowercase \n";
    } else { //ASCII value for upper case is 65 - 90 
        cout<<"Uppercase \n";
    }
    
    return 0;
}
