#include <iostream>
#include<string>
using namespace std;
int main(){
    string Teatypes[4]={"Oolong tea","Orange tea","Lemon tea","Black Tea"};
    for(int i =0;i<4;i++){
        if(Teatypes[i]=="Oolong tea"){
            cout<<"Skipping "<<Teatypes[i]<<endl;
            continue;

        }
        cout<<"Brewing "<<Teatypes[i]<<"....."<<endl;

    }
}