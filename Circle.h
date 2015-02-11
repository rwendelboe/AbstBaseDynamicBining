#ifndef CIRCLE_H
#define CIRCLE_H
#include "Geometry.h"
#include <iostream>

using namespace std;

class Circle : public Geometry
{
	protected:
		double radius;
	public:
		Circle(char*n, double r);
		Circle(const Circle &);
		Circle & operator=(const Circle &);
		~Circle();

		virtual double ComputeVolume();
		virtual double ComputeSurface();
		virtual void PrintInfo();



};


#endif