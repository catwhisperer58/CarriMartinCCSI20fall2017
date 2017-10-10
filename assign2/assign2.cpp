#include <iostream> //Standard input/output
#include <cmath> //Allows for math function
#include <cstdlib> //Standard multipurpose library
using namespace std;

/*These are the items whose values don't change
*/
const double cali_state_tax_rate = 0.06; //Tax rate for California
const double nevada_state_tax_rate = 0.046; //Tax rate for Nevada
const double arizona_state_tax_rate = 0.056; //Tax rate for Arizona
const double butte_county_tax_rate = 0.0025; //Tax rate for Butte County, California
const double sac_county_tax_rate = 0.0025; //Tax rate for Sacramento County, California
const double clark_county_tax_rate = 0.0365; //Tax rate for Clark County, Nevada
const double maricopa_county_tax_rate = 0.007; //Tax rate for Maricopa County, Arizona
const double chico_city_tax_rate = 0.0; //Tax rate for Chico, CA in Butte
const double paradise_city_tax_rate = 0.005; //Tax rate for Paradise, CA in Butte
const double sac_city_tax_rate = 0.005; //Tax rate for Sacramento, CA in Sacramento County
const double las_vegas_city_tax_rate = 0.0; //Tax rate for Las Vegas, NV in Clark County
const double phoenix_city_tax_rate = 0.023; //Tax rate for Phoenix, AZ in Maricopa
const double chico_special_tax_rate = 0.01; //Special tax rate for Chico
const double paradise_special_tax_rate = 0.01; //Special tax rate for Paradise
const double sac_special_tax_rate = 0.015; //Special tax rate for Sacramento

/*This class will calculate the sales tax due in the given states, counties, and cities, according to the cost of items purchased
*/

class Tax { //Class name, sales tax
    public: //Declarations that may be accessed out of the class
    
    void SetStateSalesTax(double state_sales_tax_due); //Mutator or setter, sets state sales tax due
    void SetCountySalesTax(double county_sales_tax_due); //Mutator or setter, sets county sales tax due
    void SetCitySalesTax(double city_sales_tax_due); //Mutator or setter, sets city sales tax
    void SetSpecialSalesTax(double special_sales_tax_due); //Mutator or setter, sets special tax added to city when known
    void SetTotalSalesTax(double total_sales_tax); //Sets combined, total sales tax
    void SetStateRate(double state_tax_rate); //Sets the state tax rate
    void SetCountyRate(double county_tax_rate); //Sets the county tax rate depending on input
    void SetCityRate(double city_tax_rate); //Sets the city tax rate depending on input
    void SetSpecialRate(double special_tax_rate); //Sets the special tax rate where known
    void SetTotalSalesAmt(double total_dollar_amt_of_sales); //Set total sales to be taxed
    void SetStateName(string state_name_to_get); //Set state name
    void SetCountyName(string county_name_to_get); //Set county name
    void SetCityName(string city_name_to_get); //Set city name
    
    double GetStateSalesTax()  const; //Accessor or getter, get state sales tax
    double GetCountySalesTax()  const; //Accessor or getter, get county sales tax
    double GetCitySalesTax()  const; //Accessor or getter, get city sales tax
    double GetSpecialSalesTax()  const; //Accessor or getter, get special sales tax
    double GetTotalSalesTax() const; //Accessor or getter, get total sales tax
    double GetStateRate() const; //Get state tax rate
    double GetCountyRate() const; //Get county tax rate
    double GetCityRate() const; //Get city tax rate
    double GetSpecialRate() const; //Get special tax rate
    double GetTotalSalesAmt() const; //Get total sales amount
    string GetStateName() const; //Get state name
    string GetCountyName() const; //Get county name
    string GetCityName() const; //Get city name
    
    void Print(); //Print command
    
    private: //Declarations that may only be accessed from inside the class
    
