#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n; // Take input for total rows
    
    int i = 1; // Outer loop for rows
    while(i <= n){
        
        // 1. Print leading spaces 
        int space = i - 1;
        while(space > 0){
            cout << " ";
            space--;
        }
        
        // 2. Print repeating numbers using the decreasing formula (n - i + 1)
        int j = 1;
        while(j <= n - i + 1){
            cout << i; // Print the current row number (i) for each column in this row
            j++;
        }
        
        cout << endl; // Move to the next line after completing a row
        i++; // Increment row counter
    }
    
    return 0;
}