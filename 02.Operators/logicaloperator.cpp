#include <iostream>
#include <string>
using namespace std;
int main(){
    cout<<"To check eligibilty for a discount enter the details below ";
    cout<<"\nEnter your profession :";
    string Profession;
    cin>>Profession;
    cout<<"Enter the no of tea cups you want :";
    int Teacups;
    cin>> Teacups;
    if(Profession=="Student" or "student"){//USer input can be taken in the form of booklean characters 
        cout<<"You are eligible for the discount";//bool is student then use c out to mention that 1 for yes student and 0 for no 
        

    }else{
        cout<<"You are not eligible ";
    
    if(Teacups>15){
        cout<<"you are eligible for the discount ";

    }else{
        cout<<"You are not eligible for the discount ";
    }
    }
}