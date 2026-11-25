#include<iostream>
#include<string>
using namespace std;
int main(){
    string response;
    while(true){
        cout<<"\n Do you want more tea (yes for more) (Type stop to exit )?: ";
        getline(cin,response);
       
        if(response=="yes"){
             cout<<"\n Here is another cup of tea for you "<<endl;
        }
        if(response=="stop"){
            cout<<"||||||||Thank you user|||||||\n Exiting.... ";
            break;
        
        }else{
            if(response=="yes"){
                continue;
            }else{
                cout<<"*******Invalid syntax*******";
            }

    }
    
}

}