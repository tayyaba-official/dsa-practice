#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n; // Take input for total rows
    int i = 1; // Outer loop for rows
    while(i <= n){
        int j = 1; // Reset inner loop counter for every new row
        // printing square character pattern
        while(j <= n){
            char value = ('A'+i+j-2);
            cout << value << " "; // Print the character with a space
            j++; // Increment inner loop counter
        }
        
        cout << endl; // Move to the next line after completing a row
        i++; // Increment outer loop counter
    }
    
    return 0;
}