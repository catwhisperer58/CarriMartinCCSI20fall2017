#include<iostream>
using namespace std;

/*Added onto by Carri Martin
 *10/30/2017
 *This program wil convert temperatures between Kelvin, Fahrenheit and Celsius
 */
 /*TemperatureConverter class definition*/
 class TemperatureConverter { 
     public:
        TemperatureConverter(); //Default constructor
        TemperatureConverter(double kelvin_);
        void SetTempFromKelvin (double sets_kelvin_);//Mutator with the variable kelvin_
        void SetTempFromCelsius( double sets_celsius_);//Mutator
        void SetTempFromFahrenheit(double sets_fahrenheit_); //Mutator
        
        
        double GetTempFromKelvin () const;
        double GetTempAsCelsius () const;
        double GetTempAsFahrenheit () const;
        
        void PrintTemperatures(); //Printing call
        
     private:
     
     double kelvin_;
     double celsius_;
     double fahrenheit_;
        
};

TemperatureConverter::TemperatureConverter() { //Default constructor
    kelvin_ = 0;
}
TemperatureConverter::TemperatureConverter(double kelvin_) { //Second constructor
    kelvin_ >= 0;
}
void TemperatureConverter::SetTempFromKelvin(double sets_kelvin_) {
    kelvin_ = sets_kelvin_;
    return;
}
void TemperatureConverter::SetTempFromCelsius(double sets_celsius_) {
    celsius_ = sets_celsius_;
       if ((celsius_= kelvin_ - 273.15) && (celsius_ >= -273.15)) {
    return;
}
    
}
int main ()
{
    TemperatureConverter temp1; //testing default constructor
    TemperatureConverter temp2(274); //testing overloaded constructor
    
    temp1.PrintTemperatures();
    temp2.PrintTemperatures();
    
    temp1.SetTempFromKelvin(400.15); //testing mutator function
    cout<<temp1.GetTempFromKelvin()<<endl;//testing accessor function
    temp1.PrintTemperatures();
    
    temp2.SetTempFromCelsius(32); //testing other functions
    cout<<temp2.GetTempAsCelsius()<<endl;
    temp2.PrintTemperatures();
    
    temp2.SetTempFromFahrenheit(32);
    cout<<temp2.GetTempAsFahrenheit()<<endl;
    temp2.PrintTemperatures();
    
    return 0;
}