# include <iostream>
using namespace std;

int main(){
int n;
cin>>n; // Take input for total rows and columns
int i = 1; //outer loop for rows
while(i<=n){
    int j=1; //reset inner loop for every new row
    while(j<=n){
        char ch= 'A'+j-1; //calculate character by formula
        cout<< ch <<" "; //print current character with space
        j++; //increment in inner loop
    }
    cout<< endl; //move to next line after completing a row
    i++; //increment in outer loop
}
return 0;
}