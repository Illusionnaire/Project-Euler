//Largest Palindrome Product
//By: Marcin Wisniowski
//Date: 1/5/2019

//A palindromic number reads the same both ways. The largest palindrome made from the 
//product of two 2-digit numbers is 9009 = 91 × 99.
//Find the largest palindrome made from the product of two 3-digit numbers. 

//(This makes a 5-6 digit number)
//Currently the code does not correctly work for 5 digit numbers, so it assumes that there will be a bigger 6 digit answer as the biggest palindrome. Will fix later.

#include <iostream>
using namespace std;

//Checks for palindrome by comparing biggest and smallest array locations incrementally towards middle
bool checkPalindrome(int palindrome){
    int count = 6;
    int product[count];
    bool test;

    //Splits integer into array of digits
    for(int i=0;i<count;i++){
        product[i] = palindrome % 10;
        palindrome /= 10;
    }

    for(int i = 0; i< count/2; i++){
        if(product[i] == product[count-1-i]){
            test = true;
        }
        else{
            test = false;
            break;
        }
    }

    return test;
}

//Working backwards from 999 will mean the first digit found is the biggest number
int main(){
    int num1 = 999;
    int num2 = 999;
    int product; 
    int biggest_palindrome = 0;

    for(int i = num1; i>99;i--){
        for(int j= num2;j>99;j--){
            product = i * j;
            if(checkPalindrome(product) == true){
                if(biggest_palindrome < product){
                    biggest_palindrome = product;
                }
            }
        }
    }

cout << "The biggest palindrome is: " << biggest_palindrome;
}