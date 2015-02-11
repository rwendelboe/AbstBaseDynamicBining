#ifndef CONE_H
#define CONE_H
#include "Triangle.h"

class Cone : public Triangle
{

	public:
		Cone(char*n, double b, double h); 
		Cone(const Cone &);
		Cone & operator=(const Cone &);
		~Cone();

		virtual double ComputeVolume();
		virtual double ComputeSurface();
		virtual void PrintInfo();


};
#endif