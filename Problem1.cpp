#include <iostream>
using namespace std;

int main(){
  int maximum = 1000;
  int multiple1 = 3;
  int multiple2 = 5;
  int sum = 0;

  for(int i=0;i<1000;i++){
    if (i % 3 == 0){
      sum = sum+i;
    }
    else if (i % 5 == 0){
      sum = sum+i;
    }
  }

cout << "Sum = " << sum;

}
