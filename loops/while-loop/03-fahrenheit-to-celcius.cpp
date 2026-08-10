#include <iostream>
using namespace std;

int main(){
 int startF; int endF; int jump; // jump is the value of increment between temperatures. 
 cout<< "Enter Start Fahrenheit, End Fahrenheit and Jump value: ";
 cin >> startF >> endF >> jump;
 float celcius;
 int currentF = startF;
 cout << "Temperature in Celcius: "<< endl;
 while(currentF <= endF){
 celcius= (currentF - 32) * (5.0/9.0);
 cout<< currentF  << "F   "  <<      celcius  << "C" << endl;
 currentF= currentF + jump;// after every loop the jump will be added into current temperature.
 }
 return 0;
}
