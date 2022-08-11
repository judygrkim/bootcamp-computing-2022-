//write two structures Point and Rectangle, which takes two Points that make a rectangle in a coordinate plane

//Point has two attributes (float x, float y)
//Rectangle has two attributes(Point a, Point b) which represent the top-left corner, 
    //and the bottom-right corner of the rectangle

//write the following functions that take a Rectangle as an arugment
    //float area(Rectangle rect) => returns the area of the Rectangle
    //float width(Rectangle rect) => returns the width of the Rectangle
    //float height
    //void midpoint(Rectangle rect) => prints the midpoint of the Rectangle 




#include <stdio.h>


typedef struct Point {                                              //type 정의  
    float x;
    float y;
} Point;                                                            //별명 정함 


typedef struct Rectangle {
    Point a;
    Point b;
} Rectangle;


float width(Rectangle rect) {
    return rect.b.x - rect.a.x;
}

float height(Rectangle rect) {
    return rect.a.y - rect.b.y;
}

float area(Rectangle rect) {
    return width(rect) * height(rect);
}

void midpoint(Rectangle rect) {
    float midX = rect.a.x + width(rect)/2;
    float midY = rect.b.y + height(rect)/2;
    printf("Midpoint is at (%f, %f)\n", midX, midY); 
}



int main(void) {
    Point a = {1,5};
    Point b = {6,1};

    Rectangle rect = {a, b};

    printf("width is %f\n", width(rect));
    printf("height is %f\n", height(rect));
    printf("area is %f\n", area(rect));
    

    midpoint(rect);

    return 0;
}