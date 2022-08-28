#include<iostream>
using namespace std;
void area_square(float side){
    float ar=side*side;
    cout<<"Area of square is "<<ar<<endl;
}
float area_circle(){
    cout<<"Enter radius: "<<endl;
    float radius;
    cin>>radius;
    return (3.14*radius*radius);
}
float area_rectangle(float height, float width){
    return height*width;
}
int main(){
    int x;
    float side,height,width;
    cout<<"Please enter a valid operation number from the below menu: "<<endl;
    cout<<"1. Calculate area of circle"<<endl;
    cout<<"2. Calculate area of square"<<endl;
    cout<<"3. Calculate area of rectangle"<<endl;
    cin>>x;
    if(x==1){
        float area1=area_circle();
        cout<<"Area of circle is "<<area1;
    }
    else if(x==2){
        cout<<"Enter side of square: "<<endl;
        cin>>side;
        area_square(side);
    }
    else if(x==3){
        cout<<"Enter height and width of rectangle: "<<endl;
        cin>>height>>width;
        float area2=area_rectangle(height,width);
        cout<<"Area of rectangle is "<<area2;
    }
    else{
        cout<<"Invalid operation number to be performed"<<endl;
    }
    
}
