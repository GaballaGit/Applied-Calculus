#include <iostream>
#include <vector>
#include "dotProduct.h"

using namespace std;
int main(){
    char userSelect = '0';

    vector<std::string> operations = {
        "Dot Product"
    };

    //use size_t because it is unsigned, meaning it will never be negative incase this where to be negative for some reason?
    for (size_t i = 0; i < operations.size(); ++i){
        cout << i + 1 << ". " << operations[i] << endl;
    }
   
    while (userSelect != 'q'){
        cin >> userSelect;

        switch (userSelect)
        {
            case '1':
            {
                cout << "Please list two vectors" << endl << "Vector 1:" << endl;
                int vector1[3];
                int vector2[3];
                for(size_t i = 0; i < 3; ++i){
                    cin >> vector1[i]; 
                    cout << " "; 
                }
                cout << endl << "Vector 2:" << endl;
                for(size_t i = 0; i < 3; ++i){
                    cin >> vector2[i]; 
                    cout << " "; 
                }
                dotProduct newProduct(vector1,vector2);
                
                cout << "Your dot product is: " << newProduct.getDotProduct() << endl;

                break;
            }
            default:
            {
                cout << "Error in input please try again" << endl;
                break;
            }
        }
    }
    return 1;
    
}