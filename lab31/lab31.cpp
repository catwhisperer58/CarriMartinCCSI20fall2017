#include<iostream>
#include<string>
using namespace std;

/*Written by Carri Martin 
10-10-2017
Lab 3.1 - Conditions
This program will determine the best cell phone plan based on the usage
*/

class Plans {
    
    public:
    
    void SetAttUnlimitedPlus(int plan_A);
    void SetAttUnlimitedChoice(int plan_B);
    void SetAttFamily(int plan_C);
    void SetVerizonUnlimited(int plan_D);
    void SetSprintUnlimited(int plan_E);
    void SetSprint2GB(int plan_F);
    
    int GetAttUlimitedPlus() const;
    int GetAttUnlimitedChoice() const;
    int GetAttFamily() const;
    int GetVerizonUnlimited() const;
    int GetSprintUnlimited() const;
    int GetSprint2GB() const;
    
    void Print();
    
    private:
    
    int first_line_price;
    int price_for_two_lines;
    int each_additional_phone;
    int per_tablet;
    int per_phone;
    int price_1GB;
    int price_3GB;
    int price_6GB;
    int price_10GB;
    int price_16GB;
    int price_25GB;
    
    void Plans::SetAttUnlimitedPlus(int plan_A) {
       return;
    }
    
    void Plans::SetAttUnlimitedChoice(int plan_B) {
        return;
    }
    
    void Plans::SetAttFamily(int plan_C) {
        return;
    }
    
    void Plans::SetVerizonUnlimited(int plan_D){
        return;
    }
    
    void Plans::SetSprintUnlimited(int plan_E) {
        return;
    }
    
    void Plans::SetStateSalesTax(int plan_F) {
        return;
    }
    
    int Plans::GetAttUnlimitedChoice() const {
        return plan_A;
    }
    
    int Plans::GetAttUnlimitedChoice() const {
        return plan_B;
    }
    
    int Plans::GetAttFamily() const {
        return plan_C;
    }
    
    int Plans::GetVerizonUnlimited() const {
        return plan_D;
    }
    
    int Plans::GetSprintUnlimited() const {
        return plan_E;
    }
    
    int Plans::GetSprint2GB() const {
        return plan_F;
    }
    
    int main(){
        string user1;
        string user2;
        string user3;
        
    }
    
    
    
    
    
    
    
    
    
    
