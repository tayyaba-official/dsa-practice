#include <iostream>
using namespace std;

int main(){

    int n;
    cin>> n;
    int i = 1;

    while(i<= n){ // outer loop for rows

        int j = 1; // starts from 1 after every row
        while(j<=n){
            cout<< "*";
            j = j+1; 
        }
        cout<< endl; // move to the next line after finishing a row
        i= i+1; // increment in outer loop
    }
return 0;
}
