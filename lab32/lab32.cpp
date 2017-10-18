#include <iostream>
#include <cmath>
#include <string>
using namespace std;

/*Written by Carri Martin
10-16-2017
Lab3.2 Switch Case
This program will compile the gross income, tax paid and taxes either to be refunded, or owed, which is partially determined
by their marital status.
*/

int main() {
    
    const double personal_exemption = 4050.00; //These numbers don't change
    const double single_deduction = 6350.00;
    const double married_deduction = 12700.00;
    
    char marital_status;
    double tax_single = 0.0;
    double tax_married = 0.0;
    double gross_wages = 0.0;
    double tax_table = 0.0;
    double tax_withheld = 0.0;
    double adj_gross_wage = 0.0;
    double total_tax_refund = 0.0;
    double total_tax_owed = 0.0;
    string first_name;
    string last_name;
    
    
    
    
    cout<<"Enter first name: ";
    cin>>first_name;
    cout<<"Enter last name: ";
    cin>>last_name;
    cout<<"Enter gross income: ";
    cin>>gross_wages;
    cout<<"Enter tax withheld: ";
    cin>>tax_withheld;
    cout<<"Enter S for single, M for married: ";
    cin>>marital_status;
    cout<<endl;
    
    adj_gross_wage = gross_wages - personal_exemption;
    
    switch(marital_status) {
        case 'S':
           cout<<tax_single<<endl;
           break;
        case 'M':
           cout<<tax_married<<endl;
           break;
        default:
           cout<<"Undeclared"<<endl;
           break;
}

    cout<<"Name: "<<first_name<<" "<<last_name<<endl;
    cout<<endl;
    cout<<"Total Gross Adjusted Income: $"<<adj_gross_wage<<endl;
    cout<<endl;
    cout<<"Total tax owed: $"<<total_tax_owed<<endl;
    cout<<endl;
    cout<<first_name<<" "<<last_name<<" is entitled to a REFUND of $"<<total_tax_refund;
    
    if (tax_single) { 
        if (adj_gross_wage <= 9325.00) {
           tax_table = (adj_gross_wage - 4050.00) * 0.10;
}
        else if (adj_gross_wage <= 37950.00) {
           tax_table = ((adj_gross_wage - 9325.00) * 0.15) + 932.50;
}
        else if (adj_gross_wage <=91900.00) {
           tax_table = ((adj_gross_wage - 91900.00) * 0.25) + 5226.25;
}       
        else if (adj_gross_wage <= 416700.00) {
           tax_table = ((adj_gross_wage - 191650.00) * 0.33) + 46643.75;
}
        else if (adj_gross_wage > 416700.00) {
           tax_table = ((adj_gross_wage - 416700.00) * 0.396) + 120910.25;
}
    else if (tax_married) {
        if (adj_gross_wage <= 18650.00) {
           tax_table = (adj_gross_wage - 4050.00) * 0.10;
}
        else if (adj_gross_wage <= 75900.00) {
            tax_table = ((adj_gross_wage - 18650.00) * 0.15) + 1865.00;
}
        else if (adj_gross_wage <= 153100.00) {
            tax_table = ((adj_gross_wage - 75900.00) * 0.25) + 10452.50;
}
        else if (adj_gross_wage <= 233350.00) {
            tax_table = ((adj_gross_wage - 153100.00) * 0.28) + 29752.50;
}
        else if (adj_gross_wage <= 416700.00) {
            tax_table = ((adj_gross_wage - 233350.00) * 0.33) + 52222.50;
}
        else { adj_gross_wage > 416700.00; 
            tax_table = ((adj_gross_wage - 470700.00) * 0.396) + 112728.00;
}
     return tax_table;

}
    
    if (tax_table > tax_withheld) {
        total_tax_owed = tax_table - tax_withheld;
        cout<<total_tax_owed<<endl;
}
    else { (tax_table < tax_withheld); 
        total_tax_refund = tax_withheld - tax_table;
        cout<<total_tax_refund<<endl;
        
        

    
    return 0;
    
}
}
}

