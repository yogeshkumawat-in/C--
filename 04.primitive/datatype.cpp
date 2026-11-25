#include <iostream>
#include <string>
using namespace std;
int main(){
    string tea_name = "Lemontea";
    cout<<tea_name<<endl;
    double teaprice = 3.43;
    int  teaquantity = 5;
    float  discount = 1.2;

    float totalamount = (teaprice*teaquantity)-discount;
    cout<<totalamount<<endl;
   
    cout << teaprice <<endl ;
    return 0;


}