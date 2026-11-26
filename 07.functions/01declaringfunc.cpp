#include <iostream>
#include<string>
using namespace std;

//Declaration and definition of function 
int checktemperature(int temperature){
    cout<<" Temperature is = "<<temperature;
    return temperature;
}

//Declaration of function 
void servechai(int cups);

int main(){
    checktemperature(50);

    servechai(3);
    return 0;
}
//defination of function
void servechai(int cups){
    cout<<"\n Serving "<<cups<<" of chai "<<endl;
}