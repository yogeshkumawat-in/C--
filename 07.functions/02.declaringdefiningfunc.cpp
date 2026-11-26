#include<iostream>
#include<string>
using namespace std;

//declaration of function 
void Checktemperature(int temperature);

//defination of function
void Checktemperature(int temperature){
    cout<<"Checking temperature......Temperature is "<<temperature<<endl;
}

int main(){
    Checktemperature(85);
    
}