    double state_tax; //Private double variable, state tax
    double county_tax; //Private double variable, county tax
    double city_tax; //Private double variable, city tax
    double special_tax; //Private double variable, special tax
    double total_tax; //Private double variable, total tax
    double state_rate; //State tax rate
    double county_rate; //County tax rate
    double city_rate; //City tax rate
    double special_rate; //Special tax rate
    double total_dollars_spent; //Total amount to be taxed
    string state_name; //Private string variable, state name
    string county_name; //Private string variable, county name
    string city_name; //Private string variable, city name
    
};

void Tax::SetTotalSalesAmt(double total_dollar_amt_of_sales) { //Set definition
    total_dollars_spent = total_dollar_amt_of_sales;
    
    return;
}

void Tax::SetStateSalesTax(double state_sales_tax_due) { //Difine to set state sales tax
     state_tax = state_sales_tax_due;

     return;
}

void Tax::SetCountySalesTax(double county_sales_tax_due) { //Define to set county sales tax
     county_tax = county_sales_tax_due;
    
     return;
}

void Tax::SetCitySalesTax(double city_sales_tax_due) { //Define to set city sales tax
     city_tax = city_sales_tax_due;
   
     return;
}

void Tax::SetSpecialSalesTax(double special_sales_tax_due) { //Define to set special sales tax
     special_tax = special_sales_tax_due;
    
     return;
}

void Tax::SetTotalSalesTax(double total_sales_tax) { //Define to set total sales tax
    total_tax = total_sales_tax;
   
    return;
}

void Tax::SetStateRate(double state_tax_rate) { //Define to set state rate
    state_rate = state_tax_rate;
    return;
}

void Tax::SetCountyRate(double county_tax_rate) { //Define to set county rate
    county_rate = county_tax_rate;
    return;
}

void Tax::SetCityRate(double city_tax_rate) { //Define to set city rate
    city_rate = city_tax_rate;
    return;
    
}

void Tax::SetSpecialRate(double special_tax_rate) { //Define to set special rate
    special_rate = special_tax_rate;
    return;
}

void Tax::SetStateName(string state_name_to_get) { //Define to set state name
    state_name = state_name_to_get;
    return;
}

void Tax::SetCountyName(string county_name_to_get) { //Define to set county name
    county_name = county_name_to_get;
    return;
}

void Tax::SetCityName(string city_name_to_get) { //Define to set city name
    city_name = city_name_to_get;
    return;
}


 void Tax::Print() { //Print function
     
     cout<<"Total purchases taxed: $"<<total_dollars_spent<<endl;
     cout<<"Tax due to "<<state_name<<" $"<<state_tax<<endl;
     cout<<"Tax due to "<<county_name<<" County: $"<<county_tax<<endl;
     cout<<"Tax due to the city of "<<city_name<<": $"<< city_tax<<endl;
     cout<<"Extra tax due to "<<city_name<<" through a special tax is: $"<<special_tax<<endl;
     cout<<"Total combined sales tax due for sales in "<<city_name<<", "<<state_name<<" is: $"<<state_tax + county_tax + city_tax + special_tax<<endl;
     
}
 
double Tax::GetTotalSalesAmt() const { //Declaration to get total sales
     return total_dollars_spent;
}

double Tax::GetStateSalesTax() const { //Declaration to get state tax
    return state_tax;
}

double Tax::GetCountySalesTax() const { //Declaration to get county tax
    return county_tax;
}

double Tax::GetCitySalesTax() const { //Declaration to get city tax
    return city_tax;
}

double Tax::GetSpecialSalesTax() const { //Declaration to get special tax
    return special_tax;
}

double Tax::GetTotalSalesTax() const { //Declarationn to get total tax
    return total_tax;
}

double Tax::GetStateRate() const { //Declaration to get state rate
    return state_rate;
}

double Tax::GetCountyRate() const { //Declaration to get county tax rate
    return county_rate;
}

double Tax::GetCityRate() const { //Declaration to get city tax rate
    return city_rate;
}

