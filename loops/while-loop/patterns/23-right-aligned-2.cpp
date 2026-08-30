#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n; // Take input for total rows
    
    int i = 1; // Outer loop for rows
    while(i <= n){
        
        // 1. Print leading spaces(Decreasing spaces: n - i spaces in the first row, fewer in later rows)
        int space = n - i;
        while(space > 0){
            cout << " ";
            space--;
        }
        
        // 2. Print repeating numbers(The current row number 'i' is printed 'i' times)
        int j = 1;
        while(j <= i){
            cout << i; // Print the current row number (i) for each column in this row
            j++;
        }
        
        cout << endl; // Move to the next line after completing a row
        i++; // Increment row counter
    }
    
    return 0;
}