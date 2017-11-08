#include<iostream>
using namespace std;

/*Written by Carri Martin
 *Date: 11-2-2017
 *Lab 4.2 - Parallel Arrays
 
 This program will mimic an online shopping cart, with me as the proprietor.
 It will keep track of inventory, price  and the user's shopping cart.
*/

main() {
    
    const int NUM_ELEMENTS = 10; //Default constructor
    string item_name[NUM_ELEMENTS]; //Name of items for sale
    int inventory_count[NUM_ELEMENTS]; //Inventory for each item
    int total_inventory; //Shows inventory after item is sold
    float item_price[NUM_ELEMENTS]; //Price for each item
    int item_num = 0; //Item number for user to order
    int user_quantity_ordered = 0; //Quantity user orders
    int total_quantity_ordered = 0; //Combined quantities ordered
    float total_item_cost = user_quantity_ordered * item_price[NUM_ELEMENTS]; //Total cost of item: price * quantity ordered
    float shopping_cart_total = 0.0; //Combined total of order
    int i = 0;
    
    item_name[i] = "red_tennis_shoes";                inventory_count[i] = 50;                     item_price[i] = 35.99; ++i; //Arrays of items for sale, inventory and price
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
    cout<<"1 "<<item_name[0]<<". There are "<< inventory_count[0]<<" available, at a cost of $"<<item_price[0]<<" each."<<endl; //Description and pricing for shopper
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
    
    cin>>item_num;               //User input of order
    cin>>user_quantity_ordered;
    
    i <= 10;
    
    while (i <= NUM_ELEMENTS) {   //Loop for ordering, allows user to order and then quit with 0 0
        i = item_num - 1;        //Defines the item number correlating to the elements
        total_item_cost = user_quantity_ordered * item_price[i]; //Total of the single item ordered
            if (inventory_count >= 0) {                           //Inventory definition
               
               shopping_cart_total = shopping_cart_total + total_item_cost; //Keeps running total of cart
               inventory_count[i] = inventory_count[i] - user_quantity_ordered; //Keeps track of inventory
               total_quantity_ordered =  total_quantity_ordered + user_quantity_ordered; //Keeps running total of number of items in cart
               
        cout<<"Customer ordered "<<user_quantity_ordered<<" "<<item_name[i]<<" at a cost of $"<<item_price[i]<<" each, which totals $"<<total_item_cost; //Output that let's user know what they've ordered and different totals, such
        cout<<" which puts your shoppingcart total at $ "<<shopping_cart_total<<endl;                                                                    //as, single price, total price of single item, total cart price
        cout<<"Remaining available inventory of "<<item_name[i]<<" is: "<<inventory_count[i]<<endl;            //Reports remainng inventory
        cout<<"Your cart now has "<<total_quantity_ordered<<" items."<<endl;                                                           //Total number of items ordered
        cout<<"Please choose another item number and quantity, or enter item #0 and quantity of 0 to quit."<<endl;
        cin>>item_num; 
        cin>>user_quantity_ordered;
         
}           

         else { inventory_count < 0;                   //Attempt to disable if inventory is 0, but not working, but my quit prompt does work!
               cout<<"That many "<<item_name[i]<<" not available. Try again: "<<endl;
               cin>>item_num;
               cin>>user_quantity_ordered;
}
           if  (item_num == 0) {    //0 0 to end order
              
              
       cout<<"Your shopping cart has: "<<total_quantity_ordered<<" items in your cart."<<endl; //Upon ending, this reports total items in cart and total cost.
       cout<<"The total price of your cart is $"<<shopping_cart_total<<endl;
       
       return shopping_cart_total;
}        
}

             
    
    
     return 0;
}
    
/*Running /home/ubuntu/workspace/lab42/lab42.cpp
Please choose an item number and quantity.
1 red_tennis_shoes. There are 50 available, at a cost of $35.99 each.
2 blue_tennis_shoes. There are 50 available, at a cost of $35.99 each.
3 black_tennis_shoes. There are 50 available, at a cost of $35.99 each.
4 black_capris. There are 25 available, at a cost of $25.49 each.
5 white_capris. There are 25 available, at a cost of $25.49 each.
6 disney_stitch_tank_white. There are 12 available, at a cost of $31.99 each.
7 disney_stitch_tank_blue. There are 12 available, at a cost of $31.99 each.
8 disney_stitch_tshirt_white. There are 12 available, at a cost of $34.99 each.
9 disney_stitch_sweatshirt_black. There are 10 available, at a cost of $49.99 each.
10 disney_stitch_sweatshirt_white. There are 10 available, at a cost of $49.99 each.

Item # and quantity: 
3
3
Customer ordered 3 black_tennis_shoes at a cost of $35.99 each, which totals $107.97 which puts your shoppingcart total at $ 107.97
Remaining available inventory of black_tennis_shoes is: 47
Your cart now has 3 items.
Please choose another item number and quantity, or enter item #0 and quantity of 0 to quit.
6
2
Customer ordered 2 disney_stitch_tank_white at a cost of $31.99 each, which totals $63.98 which puts your shoppingcart total at $ 171.95
Remaining available inventory of disney_stitch_tank_white is: 10
Your cart now has 5 items.
Please choose another item number and quantity, or enter item #0 and quantity of 0 to quit.
8
3
Customer ordered 3 disney_stitch_tshirt_white at a cost of $34.99 each, which totals $104.97 which puts your shoppingcart total at $ 276.92
Remaining available inventory of disney_stitch_tshirt_white is: 9
Your cart now has 8 items.
Please choose another item number and quantity, or enter item #0 and quantity of 0 to quit.
10
2
Customer ordered 2 disney_stitch_sweatshirt_white at a cost of $49.99 each, which totals $99.98 which puts your shoppingcart total at $ 376.9
Remaining available inventory of disney_stitch_sweatshirt_white is: 8
Your cart now has 10 items.
Please choose another item number and quantity, or enter item #0 and quantity of 0 to quit.
9
6
Customer ordered 6 disney_stitch_sweatshirt_black at a cost of $49.99 each, which totals $299.94 which puts your shoppingcart total at $ 676.84
Remaining available inventory of disney_stitch_sweatshirt_black is: 4
Your cart now has 16 items.
Please choose another item number and quantity, or enter item #0 and quantity of 0 to quit.
0
0
Your shopping cart has: 16 items in your cart.
The total price of your cart is $676.84


Process exited with code: 164
*/
    
                   
    
