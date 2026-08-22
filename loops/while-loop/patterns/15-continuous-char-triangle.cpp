#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n; // Take input for total rows
    int i = 1; // Outer loop for rows
    char value = 'A'; //initialize character to 'A' outside the loop for continuous increment
    while(i <= n){
        int j = 1; // Reset inner loop counter for every new row
        
        while(j <= i){
            cout << value << " "; // Print the character with a space
            value++; //increment to the next character
            j++; // Increment inner loop counter
        }
        
        cout << endl; // Move to the next line after completing a row
        i++; // Increment outer loop counter
    }
    
    return 0;
}