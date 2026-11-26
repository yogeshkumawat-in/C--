//functon overloading = Same function name but different execution based on datatype entry
#include<iostream>
#include<string>
using namespace std;

void servechai(string Teatype = "Mint tea "){//default parameter 
    int cups = 4;//formal parameter
    cout<<"Serving "<<Teatype<<endl;
}
void servechai(int cups){
    cout<<"Serving "<<cups<<" cups of chai ";

}
void servechai(int cups, int tealeaves, int ingredients){
    cout<<"serving"<<cups<<" cups of tea"<<".using "<<tealeaves<<" tealeaves"<<" with this "<<ingredients<<endl;
}


int main(){
    servechai("Lemon tea ");
    servechai(3);//actual parameter
    return 0;
}