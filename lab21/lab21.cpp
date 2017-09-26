#include <iostream> //Basic input/output
#include <cmath> //Allows for math calculations
#include <cstdlib> //Standard library
using namespace std;

int main() {
    double wind_speed                = 0.0; //Starting wind speed
    double temp_f                    = 0.0; //Temperature
    double old_style_wind_chill        = 0.0; //Windchill according to old formula
    double new_style_wind_chill        = 0.0; //Windchill according to new formula
    double total_diff_of_two_wind_chills = 0.0; //Difference between old and new windchills
    
    wind_speed = 4;
    temp_f = 30;
    old_style_wind_chill = 0.081 *((3.71 * sqrt(wind_speed)) + 5.81 - (0.25*wind_speed))*(temp_f - 91.4) + 91.4; //Old formula
    new_style_wind_chill = 35.74 + 0.6215 * temp_f - 35.75 * pow(wind_speed,0.16) + 0.4275 * temp_f * pow(wind_speed,0.16); //New formula
    
    cout << "Enter starting wind speed: " << endl;
    cin >> wind_speed;
    
    cout << "Enter temperature: " << endl;
    cin >> temp_f;
    
    total_diff_of_two_wind_chills = old_style_wind_chill - new_style_wind_chill; //Difference between two windchills
    
    cout << "If you have a windspeed velocity measuring " << wind_speed << ", with a temperature of " << temp_f << " degrees, then using the old style windchill formula gives";
    cout << " a windchill factor of " << old_style_wind_chill << endl;
    cout << "Entering those same numbers of windspeed and temperature into the new style windchill formula, gives you a windchill factor of " << new_style_wind_chill;
    cout << ", which then, gives you a difference of " << total_diff_of_two_wind_chills << "." << endl;
    
    
}
/*Enter temperature: 
30
If you have a windspeed velocity measuring 4, with a temperature of 30 degrees, then using the old style windchill formula gives a windchill factor of 30.5753
Entering those same numbers of windspeed and temperature into the new style windchill formula, gives you a windchill factor of 25.767, which then, gives you a difference of 4.8083.


Process exited with code: 0

Enter temperature: 
39.25
If you have a windspeed velocity measuring 10, with a temperature of 39.25 degrees, then using the old style windchill formula gives a windchill factor of 30.5753
Entering those same numbers of windspeed and temperature into the new style windchill formula, gives you a windchill factor of 25.767, which then, gives you a difference of 4.8083.


Process exited with code: 0

Enter temperature: 
100
If you have a windspeed velocity measuring 2, with a temperature of 100 degrees, then using the old style windchill formula gives a windchill factor of 30.5753
Entering those same numbers of windspeed and temperature into the new style windchill formula, gives you a windchill factor of 25.767, which then, gives you a difference of 4.8083.


Process exited with code: 0




*/
