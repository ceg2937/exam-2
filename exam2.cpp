#include<iostream>

#define PI 3.14159

using namespace std;

void displayMenu() {

cout<<"\n1:Area\n2:Circumference\n3:Diameter\n4:Dispay Table\n5:Exit\n";

}

void getChoice(int &choice) {

cout<<"Enter choice(1 to 5) : ";

cin>>choice;

}

void getRadius(double &radius) {

cout<<"Enter radius : ";

cin>>radius;

}

double calcArea(double radius) {

return PI*radius*radius;

}

double calcCircumference(double radius) {

return 2*PI*radius;

}

double calcDiameter(double radius){

return 2*radius;

}

void displayTable(){

cout<<"Radius\t\tCircumference\n";

for(int i=1;i<=10;i++){

cout<<" "<<i<<"\t\t"<<calcCircumference(double(i))<<"\n";

}

}

int main(){

int choice;

double radius;

do{

displayMenu();

getChoice(choice);

switch(choice){

case 1:{

getRadius(radius);

cout<<"\nArea of circle with radius "<<radius<<" : "<<calcArea(radius);

break;

}

case 2:{

getRadius(radius);

cout<<"\ncircumference of circle with radius "<<radius<<" : "<<calcCircumference(radius);

break;

}case 3:{

getRadius(radius);

cout<<"\nDiameter of circle with radius "<<radius<<" : "<<calcDiameter(radius);

break;

}case 4:{

cout<<"\n Table \n";

displayTable();

break;

}

}

}while(choice!=5);

return 0;

}
