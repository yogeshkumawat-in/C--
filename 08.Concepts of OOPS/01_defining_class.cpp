#include <iostream>
#include <string>
#include <vector>
using namespace std;

class CHAI {
    public:
        //Data Members (Attributes)
        string Teatypes;//Name of the tea 
        int Servings;// No of cups of the tea
        vector <string>Ingredients;//Ingredients used in the tea

        //Member Function
        void Display_Chai_details(){
            cout<<"Tea name :"<<Teatypes<<endl;
            cout<<"Servings :"<<Servings<<endl;
            cout<<"Ingredients : ";
            for(string Ingre : Ingredients ){
                cout<<Ingre<<", ";
            }
            cout<<endl;
        }

};  

int main(){
    CHAI chaiOne;
    chaiOne.Teatypes = "Lemon Tea";
    chaiOne.Servings = 2;
    chaiOne.Ingredients = {"Water","Lemon","Honey","Tea",};
    
    chaiOne.Display_Chai_details();

    CHAI chaitwo;
    chaitwo.Teatypes = "Masala Chai";
    chaitwo.Servings = 5;
    chaitwo.Ingredients = {"Masala","Chai","Ginger","Water","Sugar"};

    chaitwo.Display_Chai_details();

    
    return 0;
}
