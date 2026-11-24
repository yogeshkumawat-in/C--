#include <iostream>
#include <string>
using namespace std;
int main(){
    cout <<"Enter the roll number of the student :";
    int Rollnumber;
    cin>>Rollnumber;
    cout <<"Enter the name of the student : ";
    string Studentname;
    cin>>Studentname;
    cout<<"Enter the nature of the student : ";
    string Nature;
    getline(cin >> ws, Nature);
    cout<<"Thank you user ";
    return 0;
}