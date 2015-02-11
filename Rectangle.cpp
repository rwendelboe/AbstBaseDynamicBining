#include "Rectangle.h"
#include <iostream>

using namespace std;



Rectangle::Rectangle(char* n, double l, double w):Geometry(n){
	length=l;
	width=w;
	type = new char [strlen("Rectangle")+1]; 
	strcpy_s(type, strlen("Rectangle")+1,"Rectangle");
}
Rectangle::Rectangle(const Rectangle&a):Geometry(a.name)
{
	length= a.length;
	width= a.width;
	type = new char [strlen("Rectangle")+1]; 
	strcpy_s(type, strlen("Rectangle")+1,"Rectangle");

}
Rectangle & Rectangle::operator=(const Rectangle &obj){
	length = obj.length;
	width = obj.width;
	name = new char [strlen(obj.name)+1]; 
	strcpy_s(name, strlen(obj.name)+1,obj.name);
	type = new char [strlen(obj.type)+1]; 
	strcpy_s(type, strlen(obj.type)+1,obj.type);

	return *this;
}

//seven functions
double Rectangle::ComputeVolume(){
	double volume= 0;
	return volume;
}

double Rectangle::ComputeSurface(){
	double area;
	area = length * width;
	return area;

}
void Rectangle::PrintInfo(){
	cout<<"Name : "<<name<<endl;
	cout<<"Type : "<<type<<endl;
	cout<<"Length : "<<length<<endl;
	cout<<"Width : "<<width<<endl;
	cout<<"Volume : "<<ComputeVolume()<<endl;
	cout<<"Surface Area : "<<ComputeSurface()<<endl;
}

Rectangle::~Rectangle(){

}
