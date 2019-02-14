
/*
    Author: Marcin Wisniowski
*/
#include <iostream>
#include <vector>
using namespace std;

//Work from 2 and go upwards towards n
//Check if number is divisible by any number within factors
//If so, divide by that number
//If not multiply and add number to list of factors

vector<int> testFactor(int number, vector<int> factors){
    for(int x : factors){
        if (number % x == 0){
            number /= x;
        }
    }
    if (number > 1){
    factors.insert(factors.begin(),number);
    }  

    return factors;
}


int main(){
    int n;
    double product = 1;
    vector<int> factors;
    
    cout << "Biggest number divisible by each of the numbers from 1-";
    cin >> n;
    
    for (int i = 2; i <= n; i++){
        factors = testFactor(i,factors);
    }

    for (int x : factors){
        product *= x;
    }

    cout << "Prime factorization tree size: " << factors.size() << endl;
    cout << product;

    return 0;
}