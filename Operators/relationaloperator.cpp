#include <iostream>
#include <string>
using namespace std;
int main(){
    cout<<"***********LOYALTY PROGRAM ************";
    cout<<"\nEnter the no of tea cups to buy :";
    int teacups;
    cin>>teacups;
    if(teacups>20){
        cout<<"You got a golden badge as a prime customer ";
    }else{
        cout<<"";
        

    }
    if(teacups>=10 & teacups<=20){
        cout<<"You got a silver batch from us ";

    }else{
        cout<<"Thank you customer";
    }
    return 0;
}