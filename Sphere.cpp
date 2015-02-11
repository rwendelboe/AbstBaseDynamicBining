#include "Sphere.h"
#include <iostream>
#include <cmath>

using namespace std;


Sphere::Sphere(char*n, double r) : Circle(n,r){
	radius = r;
	type = new char [strlen("Sphere")+1]; 
	strcpy_s(type, strlen("Sphere")+1,"Sphere");
}


Sphere::Sphere(const Sphere&a):Circle(a.name, a.radius)
{
	type = new char [strlen("Sphere")+1]; 
	strcpy_s(type, strlen("Sphere")+1,"Sphere");

}
Sphere & Sphere::operator=(const Sphere &obj){

	radius = obj.radius;
	name = new char [strlen(obj.name)+1]; 
	strcpy_s(name, strlen(obj.name)+1,obj.name);
	type = new char [strlen(obj.type)+1]; 
	strcpy_s(type, strlen(obj.type)+1,obj.type);

	return *this;
}

double Sphere::ComputeVolume(){
	double volume;
	volume = (4/3)*PI*radius*radius*radius;
	return volume;
}

double Sphere::ComputeSurface(){
	double area = 4*PI*radius*radius;
	return area;

}
void Sphere::PrintInfo(){
	cout<<"Name : "<<name<<endl;
	cout<<"Type : "<<type<<endl;
	cout<<"Radius : "<<radius<<endl;
	cout<<"Volume : "<<ComputeVolume()<<endl;
	cout<<"Surface Area : "<<ComputeSurface()<<endl;
} 
Sphere::~Sphere(){
}