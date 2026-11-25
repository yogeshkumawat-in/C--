#include <iostream>
#include<string>
using namespace std;
int main(){
    string Teatypes[5]={"Lemon Tea","Black Tea","Orange Tea","Oolong Tea","Ginger Tea"};
    for(int i =0;i<5;i++){
        cout<<"surving 3 cups of "<<Teatypes[i]<<endl;
            for(int i =1;i<4;i++){
                cout<<i<<" cups of "<<Teatypes[i]<<" served"<<endl;
            }
    }

}