#include <iostream>
#include<string>
using namespace std;
int main(){
    string Teatypes[5]={"Lemon Tea","Black Tea","Orange Tea","Oolong Tea","Ginger Tea"};

    //Special looping syntax for (for loop)
    for(string Tea_type : Teatypes){
        cout<<"The type of tea is : "<<Tea_type<<endl;
    }
}