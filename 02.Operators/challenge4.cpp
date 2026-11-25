#include <iostream>
#include <string>
using namespace std;
int main(){
    int stock = 5;
    int Teatype;

    cout<<"Enter the tea type to check (1 for green,2 for black, 4 for oolong ) :";
    cin>> Teatype;

    if(stock and Teatype){
        cout<<"This tea is available in stock ! "<<endl;
    }else{
        cout<<"Sorry ! this tea is out of stock ";
    }
    
}
