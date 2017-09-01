#include <iostream>
using namespace std;

/* US Population Lab 1.3
  This program will estimate the population growth in the US for any given
  future year.
  
  Author: Carri Martin
  Date: August 31, 2017
  Data Source: www.census.gov/popclock/
*/

int main () {
    
    int us_population_2017 = 325773883;
    int birth_per_year = ((60 * 60 * 24 * 365) / 8); //This is 1 birth every 8 seconds//
    int deaths_per_year = ((60 * 60 * 24 * 365) / 12); //This is 1 death every 12 seconds//
    int migrants_per_year = ((60 * 60 * 24 * 365) / 33); //This is 1 international migrant every 33 seconds//
    int net_gain_per_year = birth_per_year + migrants_per_year - deaths_per_year;
    int num_years_past_2017 = 99;
    int future_population = us_population_2017 + net_gain_per_year * num_years_past_2017;
    int this_year = 2017;
    int future_year = this_year + num_years_past_2017;
    
    
    
    cout << "This year, " << this_year << ", the approximate population in the United States is " << us_population_2017 << "." << endl;
    cout << "Every year we have an approximate net gain of " << net_gain_per_year << " people in our country." << endl;
    cout << "Using the numbers available, in " << num_years_past_2017 << " years, " << future_year << ", the population will be approximatly ";
    cout << future_population << " people living in the US." << endl;
    
    
    }