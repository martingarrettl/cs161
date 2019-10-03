#include <iostream>
using namespace std;
#include <cstdlib>
#include <math.h>

int main () {
// initializing variables
  int salary, months, car_cost, car_sold, misconduct, taxyear, gross,
  annual, deduction, grossincome;
  float random, profit, taxrate;
  char workstate;

// defining stuff i'll need later
  srand(time(0));
  random = 0.0 + (rand()%5 + 5) / 100.0;
  deduction = 0;
  taxrate = 0;

// user defined variable stuff
  cout << "Monthly Salary " ;
  cin >> salary;
  cout << "Months worked (1 - 12): ";
  cin >> months;
  cout << "Cost of car: ";
  cin >> car_cost;
  cout << "Cars sold: ";
  cin >> car_sold;
  cout << "Misconducts observed: ";
  cin >> misconduct;
  cout << "Tax year (2017, 2018): ";
  cin >> taxyear;
  cout << "State of operation (A, B, C): ";
  cin >> workstate;

// gross income calculations
  annual = months * salary;
  cout << "Annual Salary: " << annual << endl;
  profit = car_sold * ((car_cost * (1 + random)) - car_cost);
  cout << "Total profit: " << profit << endl;

  if (misconduct > 0) {
    deduction = 100 * pow(2, misconduct);
  }

  grossincome = annual + (profit * 0.02) - deduction;
  cout << "Gross Income: " << grossincome << endl;

// tax calculations
  if (taxyear = 2017) {
    if (workstate = 'A') {
      cout << "workstate A";
    } else if (workstate = 'B'){
      cout << "workstate B";
    } else if (workstate = 'C'){
      cout << "workstate C";
    } else {
      cout << "Invalid state provided";
      return 0;
    }
  } else if (taxyear = 2018) {
    if (workstate = 'A') {
      cout << "workstate A";
    } else if (workstate = 'B'){
      cout << "workstate B";
    } else if (workstate = 'C'){
      cout << "workstate C";
    } else {
      cout << "Invalid state provided";
      return 0;
    }
  } else {
    cout << "invalid tax year provided";
    return 0;
  }

return 0;
}
