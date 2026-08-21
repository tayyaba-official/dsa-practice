int main(){

int n;
cin>> n; //take input for total rows
int i = 1; // Outer loop counter for rows

while(i<=n){
  int j = 1; //Reset inner loop counter for every new row
  int value = i;
  // Printing 'i' numbers in row 'i'
    while(j<=i){ 

        cout<< value; //printing current value with a space
        value++; //increment in value by 1 for next column
        j = j+1; 
    }
    cout<< endl; // Move to the next line after completing a row
    i = i+1; 
}

return 0;
}