#include <iostream>
#include<string>
using namespace std;
int main(){
    int teacups;
    cout<<"Enter the no of teacups :";
    cin>>teacups;
   
    
    for(int i = 1 ;i<=teacups;i++){
        cout<<"Brewing "<<i<<" cup of tea....."<<endl;

    }
    return 0 ;
}