#include "Geometry.h"
#include <iostream>

using namespace std;

Geometry::Geometry(){
	name = NULL;
}
Geometry::Geometry(char* n){
	name = new char [strlen(n)+1];
	strcpy_s(name, strlen(n)+1,n);
}
Geometry::Geometry(const Geometry&rhs){
	name = new char [strlen(rhs.name)+1];
	strcpy_s(name, strlen(rhs.name)+1,rhs.name);
	type = new char [strlen(rhs.type)+1]; 
	strcpy_s(type, strlen(rhs.type)+1,rhs.type);
}
Geometry & Geometry::operator=(const Geometry&obj){
	name = new char [strlen(obj.name)+1]; 
	strcpy_s(name, strlen(obj.name)+1,obj.name);
	type = new char [strlen(obj.type)+1]; 
	strcpy_s(type, strlen(obj.type)+1,obj.type);
	return *this;
}

char* Geometry::getName(){
	return name;
}
char* Geometry::getType(){
	return type;
}

Geometry::~Geometry(){
	cout<<endl;
	delete [] name;
	delete [] type;
	cout<<"deleting"<<endl;
}
