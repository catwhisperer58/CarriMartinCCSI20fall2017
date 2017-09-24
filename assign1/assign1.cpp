#include <iostream>
#include <string>
using namespace std;

/* This will output a paystub.
Author: Carri Martin
Date: September 13, 2017
*/

struct employeeWages {

   double hourlyWage; //Employee's hourly wage
   double workHoursPerWeek; //Employee's total hours worked per pay period
   double grossPay; //Employee's pay before any deductions
   double netPay; //Employee's pay after taxes and insurance are deducted
   double taxPaid; //Total amount of taxes deducted
   double mileageReimbur; //Reimbursement pay for mileage traveled
   double totalPay; //Employee's net pay with added mileage reimbursement
   double healthIns; //Employer deduction for employee insurance
   
   };
   
   int main() {
   
      employeeWages payStub;
      
      const double taxRate = .17; //Set tax rate of 17%
      const double mileageRate = .35; //Reimbursement set at .35 per mileage
      payStub.hourlyWage; //Hourly wage
      payStub.workHoursPerWeek; //Employees are paid weekly
      payStub.grossPay; //Gross pay per week
      payStub.netPay; //Net pay per week
      payStub.taxPaid; //Taxes deducted
      payStub.mileageReimbur; //Actual mileage reimbursement (beginning odometer subtracted from ending, * .35)
      payStub.healthIns; //Health insurance deducted from gross pay pre-tax
      payStub.totalPay; //Ending pay - Net pay plus mileage
      string firstName; //Employee's first name
      string lastName; //Employee's last name
      
      int startingOdometer; //Employee's odometer reading at beginning of pay period
      int endingOdometer; //Employee's odometer reading at the end of the pay period
      int milesTraveled; //Total miles traveled by employee
      
      firstName = "Sofia";
      lastName = "Cameron";
      payStub.healthIns = 178.65;
      payStub.hourlyWage = 23.57;
      payStub.workHoursPerWeek = 40;
      payStub.grossPay = payStub.hourlyWage * payStub.workHoursPerWeek;
      payStub.taxPaid = (payStub.grossPay - payStub.healthIns) * taxRate;
      payStub.netPay = (payStub.grossPay - payStub.healthIns) - payStub.taxPaid;
      startingOdometer = 3268;
      endingOdometer = 4154;
      milesTraveled = endingOdometer - startingOdometer;
      payStub.mileageReimbur = milesTraveled * mileageRate;
      payStub.totalPay = payStub.netPay + payStub.mileageReimbur;
      
      cout << "Enter employee first name: ";
      cin >> firstName;
      cout << "Enter employee last name: ";
      cin >> lastName;
      cout << "Enter employee health insurance cost to be deducted pre-tax: ";
      cin >> payStub.healthIns;
      cout << "Enter employee hourly wage: ";
      cin >> payStub.hourlyWage;
      cout << "Enter employee hours worked for the week: ";
      cin >> payStub.workHoursPerWeek;
      cout << "Enter employee starting odometer reading: ";
      cin >> startingOdometer;
      cout << "Enter employee ending odometer reading: ";
      cin >> endingOdometer;
      cout << endl;
      cout << endl;
      
      
      cout << firstName << " " << lastName << "    Hourly wage -    " << payStub.hourlyWage << " per hour" << endl;
      cout << endl;
      cout << endl;
      cout << "Gross Pay                 " << payStub.grossPay << endl;
      cout << endl;
      cout << "Net Pay                   " << payStub.netPay << endl;
      cout << endl;
      cout << "Mileage Reimbursement     " << payStub.mileageReimbur << endl;
      cout << endl;
      cout << endl;
      cout << "Total Pay                 " << payStub.totalPay << endl;
      
      
      }
      
    /*Running /home/ubuntu/workspace/assign1/assign1.cpp
Enter employee first name: Sofia
Enter employee last name: Cameron
Enter employee health insurance cost to be deducted pre-tax: 178.65
Enter employee hourly wage: 23.57
Enter employee hours worked for the week: 40
Enter employee starting odometer reading: 3268
Enter employee ending odometer reading: 4154


Sofia Cameron    Hourly wage -    23.57 per hour


Gross Pay                 942.8

Net Pay                   634.245

Mileage Reimbursement     310.1


Total Pay                 944.344


Process exited with code: 0

Running /home/ubuntu/workspace/assign1/assign1.cpp
Enter employee first name: Richard
Enter employee last name: Watson
Enter employee health insurance cost to be deducted pre-tax: 344.57
Enter employee hourly wage: 11.50
Enter employee hours worked for the week: 29
Enter employee starting odometer reading: 9763
Enter employee ending odometer reading: 10701


Richard Watson    Hourly wage -    11.5 per hour


Gross Pay                 942.8

Net Pay                   634.245

Mileage Reimbursement     310.1


Total Pay                 944.344


Process exited with code: 0

Running /home/ubuntu/workspace/assign1/assign1.cpp
Enter employee first name: Heather
Enter employee last name: Hunt
Enter employee health insurance cost to be deducted pre-tax: 224.75
Enter employee hourly wage: 60.00
Enter employee hours worked for the week: 35
Enter employee starting odometer reading: 5705
Enter employee ending odometer reading: 5705


Heather Hunt    Hourly wage -    60 per hour


Gross Pay                 942.8

Net Pay                   634.245

Mileage Reimbursement     310.1


Total Pay                 944.344


Process exited with code: 0



Running /home/ubuntu/workspace/assign1/assign1.cpp
Enter employee first name: Eddy
Enter employee last name: Hall
Enter employee health insurance cost to be deducted pre-tax: 180.27
Enter employee hourly wage: 8.25
Enter employee hours worked for the week: 40
Enter employee starting odometer reading: 12919
Enter employee ending odometer reading: 13146


Eddy Hall    Hourly wage -    8.25 per hour


Gross Pay                 942.8

Net Pay                   634.245

Mileage Reimbursement     310.1


Total Pay                 944.344


Process exited with code: 0




*/
      