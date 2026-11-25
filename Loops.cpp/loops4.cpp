#include<iostream>
#include<string>
using namespace std;
int main(){
    
    int total_teacups;
    cout<<"Enter the total no of cups you have :";
    cin>>total_teacups;
    for(int i = 1;i<=total_teacups;i++){
        cout<<"You want tea!!! (yes for tea, no for stoppping giving tea)";

        string userdemand;
        cin>>userdemand;
        if(userdemand=="yes"||userdemand=="Yes"){
            continue;
        }else{
            break;
            cout<<"Stopping giving tea ";
        }

    
    }
    
}