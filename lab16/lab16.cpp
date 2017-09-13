#include <iostream>
#include <string>
using namespace std;

/* This will be a stock portfolio

Title: Stock Portfolio
Author: Carri Martin
Date: 9-12-2017
*/

struct stockPortfolio{
    string stockName; //Name of company
    char stockSector; //This letter designates type of company according to a code
    double currentSharePrice; //Current price per share of stock
    double numSharesOwned; //How many shares of stock are owned
    double totalCompanyStockValue; //Value of stock for that company
    
};

int main() 
{

   stockPortfolio company1;
   company1.stockName = "FordM"; //Ford Motot Company  
   company1.stockSector = 'A'; //Auto Company
   company1.currentSharePrice = 18.76; 
   company1.numSharesOwned = 87;
   company1.totalCompanyStockValue = (company1.currentSharePrice * company1.numSharesOwned);
   
   stockPortfolio company2;
   company2.stockName = "Albertsn"; //Albertson's
   company2.stockSector = 'C'; //Consumer Products
   company2.currentSharePrice = 34.39;
   company2.numSharesOwned = 542;
   company2.totalCompanyStockValue = (company2.currentSharePrice * company2.numSharesOwned);
   
   stockPortfolio company3;
   company3.stockName = "AAPL";
   company3.stockSector = 'T'; //Technology
   company3.currentSharePrice = 145.91;
   company3.numSharesOwned = 5;
   company3.totalCompanyStockValue = (company3.currentSharePrice * company3.numSharesOwned);
   
   stockPortfolio company4;
   company4.stockName = "TSLA"; //Tesla
   company4.stockSector = 'A'; //Auto
   company4.currentSharePrice = 375.64;
   company4.numSharesOwned = 50;
   company4.totalCompanyStockValue = (company4.currentSharePrice * company4.numSharesOwned);
   
   stockPortfolio company5;
   company5.stockName = "WFC";
   company5.stockSector = 'F'; //Financial/Insurance
   company5.currentSharePrice = 53.02;
   company5.numSharesOwned = 1368;
   company5.totalCompanyStockValue = (company5.currentSharePrice * company5.numSharesOwned);
   
   stockPortfolio company6;
   company6.stockName = "Apple"; //Apple 
   company6.stockSector = 'T'; //Technology
   company6.currentSharePrice = 198.52;
   company6.numSharesOwned = 2500;
   company6.totalCompanyStockValue = (company6.currentSharePrice * company6.numSharesOwned);
   
   double totalStockPortfolio = 0;
   
   totalStockPortfolio = (company1.totalCompanyStockValue + company2.totalCompanyStockValue + company3.totalCompanyStockValue)
                         + (company4.totalCompanyStockValue + company5.totalCompanyStockValue + company6.totalCompanyStockValue);
                                     
   cout << company1.stockName << " " << company1.stockSector << endl;
   cout << company1.currentSharePrice << " " << company1.numSharesOwned << endl;
   cout << company1.totalCompanyStockValue << endl;
   cout << endl;
   cout << company2.stockName << " " << company2.stockSector << endl;
   cout << company2.currentSharePrice << " " << company2.numSharesOwned << endl;
   cout << company2.totalCompanyStockValue << endl;
   cout << endl;
   cout << company3.stockName << " " << company3.stockSector << endl;
   cout << company3.currentSharePrice << " " << company3.numSharesOwned << endl;
   cout << company3.totalCompanyStockValue << endl;
   cout << endl;
   cout << company4.stockName << " " << company4.stockSector << endl;
   cout << company4.currentSharePrice << " " << company4.numSharesOwned << endl;
   cout << company4.totalCompanyStockValue << endl;
   cout << endl;
   cout << company5.stockName << " " << company5.stockSector << endl;
   cout << company5.currentSharePrice << " " << company5.numSharesOwned << endl;
   cout << company5.totalCompanyStockValue << endl;
   cout << endl;
   cout << company6.stockName << " " << company6.stockSector << endl;
   cout << company6.currentSharePrice << " " << company6.numSharesOwned << endl;
   cout << company6.totalCompanyStockValue << endl;
   cout << endl;
   cout << " Total value in stock portfolio - $" << company6.totalCompanyStockValue << ".00" << endl; //Value of entire stock portfolio
   
                                     
}

/*Running /home/ubuntu/workspace/lab16/lab16.cpp
FordM A
18.76 87
1632.12

Albertsn C
34.39 542
18639.4

AAPL T
145.91 5
729.55

TSLA A
375.64 50
18782

WFC F
53.02 1368
72531.4

Apple T
198.52 2500
496300

 Total value in stock portfolio - $496300.00
 */