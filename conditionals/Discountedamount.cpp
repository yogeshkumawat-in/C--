#include <iostream>
#include <string>
using namespace std;
int main(){
    int teacups;
    cout<<"Enter the no of tea cups you want to order :";
    cin>>teacups;
    double totalamount,discountedamount,pricepercup;
    
    cout<<"\nEnter the price of one cup of tea : ";
    cin>>pricepercup;
    
    totalamount = pricepercup*teacups;
    
    if(teacups>=100){
        cout<<"50% special discount is available for you";
        discountedamount = totalamount-(totalamount*50)/100;
        cout<<"You have to pay "<<discountedamount;


    }
    if(teacups>20 and teacups<100){
        cout<<"You got a discount of 20% ";
        discountedamount = totalamount - (totalamount*20)/100;
         cout<<"You have to pay "<<discountedamount;

    }else{
    };
    if(teacups>=10 and teacups<=20){
        cout<<"you got a discount of 10%";
        discountedamount = totalamount - (totalamount*10)/100;
         cout<<"You have to pay "<<discountedamount;

    }else{
        cout<<" ";
    }
    if(teacups<10){
        cout<<"No discount is available for you ";
        totalamount = totalamount;
         cout<<"You have to pay "<<totalamount;

    }else{

    }

}