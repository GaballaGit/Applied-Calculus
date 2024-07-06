#include <iostream>
#ifndef DOTPRODUCT_H
#define DOTPRODUCT_H

class dotProduct
{
public:
    dotProduct(int vector1[3], int vector2[3]) {
        for(size_t i = 0; i < 3; i++){
            vectorOne[i] = vector1[i];
            vectorTwo[i] = vector2[i];
        }
    }

    int getDotProduct(){
        int dotCalc = 0;
        for(int i = 0; i < 3; i++){
            dotCalc += (vectorOne[i] * vectorTwo[i]);
        }
        return dotCalc;
    } 

private:
    int vectorOne[3];
    int vectorTwo[3];
};

#endif