double Tax::GetSpecialRate() const { //Declaration to get special tax rate
    return special_rate;
}

string Tax::GetStateName() const { //Declaration to get state name
    return state_name;
    
}

string Tax::GetCountyName() const { //Declaration to get county name
    return county_name;
    
}

string Tax::GetCityName() const { //Declaration to get city name
    return city_name;
    
}

int main() { //Entry point for the code execution
    
    double user_state_tax; //variables for user input
    double user_county_tax;
    double user_city_tax;
    double user_special_tax;
    double user_total_tax;
    double user_state_rate;
    double user_county_rate;
    double user_city_rate;
    double user_special_rate;
    double user_total_of_purchases;
    string user_state_name1, user_state_name2, user_state_name3, user_state_name4, user_state_name5;
    string user_county_name1, user_county_name2, user_county_name3, user_county_name4, user_county_name5;
    string user_city_name1, user_city_name2, user_city_name3, user_city_name4, user_city_name5;
    
    double p1, p2, p3, p4, p5, p6, p7, p8, p9, p10;
    Tax city1;
    Tax city2;
    Tax city3;
    Tax city4;
    Tax city5;
    
    
    

    
 /* Output/user input to define the values  
*/ 

cout<<"Input states in order: "<<endl;
cin>>user_state_name1; cin>>user_state_name2; cin>>user_state_name3; cin>>user_state_name4; cin>>user_state_name5;
cout<<"Input counties in order:"<<endl;
cin>>user_county_name1; cin>>user_county_name2; cin>>user_county_name3; cin>>user_county_name4; cin>>user_county_name5;
cout<<"Input cities in order:"<<endl;
cin>>user_city_name1; cin>>user_city_name2; cin>>user_city_name3; cin>>user_city_name4; cin>>user_city_name5;
cout<<"Input the prices of all items purchased: "<<endl;
cin>>p1; cin>>p2; cin>>p3; cin>>p4; cin>>p5; cin>>p6; cin>>p7; cin>>p8; cin>>p9; cin>>p10;
cout<<endl;
cout<<endl;

/*Defintions to call the functions
*/

    user_total_tax = 0;
    user_total_of_purchases = p1 + p2 + p3 + p4 + p5 + p6 + p7 + p8 + p9 + p10;
    user_state_tax = user_total_of_purchases * user_state_rate;
    user_county_tax = user_total_of_purchases * user_county_rate;
    user_city_tax = user_total_of_purchases * user_city_rate;
    user_special_tax = user_total_of_purchases * user_special_rate;
    user_total_tax = user_state_tax + user_county_tax + user_city_tax + user_special_tax;

/*Function calls
*/
city1.SetTotalSalesAmt(user_total_of_purchases);
city1.SetStateSalesTax(cali_state_tax_rate * user_total_of_purchases);
city1.SetCountySalesTax(butte_county_tax_rate * user_total_of_purchases);
city1.SetCitySalesTax(chico_city_tax_rate * user_total_of_purchases);
city1.SetSpecialSalesTax(chico_special_tax_rate * user_total_of_purchases);
city1.SetTotalSalesTax(user_total_tax);
city1.SetStateName(user_state_name1);
city1.SetCountyName(user_county_name1);
city1.SetCityName(user_city_name1);

city2.SetTotalSalesAmt(user_total_of_purchases);
city2.SetStateSalesTax(cali_state_tax_rate * user_total_of_purchases);
city2.SetCountySalesTax(butte_county_tax_rate * user_total_of_purchases);
city2.SetCitySalesTax(paradise_city_tax_rate * user_total_of_purchases);
city2.SetSpecialSalesTax(paradise_special_tax_rate * user_total_of_purchases);
city2.SetTotalSalesTax(user_total_tax);
city2.SetStateName(user_state_name2);
city2.SetCountyName(user_county_name2);
city2.SetCityName(user_city_name2);

city3.SetTotalSalesAmt(user_total_of_purchases);
city3.SetStateSalesTax(cali_state_tax_rate * user_total_of_purchases);
city3.SetCountySalesTax(sac_county_tax_rate * user_total_of_purchases);
city3.SetCitySalesTax(sac_city_tax_rate * user_total_of_purchases);
city3.SetSpecialSalesTax(sac_special_tax_rate * user_total_of_purchases);
city3.SetTotalSalesTax(user_total_tax);
city3.SetStateName(user_state_name3);
city3.SetCountyName(user_county_name3);
city3.SetCityName(user_city_name3);

city4.SetTotalSalesAmt(user_total_of_purchases);
city4.SetStateSalesTax(nevada_state_tax_rate * user_total_of_purchases);
city4.SetCountySalesTax(clark_county_tax_rate * user_total_of_purchases);
city4.SetCitySalesTax(las_vegas_city_tax_rate * user_total_of_purchases);
city4.SetSpecialSalesTax(0);
city4.SetTotalSalesTax(user_total_tax);
city4.SetStateName(user_state_name4);
city4.SetCountyName(user_county_name4);
city4.SetCityName(user_city_name4);

city5.SetTotalSalesAmt(user_total_of_purchases);
city5.SetStateSalesTax(arizona_state_tax_rate * user_total_of_purchases);
city5.SetCountySalesTax(maricopa_county_tax_rate * user_total_of_purchases);
city5.SetCitySalesTax(phoenix_city_tax_rate * user_total_of_purchases);
city5.SetSpecialSalesTax(0);
city5.SetTotalSalesTax(user_total_tax);
city5.SetStateName(user_state_name5);
city5.SetCountyName(user_county_name5);
city5.SetCityName(user_city_name5);

/*Call to print*/
city1.Print();
cout<<endl;
cout<<endl;

city2.Print();
cout<<endl;
cout<<endl;

city3.Print();
cout<<endl;
cout<<endl;

city4.Print();
cout<<endl;
cout<<endl;

city5.Print();
cout<<endl;
cout<<endl;
     
}

