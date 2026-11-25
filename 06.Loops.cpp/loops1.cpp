#include <iostream>
#include <string>
using namespace std;
int main(){
    int total_teacups;

    cout<<"Enter the total no of the cups availble : ";
    cin>>total_teacups;

    int order;
    cout <<"Enter the customer's order :";
    cin>>order;
    //while loop execution
    while(total_teacups>=order){
        total_teacups = total_teacups-order;
        cout<<"Serving "<<order<<" tea \n Remaining "<<total_teacups<<endl;
        //teacups-- can be used 

    
    }

    return 0;
}