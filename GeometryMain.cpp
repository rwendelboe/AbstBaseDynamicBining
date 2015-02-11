#include "Geometry.h"
#include "Box.h"
#include "Triangle.h"
#include "Circle.h"
#include "Cone.h"
#include "Sphere.h"
#include "Rectangle.h"
#include <iostream>

using namespace std;

void report(Geometry *obj);
void Sort(double a[], double b[], int size);  
void Print( double a[], double b[], bool isSorted, int size);
void Statistics( double a[], double b[], int size);

int main(){
	//Geometry* shape = new Box("shape", 4,5,6);
	//delete shape;
	Geometry *array[6];
	array[0] = new Box ("Box1", 7,10,35);
	array[1] = new Rectangle ("Rectangle1", 4,5);
	array[2] = new Circle ("Circle1", 14);
	array[3] = new Sphere ("Sphere1", 16);
	array[4] = new Triangle ("Triangle1", 29,2);
	array[5] = new Cone ("Cone1", 27, 34);
	for (int i = 0; i<6; i++){

		report(array[i]);
	}
	
	double volume[6];
	double surface[6];
	for (int i = 0; i < 6; i++){
		volume[i] = array[i]->ComputeVolume();
		surface[i] = array[i]->ComputeSurface();

	}
	Print(volume , surface, false, 6);
	

	Sort(volume, surface, 6);
	Print(volume, surface, true, 6);

	Statistics(volume, surface, 6);

	for (int i =0; i< 6; i++){

		delete array[i];
	}
	cin.get();
	return 0;
}

void report(Geometry *obj){
	cout<<"----- Geometry Report -----"<<endl;
	cout<<"Type: "<<obj->getType()<<endl;
	cout<<"Name: "<<obj->getName()<<endl;
	cout<<"Volume: "<<obj->ComputeVolume()<<endl;
    cout<<"Surface Area: "<<obj->ComputeSurface()<<endl;

}

void Sort(double a[], double b[],int size){

	double temp; 
	bool swapOccurred;
		do
			{ swapOccurred = false;
				for (int count = 0; count < (size-1); count++) 
				{
					if (a[count] > a[count+1]) 
					{ 
						temp = a[count];
						a[count] = a[count + 1]; 
						a[count + 1] = temp; 
						swapOccurred = true;
					}
				}
			} 
			while (swapOccurred); 

		do
			{ swapOccurred = false;
				for (int count = 0; count < (size-1); count++) 
				{
					if (b[count] < b[count+1]) 
					{ 
						temp = b[count];
						b[count] = b[count + 1]; 
						b[count + 1] = temp; 
						swapOccurred = true;
					}
				}
			} 
			while (swapOccurred);

}

void Print (double a[], double b[], bool isSorted, int size){

	for (int i = 0; i < size; i++)
	{
		if (!isSorted)
		{
			cout<<endl;
			cout<<"The Volume of the shape: " << a[i] << endl;
			cout<<"Surface Area of the shape: " << b[i] << endl;
		}
		else
		{
			cout<<endl;
			cout<<"The Sorted Volume of the shape: " << a[i] << endl;
			cout<<"The Sorted Surface Area of the shape: " << b[i] << endl;
		}
	}

}
void Statistics(double a[], double b[], int size){
	double volumeSum = 0;
	double surfaceSum = 0;

	for (int i = 0; i < size; i++){
		volumeSum += a[i] ;
		surfaceSum += b[i];

	}
	cout<<endl;
	cout<<"*****Statistics******" << endl ;
	cout<<"Avereage Volume: " << volumeSum / size << endl;
	cout<<"Avereage Surface Area: " << surfaceSum / size << endl;
	cout<<"Median Volume: " << ((size % 2 == 0) ? ((a[size/2] + (a[size/2 + 1]))/2) : (a[size/2])) << endl;
	cout<<"Median Surface Area: " << ((size % 2 == 0) ? ((b[size/2] + (b[size/2 + 1]))/2) : (b[size/2])) << endl;

}
 