#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n; //take input for total rows

    int i = 1; // outer loop counter for rows

    while(i<=n){
      int j = 1; // reset inner loop counter for every new row

      while(j<=n){
       cout<< i; //print the current row number
       j = j+1; // increment in inner loop
      }
      
     cout << endl; // move to the next line after completing a row
     i = i+1; // increment in outer loop
    }
return 0;
}