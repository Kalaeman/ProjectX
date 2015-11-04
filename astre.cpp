#include "astre.hpp"

class astre
{
private:
	float mass;
	float radius;

public:
	void setMass(float m)
	{
		mass = m;
	}
	float getMass()
	{
		return mass;
	}
	void setRadius(float r)
	{
		radius = r;
	}
	float getRadius()
	{
		return radius;
	}
}