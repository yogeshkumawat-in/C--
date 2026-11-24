#include <iostream>
#include <string>
using namespace std;
int main(){
    int teacups;
    cout<<"Enter the no of cups you want ";
    cin>>teacups;
    float cup_price;
    cout<<"Enter the price of one cup ";
    cin>>cup_price;
    float total_amount;
    total_amount = cup_price*teacups;
    float final_price;
    final_price = total_amount + (total_amount*10)/100;
    cout<<"You have to pay a final amount of "<<final_price;
    
}