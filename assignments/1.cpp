#include <iostream>
using namespace std;
#include <cstdlib>
#include <math.h>

int main () {
// initializing variables
  int salary, months, car_cost, car_sold, misconduct, taxyear,
  annual, deduction, grossincome, netincome, workstate, avgsale;
  float random, profit, taxrate;

// defining stuff i'll need later
  srand(time(0));
  random = 0.0 + (rand()%5 + 5) / 100.0;
  deduction = 0;
  taxrate = 0;

// user defined variable stuff
  cout << "Monthly Salary: " ;
  cin >> salary;
  cout << "Months worked (1 - 12): ";
  cin >> months;
  cout << "Cost of car: ";
  cin >> car_cost;
  cout << "Cars sold: ";
  cin >> car_sold;
  cout << "Misconducts observed: ";
  cin >> misconduct;
  cout << "Tax year (0 - 2017, 1 - 2018): ";
  cin >> taxyear;
  cout << "State of operation (A - 0, B - 1, C - 2): ";
  cin >> workstate;

// gross income calculations
  annual = months * salary;
  avgsale = car_cost * (1 + random);
  profit = car_sold * (avgsale - car_cost);

  if (misconduct > 0) {
    deduction = 100 * pow(2, misconduct - 1);
  }

  grossincome = annual + (profit * 0.02) - deduction;

// tax calculations
  //2017
  if (taxyear == 0) {
    cout << "For tax year 2017 ";
    if (workstate == 0) {
      cout << "and working in state A: " << endl;
      taxrate = grossincome * 0.06;
    } else if (workstate == 1){
      cout << "and working in state B: " << endl;
      if (grossincome < 2000) {
        taxrate = 0;
      } else if (grossincome < 10000) {
        taxrate = 100;
      } else {
        taxrate = (grossincome * 0.1) + 100;
      }
    } else if (workstate == 2){
      cout << "and working in state C: " << endl;
      if (grossincome < 3500) {
        taxrate = grossincome * 0.05;
      } else if (grossincome < 9000) {
        taxrate = (grossincome * 0.07) + 175;
      } else if (grossincome < 125000) {
        taxrate = (grossincome * 0.09) + 560;
      } else {
        taxrate = (grossincome * 0.099) + 11000;
      }
    } else {
      cout << "Invalid state provided" << endl;
      return 0;
    }
  //2018
  } else if (taxyear == 1) {
    cout << "For taxyear 2018 " << endl;
    if (workstate == 0) {
      cout << "and working in state A: " << endl;
      taxrate = (grossincome * 0.08);
    } else if (workstate == 1){
      cout << "and working in state B: " << endl;
      if (grossincome < 2500) {
        taxrate = 0;
      } else if (grossincome < 10000) {
        taxrate = 115;
      } else {
        taxrate = (grossincome * 0.105) + 115;
      }
    } else if (workstate == 2){
      cout << "and working in state C: " << endl;
      if (grossincome < 3450) {
        taxrate = grossincome * 0.05;
      } else if (grossincome < 8700) {
        taxrate = (grossincome * 0.07) + 172.5;
      } else if (grossincome < 125000) {
        taxrate = (grossincome * 0.09) + 540;
      } else {
        taxrate = (grossincome * 0.099) + 11007;
      }
    } else {
      cout << "Invalid state provided" << endl;
      return 0;
    }
  } else {
    cout << "invalid tax year provided" << endl;
    return 0;
  }
netincome = grossincome - (grossincome * taxrate);

cout << "The average selling price is $" << avgsale << " for which ";
cout << "you earn 2% of the profit, which is $" << profit * 0.02 << endl;
cout << "Gross income is: $" << grossincome << endl;
cout << "The tax you need to pay is: $" << taxrate; << endl;
return 0;
}
