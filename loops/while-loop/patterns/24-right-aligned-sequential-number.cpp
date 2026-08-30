#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n; // Take input for total rows
    
    int i = 1; // Outer loop for rows
    while(i <= n){
        
        // 1. Print leading spaces (Increasing spaces: 0 in the first row, expanding for later rows)
        int space = i - 1;
        while(space > 0){
            cout << " ";
            space=space-1;
        }
        
        // 2. Print sequential numbers starting from 'i' up to 'n'
        int j = i;
        while(j <= n){
            cout << j; // Print the current sequence value
            j++;
        }
        
        cout << endl; // Move to the next line after completing a row
        i++; // Increment row counter
    }
    
    return 0;
}