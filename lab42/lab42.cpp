#include<iostream>
using namespace std;

/*Written by Carri Martin
 *Date: 11-2-2017
 *Lab 4.2 - Parallel Arrays
 
 This program will mimic an online shopping cart, with me as the proprietor.
 It will keep track of inventory, price  and the user's shopping cart.
*/

main() {
    
    const int NUM_ELEMENTS = 10; //Number of elements
    string item_name[NUM_ELEMENTS]; //Name of items for sale
    string total_item_name;
    int inventory_count[NUM_ELEMENTS]; //Inventory for each item
    int total_inventory = 0;
    float item_price[NUM_ELEMENTS]; //Price for each item
    int item_num = 0; //Item number for user to order
    int user_quantity_ordered = 0; //Quantity user orders
    int total_quantity_ordered = 0;
    float total_item_cost = user_quantity_ordered * item_price[NUM_ELEMENTS]; //Total cost of item: price * quantity ordered
    float shopping_cart_total = 0.0;
    int i = 0;
    
    item_name[i] = "red_tennis_shoes";                inventory_count[i] = 50;                     item_price[i] = 35.99; ++i;
    item_name[i] = "blue_tennis_shoes";               inventory_count[i] = 50;                     item_price[i] = 35.99; ++i;
    item_name[i] = "black_tennis_shoes";              inventory_count[i] = 50;                     item_price[i] = 35.99; ++i;
    item_name[i] = "black_capris";                    inventory_count[i] = 25;                     item_price[i] = 25.49; ++i;
    item_name[i] = "white_capris";                    inventory_count[i] = 25;                     item_price[i] = 25.49; ++i;
    item_name[i] = "disney_stitch_tank_white";        inventory_count[i] = 12;                     item_price[i] = 31.99; ++i;
    item_name[i] = "disney_stitch_tank_blue";         inventory_count[i] = 12;                     item_price[i] = 31.99; ++i;
    item_name[i] = "disney_stitch_tshirt_white";      inventory_count[i] = 12;                     item_price[i] = 34.99; ++i;
    item_name[i] = "disney_stitch_sweatshirt_black";  inventory_count[i] = 10;                     item_price[i] = 49.99; ++i;
    item_name[i] = "disney_stitch_sweatshirt_white";  inventory_count[i] = 10;                     item_price[i] = 49.99; ++i;
    
    
         
    cout<<"Please choose an item number and quantity."<<endl;
    cout<<"1 "<<item_name[0]<<". There are "<< inventory_count[0]<<" available, at a cost of $"<<item_price[0]<<" each."<<endl;
    cout<<"2 "<<item_name[1]<<". There are "<< inventory_count[1]<<" available, at a cost of $"<<item_price[1]<<" each."<<endl;
    cout<<"3 "<<item_name[2]<<". There are "<< inventory_count[2]<<" available, at a cost of $"<<item_price[2]<<" each."<<endl;
    cout<<"4 "<<item_name[3]<<". There are "<< inventory_count[3]<<" available, at a cost of $"<<item_price[3]<<" each."<<endl;
    cout<<"5 "<<item_name[4]<<". There are "<< inventory_count[4]<<" available, at a cost of $"<<item_price[4]<<" each."<<endl;
    cout<<"6 "<<item_name[5]<<". There are "<< inventory_count[5]<<" available, at a cost of $"<<item_price[5]<<" each."<<endl;
    cout<<"7 "<<item_name[6]<<". There are "<< inventory_count[6]<<" available, at a cost of $"<<item_price[6]<<" each."<<endl;
    cout<<"8 "<<item_name[7]<<". There are "<< inventory_count[7]<<" available, at a cost of $"<<item_price[7]<<" each."<<endl;
    cout<<"9 "<<item_name[8]<<". There are "<< inventory_count[8]<<" available, at a cost of $"<<item_price[8]<<" each."<<endl;
    cout<<"10 "<<item_name[9]<<". There are "<< inventory_count[9]<<" available, at a cost of $"<<item_price[9]<<" each."<<endl;
    cout<<endl;
    cout<<"Item # and quantity: "<<endl;
    
    cin>>item_num;
    cin>>user_quantity_ordered;
    
    i <= 10;
    
    while (i <= NUM_ELEMENTS) {
        i = item_num - 1;
        total_item_cost = user_quantity_ordered * item_price[i];
           if (inventory_count >= 0) {
               inventory_count[i] = inventory_count[i] - user_quantity_ordered;
               shopping_cart_total = shopping_cart_total + total_item_cost;
               total_item_name = item_name[i];
               total_quantity_ordered =  total_quantity_ordered + user_quantity_ordered;
               
        cout<<"Customer ordered "<<user_quantity_ordered<<" "<<item_name[i]<<" at a cost of $"<<item_price[i]<<" each, which totals $"<<total_item_cost;
        cout<<" which puts your shoppingcart total at $ "<<shopping_cart_total<<endl;
        cout<<"Remaining available inventory of "<<item_name[i]<<" is: "<<inventory_count[i] - user_quantity_ordered<<endl;
        cout<<"Your cart now has "<<total_quantity_ordered<<" items."<<endl; 
        cout<<"Please choose another item number and quantity, or enter item #0 and quantity of 0 to quit."<<endl;
        cin>>item_num; 
        cin>>user_quantity_ordered;
        
        
}
           else { inventory_count < 0;
               cout<<"That many "<<item_name[i]<<" not available. Try again: "<<endl;
               cin>>item_num;
               cin>>user_quantity_ordered;
}
           if (item_num == 0) {
              
              
       cout<<"Your shopping cart has: "<<total_quantity_ordered<<" items in your cart."<<endl;
       cout<<"The total price of your cart is $"<<shopping_cart_total<<endl;
       
       return shopping_cart_total;
         
}
}
             
    
    
     return 0;
}
    
    
    
                   
    
