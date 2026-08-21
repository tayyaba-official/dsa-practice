# include <iostream>
using namespace std;

int main(){

int n;
cin>> n; //take input for total rows
int i = 1; // Outer loop counter for rows

while(i<=n){
  int j = 1; //Reset inner loop counter for every new row
  int value = i;
 
    while(j<=i){ 

        cout<< (i-j+1)<<" "; // Print the reverse column value with a space
         
        j = j+1; 
    }
    cout<< endl; // Move to the next line after completing a row
    i = i+1; // Increment outer loop
}
return 0;
}
