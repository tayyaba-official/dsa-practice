# include <iostream>
using namespace std;

int main(){

int n;
cin>> n;
int i = 1; // Outer loop iterator (current row number)
int count = 1; // number counter starting from 1

// Building Floyd's Triangle row by row
while(i<=n){
  int j = 1;

  // Printing 'i' numbers in row 'i'
    while(j<=i){ 

        cout<< count<< " ";
        count++; //increment in count by 1
        j = j+1; 
    }
    cout<< endl; // Move to the next line after completing a row
    i = i+1; 
}

return 0;
}