#include <iostream>
#include <string>
using namespace std;

//lembda functions are used in libraries and frameworks

int main(){

    //lembda function
    auto preparechai = [](int cups){
        cout<<"Preparing "<<cups<<" cups of tea "<<endl;

    };
    preparechai(6);

    return 0;
}