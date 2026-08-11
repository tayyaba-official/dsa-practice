#include <iostream>
using namespace std;

int main(){

    int n;
    cin>> n; // input the number you want to check
    int i = 2;
    bool isPrime = true; // Assume that the number is prime
    while(i<n){
      if(n%i==0){ //if remainder is 0
        isPrime = false; //that means it's not prime number
      } 
         i= i+1; //increase i for next number
    }
  
    if(isPrime == true){ //print the final result after loop
      cout<< "Prime Number";
    } else {
      cout<< "Not a Prime Number";
    }

return 0;
}
