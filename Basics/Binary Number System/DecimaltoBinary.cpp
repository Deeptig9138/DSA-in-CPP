#include <iostream>
using namespace std;

int DectoBin(int decNum){
  int ans = 0, pow = 1;

  while(decNum > 0){
    int rem = decNum % 2;
    decNum /= 2;

    ans += (rem * pow);
    pow *= 10;
  }
  return ans;
}

int main(){
  int decNum = 50;

  cout<< DectoBin(decNum) << endl;
  return 0;
}
