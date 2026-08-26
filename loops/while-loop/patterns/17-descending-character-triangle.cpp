#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n; // Take input for total rows
    int i = 1; // Outer loop for rows
    while(i <= n){
        int j = 1; // Reset inner loop counter for every new row
        char value = ('A'+n-i); //formula for descending character triangle
        while(j <= i){
            cout << value << " "; // Print the character with a space
            value = value +1;
            j++; // Increment inner loop counter
        }
        
        cout << endl; // Move to the next line after comple ting a row
        i++; // Increment outer loop counter
    }
    
    return 0;
}