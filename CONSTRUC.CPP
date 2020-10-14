#include<iostream.h>
#include<conio.h>
class rectangle{

private:

double length;
double breadth;

public:

rectangle() {

length = 6;
cout<<"The length of rectangle is : "<<length;

}
};
class rect{

private:

double length;
double height;
public:

rect(double len, double ht){

length=len;
height=ht;

}
double calcarea(){
return height*length;
}
};

void main()
{
 clrscr();

 rectangle recatngle1;
 rect rect1(52.3,45.1);
 rect rect2(54.1,86.1);

 cout<<"\nThe area of rect 1 is : "<<rect1.calcarea();
 cout<<"\nThe area of rect 2 is : "<<rect2.calcarea();
 getch();
}


