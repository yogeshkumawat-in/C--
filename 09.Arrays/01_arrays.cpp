#include<iostream>
#include<string>
using namespace std ;

int main(){
    int chai_temperature[5] = {85,67,90,65,77}; 
    // for(int chai_temp : chai_temperature){
    //     cout<<"The temperature of the tea is "<<chai_temp<<endl;

    // }
    for(int i =0;i<5;i++){
        cout<<"\n The temperature of the tea is :"<<chai_temperature[i];//** Dont miss to enter i with square bracket

    }


    return 0;
}