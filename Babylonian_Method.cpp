/*
Babylonian_Method.cpp
Sep 24, 2017
Juan Casian
*/

#include <iostream>
#include <cmath>

using namespace std;

int AskStartingNumber () {
  int StartingNumber;
  cout << "Please input a number you want to know its square root: " ;
  cin >> StartingNumber;

  if (StartingNumber < 0){
    cout << "The number you entered is < 0 so its square root is not a real number." << endl;
    cout << "Please try again." <<endl;
    StartingNumber = AskStartingNumber ();
  }

  return StartingNumber;
}

void BabylonianMethod (int StartingNumber) {
  int Divisor = 0;
  double CurrentNumber = 0, Average = 0, Result = 0, a, StaticNumber;

  a =  sqrt(StartingNumber);
  Divisor = (int) a;
  StaticNumber = StartingNumber; //5
  CurrentNumber = StaticNumber / Divisor; // 2.5
  Average = (CurrentNumber + Divisor)/2; //2.25
  CurrentNumber = StaticNumber / Average; //2.2222222
  Average = (CurrentNumber + Average)/2; //2.2361111
  CurrentNumber = StaticNumber / Average; //2.2360248
  Average = (CurrentNumber + Average)/2; // 2.2360679

  Result = Average;

  cout << "The BabylonianMethod result is:  " << Average << endl;
  cout << "The Real result is:  " << a << endl;

}

int main () {

  int StartingNumber = 0;

  StartingNumber = AskStartingNumber ();

  BabylonianMethod (StartingNumber);

  return 0;
}
