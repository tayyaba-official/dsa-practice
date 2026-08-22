# include <iostream>
using namespace std;

int main(){
int n;
cin>>n; // Take input for total rows and columns
int i = 1; //outer loop for rows
while(i<=n){
    int j=1; //reset inner loop for every new row
    while(j<=i) {
        char value= ('A'+i-1); // calculate character based on row number
        cout<< value <<" "; //print current character with space
        
        j++; //increment in inner loop
    }
    cout<< endl; //move to next line after completing a row
    i++; //increment in outer loop
}
return 0;
}