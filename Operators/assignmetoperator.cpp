//program for the addition of bags if user have less using assginment operator 
#include <iostream>
#include <string>
using namespace std;
int main(){
    cout<<"Enter the no of tea bags you have :";
    int teabags;
    cin>>teabags;
    if(teabags<10){
        cout<<"You got 5 more bags ";
        teabags = teabags+5;
        cout<<teabags;
    }else{
        cout<<"You already having enough bags ";
        teabags = teabags;
    }   cout<<teabags;

}
    

   