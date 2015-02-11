#ifndef SPHERE_H
#define SPHERE_H
#include "Circle.h"

class Sphere : public Circle
{

	

	public:
		Sphere(char*n, double r);
		Sphere(const Sphere &);
		Sphere & operator=(const Sphere &);
		~Sphere();

		virtual double ComputeVolume();
		virtual double ComputeSurface();
		virtual void PrintInfo();

};
#endif