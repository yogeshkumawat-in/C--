//classes and objects
//private data members of a class can not be accessed by object of same
# include<iostream>
using namespace std;
class A{
    public :
    void show(){
        cout<<"\n This is show function";

    }
    public :
    void display(){
        cout<<"\n This is display function";

    }
};
class B : protected A{
    public:
    void shown(){
        cout<<"\n I am shown function";
    }
};
int main(){
A a;
B b;
a.show();
a.display();
b.shown();
// b.display()
return 0;
}