#include <iostream>
#include <string>
using namespace std;
int main(){
    cout<<"Enter how many cups you want to buy : ";
    int teacups;
    cin>>teacups;

    string member_check;
    cout<<"\nTell us you are a member since a year or not answer in yes or no :";
    cin>>member_check;
    
    if(teacups>12 , member_check=="yes" or "Yes"){
        cout<<"You are eligible for the discount ";

    }else{
        cout<<"you are not eligible";
   

    }
    return 0;

    
}