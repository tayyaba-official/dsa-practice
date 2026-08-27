#include <iostream>
using namespace std;

int main(){
int n;
cin>> n; // Take input for total rows
int i = 1; // Outer loop for rows
while(i<=n){
// 1. Print leading spaces for right-alignment
int space = n-i;

  while(space){
    cout<< " ";
    space = space-1;
  }
  // 2. Print stars for the current row
    int j = 1;
    while(j<=i){
    cout<< "*";
    j++;
  }


cout<<endl; // Move to the next line after completing a row
i = i+1; // Increment outer loop counter
}

    return 0;
}