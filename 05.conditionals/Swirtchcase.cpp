#include <iostream>
#include <string>
using namespace std;

int main(){
    int choice;
    double price;
    cout<<"Select your tea :\n";
    cout<<"1. Green Tea \n";
    cout<<"2. Black Tea  \n";
    cout<<"3. Oolong Tea \n";
    cout<<"Enter your choice :";
    cin>>choice;

    switch(choice){
        case 1:
            price = 2.0;
            cout<<"The price of the tea is "<<price<<endl;
            break;

        case 2:
            price = 5.0;
            cout<<"The price of the tea is "<<price<<endl;  
            break;

        case 3:
            price = 8.0;
            cout<<"The price of the tea is "<<price<<endl;
            break;

        default:
            cout<<"invalid_syntax"<<endl;
            break;

    



    }


}