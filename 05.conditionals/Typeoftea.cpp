#include <iostream>
#include <string>
using namespace std;
int main(){
    cout<<"Enter the type of tea you want :";
    string order;
    cin>>order;
    if(order == "Green Tea"){
        cout<<"Your order is confirmed ";
    }else{
        cout<<"this tea is unavailable ";
    }
    return 0;
}