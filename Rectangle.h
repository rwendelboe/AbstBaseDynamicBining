#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Geometry.h"
#include <iostream>

class Rectangle : public Geometry
{
	protected:
		double length;
		double width;
	public:
		Rectangle(char *n, double l, double w);
		Rectangle(const Rectangle &);
		Rectangle & operator=(const Rectangle &);
		~Rectangle();

		virtual double ComputeVolume();
		virtual double ComputeSurface();
		virtual void PrintInfo();
};
#endif