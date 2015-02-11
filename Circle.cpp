#include "Circle.h"
#include <iostream>

using namespace std;



Circle::Circle(char*n, double r):Geometry(n){

	radius = r;
	type = new char [strlen("Circle")+1]; 
	strcpy_s(type, strlen("Circle")+1,"Circle");
}

Circle::Circle(const Circle&a):Geometry(a.name)
{
	radius= a.radius;
	type = new char [strlen("Circle")+1]; 
	strcpy_s(type, strlen("Circle")+1,"Circle");

}
Circle & Circle::operator=(const Circle &obj){
	radius = obj.radius;
	name = new char [strlen(obj.name)+1]; 
	strcpy_s(name, strlen(obj.name)+1,obj.name);
	type = new char [strlen(obj.type)+1]; 
	strcpy_s(type, strlen(obj.type)+1,obj.type);

	return *this;


}


double Circle::ComputeVolume(){
	double volume= 0;
	return volume;

}

double Circle::ComputeSurface(){
	double area= PI*radius*radius;
	return area;
}
void Circle::PrintInfo(){

	cout<<"Name : "<<name<<endl;
	cout<<"Tpye : "<<type<<endl;
	cout<<"Radius : "<<radius<<endl;
	cout<<"Volume : "<<ComputeVolume()<<endl;
	cout<<"Surface Area : "<<ComputeSurface()<<endl;


}
Circle::~Circle(){

}

