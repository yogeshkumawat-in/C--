//program for the arithemtic operations 
#include <iostream>
#include <string>
using namespace std;
int main(){
    int quantity_cups;
    double discount_price,total_price,price_per_cup;
    cout<<"Enter the no of tea cups :";
    cin>>quantity_cups;

    cout<<"Enter the price of one cup :";
    cin>>price_per_cup;
    total_price = price_per_cup*quantity_cups;
    // apply 5% discount when the total price is above 100
    if(total_price>100){
        total_price = total_price-(total_price*5)/100;
        cout<<"Total price after the discount is "<<total_price;
    }else{
        total_price = total_price;
        cout<<"total price is "<<total_price;
    }
    
    return 0;
}
