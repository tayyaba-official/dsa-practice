# include <iostream>
using namespace std;

int main(){
int n;
cin>>n; // Take input for total rows and columns
int i = 1; //outer loop for rows
while(i<=n){
    int j=1; //reset inner loop for every new row
    char value = 'A'; // reset starting character to 'A' for each row
    while(j<=i){
        cout<< value <<" "; //print current character with space
        value++; //increment to next character (A->B->C->...)
        j++; //increment in inner loop
    }
    cout<< endl; //move to next line after completing a row
    i++; //increment in outer loop
}
return 0;
}