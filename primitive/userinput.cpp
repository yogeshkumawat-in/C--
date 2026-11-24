#include <iostream>
#include <string>
using namespace std;
int main(){
    string Choice;
    int Quantity;

    cout<<"Enter your order from the given list : ";
    cout<<"1.CHAI\n 2.Flavoured Milk \n 3.Coffee \n 4.Biscuits\n";
    getline(cin,Choice);
    cout<<"How much quantity of  "<< Choice <<"  Would you like to order";
    cin >> Quantity;

    cout <<Choice;

    cout <<Quantity;


    return 0;


}