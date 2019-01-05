#include <iostream>
using namespace std;

int main(){
  int sum = 0;
  int oldterm = 1;
  int newterm = 2;
  int placeholder;
  int limit = 4'000'000;
  while(newterm < limit){

    if(newterm % 2 == 0){
      sum = sum + newterm;
    }

    placeholder = newterm + oldterm;
    oldterm = newterm;
    newterm = placeholder;
  }

  cout << "Sum of even = " << sum;
}
