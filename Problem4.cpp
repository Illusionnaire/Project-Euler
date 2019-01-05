//Largest Palindrome Product
//By: Marcin Wisniowski
//Date: 1/5/2019

//A palindromic number reads the same both ways. The largest palindrome made from the 
//product of two 2-digit numbers is 9009 = 91 × 99.
//Find the largest palindrome made from the product of two 3-digit numbers. 

//(This makes a 5-6 digit number)
//Currently the code does not correctly work for 5 digit numbers, so it assumes that there will be a bigger 6 digit answer as the biggest palindrome. Will fix later.

#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

//Checks for palindrome by comparing biggest and smallest array locations incrementally towards middle
bool checkPalindrome(int palindrome){
    vector<int> product;
    bool test;
    int length = 0;

    //Splits integer into array of digits. This technically mirrors the output, but it doesn't matter when checking.
    while(palindrome > 0){
        product.push_back(palindrome % 10);
        length++;
        palindrome /= 10;
    }

    //If count is odd, it does not have to check the middle value
    for(int i = 0; i< length/2; i++){
        if(product[i] == product[length-1-i]){
            test = true;
        }
        else{
            test = false;
            break;
        }
    }

    return test;
}

int main(){
    int num1 = 999;
    int num2 = 999;
    int num2_iterator = num2;
    int product; 
    int biggest_palindrome = 0;

    
    for(int i = num1; i>num1/10;i--){
        for(int j= num2_iterator;j>num2/10;j--){ 
            product = i * j;
            if(checkPalindrome(product) == true){
                if(biggest_palindrome < product){
                    biggest_palindrome = product;
                }
            }
        }
        num2_iterator--; //Once 999 is checked entirely, num2 should be initialized lower, as to not have to check through 999 amounts anymore, to remove redundant values.
    }

cout << "The biggest palindrome is: " << biggest_palindrome;
}