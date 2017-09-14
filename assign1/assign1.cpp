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
      
    
      