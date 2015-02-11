#include "Box.h"
#include <iostream>

using namespace std;



Box::Box(char* n, double l, double w, double d):Rectangle(n, l, w){
	
	length = l;
	width = w;
	depth = d;
	type = new char [strlen("Box")+1]; 
	strcpy_s(type, strlen("Box")+1,"Box");
}
Box::Box(const Box&a):Rectangle(a.name, a.length, a.width)
{
	depth = a.depth;
	type = new char [strlen("Box")+1]; 
	strcpy_s(type, strlen("Box")+1,"Box");
}

Box & Box::operator=( const Box &obj){


	length = obj.length;
	width = obj.width;
	depth = obj.depth;
	name = new char [strlen(obj.name)+1]; 
	strcpy_s(name, strlen(obj.name)+1,obj.name);
	type = new char [strlen(obj.type)+1]; 
	strcpy_s(type, strlen(obj.type)+1,obj.type);

	return *this;

}

double Box::ComputeVolume(){
	double volume;
	volume = length*width*depth;
	return volume;

}

double Box::ComputeSurface(){

	double area = length * width;
	return area;
}
void Box::PrintInfo(){
	cout<<"Name : "<<name<<endl;
	cout<<"Type : "<<type<<endl;
	cout<<"Length : "<<length<<endl;
	cout<<"Width : "<<width<<endl;
	cout<<"Depth : "<<depth<<endl;
	cout<<"Volume : "<<ComputeVolume()<<endl;
	cout<<"Surface Area : "<<ComputeSurface()<<endl;
}
Box::~Box(){
}
//put delete in ur base class only and u dont need anything in the derived destructor we call base delete maybe print hello i am deleting in each one