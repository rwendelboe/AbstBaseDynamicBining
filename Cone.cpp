#include "Cone.h"
#include <iostream>
#include <cmath>

using namespace std;

Cone::Cone(char*n, double b, double h):Triangle (n, b, h){

	base = b;
	height = h;
	type = new char [strlen("Cone")+1]; 
	strcpy_s(type, strlen("Cone")+1,"Cone");
}


Cone::Cone(const Cone&a):Triangle(a.name, a.height, a.base)
{
	
	type = new char [strlen("Cone")+1]; 
	strcpy_s(type, strlen("Cone")+1,"Cone");
}
Cone & Cone::operator=(const Cone &obj){
	base = obj.base;
	height = obj.height;
	name = new char [strlen(obj.name)+1]; 
	strcpy_s(name, strlen(obj.name)+1,obj.name);
	type = new char [strlen(obj.type)+1]; 
	strcpy_s(type, strlen(obj.type)+1,obj.type);

	return *this;
}

double Cone::ComputeVolume(){
	double volume;
	volume = (1/3)*base*height;
	return volume;
}

double Cone::ComputeSurface(){
	double area = PI*base*(base + height);
	return area;

}

void Cone::PrintInfo(){

	cout<<"Name : "<<name<<endl;
	cout<<"Type : "<<type<<endl;
	cout<<"Base : "<<base<<endl;
	cout<<"Height : "<<height<<endl;
	cout<<"Volume : "<<ComputeVolume()<<endl;
	cout<<"Surface Area : "<<ComputeSurface()<<endl;
}
Cone::~Cone(){
}