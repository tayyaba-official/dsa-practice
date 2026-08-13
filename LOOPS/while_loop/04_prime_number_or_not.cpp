#include <iostream>
using namespace std;

int main(){

    int n;
    cin>> n; // input the number you want to check
    int i = 2;
    bool isPrime = true;
    while(i<n){
      if(n%i==0){
        isPrime = false;
      } 
         i= i+1;
    }
    if(isPrime == true){
      cout<< "Prime Number";
    } else {
      cout<< "Not a Prime Number";
    }

return 0;
}
