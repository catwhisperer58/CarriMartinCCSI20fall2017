#include <iostream> //Standard input/output
#include <cmath> //Allows for math function
#include <cstdlib> //Standard multipurpose library
using namespace std;


/*This class will calculate the sales tax due in some states, counties, and cities, according to the cost of items purchased
*/

class SalesTax { //Class name, sales tax
    public: //May be accessed out of the class
    
    void SetStateSalesTax(double state_sales_tax_due); //Mutator or setter, state tax
    void SetCountySalesTax(double county_sales_tax_due); //Mutator or setter, county tax
    void SetCitySalesTax(double city_sales_tax_due); //Mutator or setter, city tax
    void SetSpecialSalesTax(double special_sales_tax_due); //Mutator or setter, special tax where able
    void SetTotalSalesTax(double total_sales_tax); //Combined, total sales tax
    void SetItemRetailCost(double item_retail_cost);
    void SetStateName(string state_name);
    void SetCountyName(string county_name);
    void SetCityName(string city_name);
    
    double GetStateSalesTax()  const; //Accessor or getter
    double GetCountySalesTax()  const; //Accessor or getter
    double GetCitySalesTax()  const; //Accessor or getter
    double GetSpecialSalesTax()  const; //Accessor or getter
    double GetTotalSalesTax() const; //Accessor or getter
    double GetItemRetailCost() const;
    string GetStateName() const;
    string GetCountyName() const;
    string GetCityName() const;
    
    void Print(); //Print command
    
    private: //May only be accessed from inside the class
    
    double state_rate;
    double county_rate;
    double city_rate;
    double special_rate;
    double item_cost;
    double state_sales_tax; //Private double variable
    double county_sales_tax; //Private double variable
    double city_sales_tax; //Private double variable
    double special_sales_tax; //Private double variable
    double total_tax; //Private double variable
    string state_name; //Private string variable
    string county_name; //Private string variable
    string city_name; //Private string variable
};

void SalesTax::SetItemRetailCost(double item_retail_cost) {
    item_cost = item_retail_cost;
    return;
}

void SalesTax::SetStateSalesTax(double state_sales_tax_due) { //Function to set state name and state sales tax
     state_sales_tax = state_sales_tax_due;
     return;
}

void SalesTax::SetCountySalesTax(double county_sales_tax_due) { //Function to set county sales tax
     county_sales_tax = county_sales_tax_due;
     county_sales_tax = item_cost * county_rate;
     return;
}

void SalesTax::SetCitySalesTax(double city_sales_tax_due) { //Function to set city sales tax
     city_sales_tax = city_sales_tax_due;
     city_sales_tax = item_cost * city_rate;
     return;
}

void SalesTax::SetSpecialSalesTax(double special_sales_tax_due) { //Function to set special sales tax
     special_sales_tax = special_sales_tax_due;
     special_sales_tax = item_cost * special_rate;
     return;
}

void SalesTax::SetTotalSalesTax(double total_sales_tax) {
    total_tax = total_sales_tax;
    total_tax = state_sales_tax + county_sales_tax + city_sales_tax + special_sales_tax;
    return;
}

 void SalesTax::Print() {
     cout<<"An item was purchased for $"<<item_cost<<endl;
     cout<<"Total sales tax on the item purchased:  $"<<total_tax<<endl;
     cout<<"$"<<state_sales_tax<<" goes to the state of "<<state_name<<"."<<endl;
     cout<<"$"<<county_sales_tax<<" goes to "<<county_name<<" county."<<endl;
     cout<<"$"<<city_sales_tax<<" goes to the city of "<<city_name<<"."<<endl;
     cout<<"Some places have a special tax that are address specific, ";
     cout<<"so without an address, you can't know the special tax rate."<<endl;
 
     
}
 


double SalesTax::GetItemRetailCost() const {
    return item_cost;
}

double SalesTax::GetStateSalesTax() const {
    return state_sales_tax;
}

double SalesTax::GetCountySalesTax() const {
    return county_sales_tax;
}

double SalesTax::GetCitySalesTax() const {
    return city_sales_tax;
}

double SalesTax::GetSpecialSalesTax() const {
    return special_sales_tax;
}

double SalesTax::GetTotalSalesTax() const {
    return total_tax;
}

string SalesTax::GetStateName() const {
    return state_name;
    
}

string SalesTax::GetCountyName() const {
    return county_name;
    
}

string SalesTax::GetCityName() const {
    return city_name;
    
}

int main() { //Entry point for the code execution
    double item_cost; //User input for the price of the item to be taxed
    double state_sales_tax;
    double county_sales_tax;
    double city_sales_tax;
    double special_sales_tax;
    double total_tax;
    double state_rate;
    double county_rate;
    double city_rate;
    double special_rate;
    string state_name;
    string county_name;
    string city_name;
    SalesTax state1;
    SalesTax state2;
    SalesTax state3;
    
    
    state_sales_tax = item_cost * state_rate;
    county_sales_tax = item_cost * county_rate;
    city_sales_tax = item_cost * city_rate;
    special_sales_tax = item_cost * special_rate;
    total_tax = state_sales_tax + county_sales_tax + city_sales_tax + special_sales_tax;
    
    

 /*Seperate output/user input for eaach book
*/ 

cout<<"Name the state: ";
cin>>state_name;
cout<<"Name the county: ";
cin>>county_name;
cout<<"Name the city: ";
cin>>city_name;
cout<<"Input the price of item purchased: ";
cin>>item_cost;
cout<<"Input state sales tax rate: ";
cin>>state_rate;
cout<<"Input county sales tax rate: ";
cin>>county_rate;
cout<<"Input city sales tax rate: ";
cin>>city_rate;
cout<<"Input special sales tax rate, if known: ";
cin>>special_rate;

state1.SetStateSalesTax(state_sales_tax);
state1.SetCountySalesTax(county_sales_tax);
state1.SetCitySalesTax(city_sales_tax);
state1.SetSpecialSalesTax(special_sales_tax);
state1.SetTotalSalesTax(total_tax);

state1.Print();
     



    
    
}

    
    
    
    