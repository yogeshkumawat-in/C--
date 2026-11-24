#include <iostream>
#include <string>
using namespace std;
 int main(){
    cout<<"Available tea are--\n";
    cout<<"1.Lemon\n2.Mint \n 3.Ginger \n4.Green";
    string teatype;
    cout <<"\nEnter the type of tea you want :";
    cin>>teatype;

    float Price;
    Price = 50.36;
    cout <<"Price of the tea is "<<Price;

    char Rating;
    Rating = 'A';
    cout<<"\nRating of the tea is : "<<Rating;
    return 0;

}