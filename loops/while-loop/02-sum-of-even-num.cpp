#include <iostream>
using namespace std;

int main(){
 int n; //input an number
 cin>> n;
 int sum = 0;
 int i = 2;
 while (i <= n){
 sum = sum+i; //Add value of i in sum and it will give new value of sum
 i = i+2; //Add 2 in original value of i
} 
 cout << sum;
 return 0;
}
