#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "Geometry.h"

class Triangle : public Geometry
{

	protected:
		double height;
		double base;
	
	public:
		Triangle(char*n, double b, double h);  
		Triangle(const Triangle &);
		Triangle & operator=(const Triangle &);
		~Triangle();

		virtual double ComputeVolume();
		virtual double ComputeSurface();
		virtual void PrintInfo();


};
#endif