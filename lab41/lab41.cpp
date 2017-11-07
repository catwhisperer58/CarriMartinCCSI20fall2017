#include<iostream>
#include<string>
using namespace std;

/*Written by Carri Martin
 *On 10-31-2017
 *Lab 4.1 Single Arrays
 */
 //This class will store a single integer array and each of the following functions: Find_min, Find_max, Find_sum, Num_even,
 //Num_odd, Search_, Is_sorted.  

class ArrayTools {
    public:
    
    ArrayTools(int myArray, int SIZE);
        
        private:
       
       int myArray[];
       int SIZE[];
       int Find_min[];
       int Find_max[];
       int Find_sum[];
       int Num_even[];
       int Num_odd[];
       int Search[];
       int Is_sorted[];
        
       void Print();
};
    
     int Find_min[] {
}
         Find_min = myArray[0];
        for (i = 0; i < SIZE; i++) {
           if (myArray[i] < Find_min) {
                 Find_min = myArray[i];

}
}
     int Find_max[] {
         Find_max = myArray[0];
         for (i=0; i<SIZE; i++) {
             if (myArray > Find_max) {
                 Find_max = myArray[i];
}                 
}
}
    

    

    
    


int main()
{
    const int SIZE = 10;
    int myArray[SIZE];
    
    for(int i = 0; i<SIZE;i++){
        cin>>myArray[i];
    }
    ArrayTools a(myArray,SIZE);
    
    a.Print();
    cout<<"Min: "<<a.Find_min(0, 4)<<endl;
    cout<<"Max: "<<a.Find_max(5, 10)<<endl;
    cout<<"Sum = "<<a.Find_sum()<<endl;
    cout<<"Search 10"<<a.Search(10)<<endl;
    cout<<"Sorted? "<<a.Is_sorted()<<endl;
    
    return 0;
}