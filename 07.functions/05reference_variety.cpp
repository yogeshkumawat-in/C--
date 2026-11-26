#include<iostream>
#include<string>
using namespace std;
//using & this symbol before the parameter we can make changes to the original value 
void pourchai(int &cups){//***********************
    cups = cups+5;
    cout<<"Pouring "<<cups<<" cups of chai";
}

int main(){
    int cups;
    cout<<"Enter the no of cups you want :";
    cin>>cups;
    //copy of cups not real cups. Cups value remain the same .
    //pourchai(cups) here cups are just an argument 
    pourchai(cups);
    cout<<"\n Total cups are "<<cups<<" chaicups "<<endl;
    return 0;


}