#ifndef GEOMETRY_H
#define GEOMETRY_H

const double PI = 3.14159;
class Geometry 
{
	protected:
		char* name;
		char* type;

	public:
		Geometry();
		Geometry(char* n);
		Geometry(const Geometry&);
		Geometry & operator=(const Geometry&);
		~Geometry();

		char* getName();
		char* getType();

		virtual double ComputeVolume()=0;
		virtual double ComputeSurface()=0;
		virtual void PrintInfo()=0;

};
#endif