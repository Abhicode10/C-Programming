#include<stdio.h>
// function declration 
float squareArea(float side);
float cricleArea(float radius);
float rectangularArea(float l, float w);


int main(){
    float side = 10.0;
    printf("Area of square:%f\n", squareArea(side));
    float radius = 12.0;
    printf("Area of cricle:%f\n", cricleArea(radius));
    float l=5.0;
    float w=10.0;
    printf("Area of rectangular:%f\n", rectangularArea(l, w));
    return 0;
    

}

// Function defintion 
float squareArea(float side){
    return side*side;

}
float cricleArea(float radius){
    return 3.14*radius*radius;

}
float rectangularArea(float l, float w){
    return l * w;
    
}
