# include <iostream>
using namespace std;

int main(){
 int n; 
 cin >> n; //input the number of rows and columns
 int i = 1;
 int count = 1; //count starts from 1

 while(i<=n){ //condition for outer loop

    int j = 1;
    while(j<=n){ //condition for inner loop

        cout<< count<< " "; //printing the count
        count = count + 1; //increment in count by 1
        j = j+1; //inner loop increment
    }
    cout<< endl;
    i = i+1; //outer loop increment
 }
    return 0;
}