/*Running /home/ubuntu/workspace/assign2/assign2.cpp
Input states in order: 
California
California
California
Nevada
Arizona
Input counties in order:
Butte
Butte
Sacramento
Clark
Maricopa
Input cities in order:
Chico
Paradise
Sacramento
Las_Vegas
Phoenix
Input the prices of all items purchased: 
28.55
55.87
84.12
32.31
67.89
8.47
69.98
57.79
1000.00
15.00


Total purchases taxed: $1419.98
Tax due to California $85.1988
Tax due to Butte County: $3.54995
Tax due to the city of Chico: $0
Extra tax due to Chico through a special tax is: $14.1998
Total combined sales tax due for sales in Chico, California is: $102.949


Total purchases taxed: $1419.98
Tax due to California $85.1988
Tax due to Butte County: $3.54995
Tax due to the city of Paradise: $7.0999
Extra tax due to Paradise through a special tax is: $14.1998
Total combined sales tax due for sales in Paradise, California is: $110.048


Total purchases taxed: $1419.98
Tax due to California $85.1988
Tax due to Sacramento County: $3.54995
Tax due to the city of Sacramento: $7.0999
Extra tax due to Sacramento through a special tax is: $21.2997
Total combined sales tax due for sales in Sacramento, California is: $117.148


Total purchases taxed: $1419.98
Tax due to Nevada $65.3191
Tax due to Clark County: $51.8293
Tax due to the city of Las_Vegas: $0
Extra tax due to Las_Vegas through a special tax is: $0
Total combined sales tax due for sales in Las_Vegas, Nevada is: $117.148


Total purchases taxed: $1419.98
Tax due to Arizona $79.5189
Tax due to Maricopa County: $9.93986
Tax due to the city of Phoenix: $32.6595
Extra tax due to Phoenix through a special tax is: $0
Total combined sales tax due for sales in Phoenix, Arizona is: $122.118




Process exited with code: 0
*/

    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    