#include <iostream>
using namespace std;
class A{
    public:
A(){
    cout<<"\ This is default constructor ";

}
}
A(int n){
    cout<<"\ This is parameterized constructor";
}


int main(){
    A a
    A b(20)
    A c(a)
    return 0;
}