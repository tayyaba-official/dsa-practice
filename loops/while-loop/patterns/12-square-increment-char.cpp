# include <iostream>
using namespace std;

int main(){
int n;
cin>>n; // Take input for total rows and columns
int i = 1; //outer loop for rows
char start = 'A';
while(i<=n){
    int j=1; //reset inner loop for every new row
    while(j<=n){
        cout<< start <<" "; //print current character with space
        start++;
        j++; //increment in inner loop
    }
    cout<< endl; //move to next line after completing a row
    i++; //increment in outer loop
}
return 0;
}