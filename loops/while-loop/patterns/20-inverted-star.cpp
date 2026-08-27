#include <iostream>
using namespace std;

int main(){
int n;
cin>> n; // Take input for total rows
int i = 1; // Outer loop for rows

while(i<=n){
    int j = 1;
    // Simple formula to print decreasing number of stars every row
    while(j<=n-i+1){
    cout<< "*";
    j++;
  }

cout<<endl; // Move to the next line after completing a row
i = i+1;
}

    return 0;
}