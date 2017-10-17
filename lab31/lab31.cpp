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
    
    void SetAttUnlmtdPlus(int plan_A);
    void SetAttUnlmtdChoice(int plan_B);
    void SetAttFamily(int plan_C);
    void SetVerizonUnlmtd(int plan_D);
    void SetSprintUnlmtd(int plan_E);
    void SetSprint2GB(int plan_F);
    void SetPlanFeatures(int f1, int f2, int f3, int f4, f5);
    
    int GetAttUnlmtdPlus() const;
    int GetAttUnlmtdChoice() const;
    int GetAttFamily() const;
    int GetVerizonUnlmtd() const;
    int GetSprintUnlmtd() const;
    int GetSprint2GB() const;
    int GetPlanFeatures() const;
    
    private:
    
    int one_line;
    int two_lines;
    int add_lines;
    int add_tablets;
    int num_gb;
    string personal_hotspot;
};

void Plans::SetAttUnlmtdPlus(int plan_A){
   plan_a = plan_A;
   return plan_a;
}