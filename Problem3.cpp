#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;

int main(){
  long long int value = 600'851'475'143;
  int divisor = 2;
  int last_divisor = 0;

while(value > 1){
  if (value % divisor == 0){
    last_divisor = divisor;
    value = value / divisor;
    divisor = 2;
  }
  else {
    divisor++;
  }
}

cout << last_divisor;

}
