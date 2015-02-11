#include "Triangle.h"
#include <iostream>

using namespace std;

Triangle::Triangle(char*n, double b, double h):Geometry(n){
	base = b;
	height= h;
	type = new char [strlen("Triangle")+1]; 
	strcpy_s(type, strlen("Triangle")+1,"Triangle");
	
}
Triangle::Triangle(const Triangle&a):Geometry(a.name)
{
	base= a.base;
	height= a.height;
	type = new char [strlen("Triangle")+1]; 
	strcpy_s(type, strlen("Triangle")+1,"Triangle");

}
Triangle & Triangle::operator=(const Triangle &obj){
	base = obj.base;
	height = obj.height;
	name = new char [strlen(obj.name)+1]; 
	strcpy_s(name, strlen(obj.name)+1,obj.name);
	type = new char [strlen(obj.type)+1]; 
	strcpy_s(type, strlen(obj.type)+1,obj.type);

	return *this;

}

double Triangle::ComputeVolume(){
	double volume= 0;
	return volume;
}

double Triangle::ComputeSurface(){
	double area= (1/2)*base*height;
	return area;

}
void Triangle::PrintInfo(){
	cout<<"Name : "<<name<<endl;
	cout<<"Type : "<<type<<endl;
	cout<<"Base : "<<base<<endl;
	cout<<"Height : "<<height<<endl;
	cout<<"Volume : "<<ComputeVolume()<<endl;
	cout<<"Surface Area : "<<ComputeSurface()<<endl;
}
Triangle::~Triangle(){

}