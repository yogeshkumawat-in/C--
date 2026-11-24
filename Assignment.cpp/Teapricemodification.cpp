#include <iostream>
#include <string>
using namespace std;
int main(){
    cout<<"Enter the price of the tea : ";
    int Tea_price;
    cin>>Tea_price;
    cout<<"\nModified tea price is gievn below ";
    float Modified_tea_price;
    Modified_tea_price = Tea_price +(Tea_price*10)/100;
    cout<<"\n Modifeid tea price is "<<Modified_tea_price;

    return 0;


    
}