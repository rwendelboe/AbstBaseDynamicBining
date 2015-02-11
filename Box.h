#ifndef BOX_H
#define BOX_H
#include "Rectangle.h"

class Box : public Rectangle
{

	protected:
		double depth;
	public:
		Box(char*n, double l, double w, double d);  
		Box(const Box &);
		Box& operator=(const Box &);
		~Box();

		virtual double ComputeVolume();
		virtual double ComputeSurface();
		virtual void PrintInfo();
};


#endif