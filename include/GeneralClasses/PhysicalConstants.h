#ifndef PHYSICALCONSTANTS_H
#define PHYSICALCONSTANTS_H

#define _USE_MATH_DEFINES

#include <math.h>
#include <iostream>

#define PI_VALUE = 3.14159265358979323846  /* pi */

class PhysicalConstants
{ 

private:
	
	// c is the light`s velocity (m/s)
	constexpr static double c = 299792458;

	// u_0 is the permeability of free space (H/m)
	constexpr static double u_0 = 4*PI_VALUE*E-7

	// e_0 is the electric permitivity of free space (F/m)
	constexpr static double e_0 = 8.854 * E-12

} #endif // PHYSICALCONSTANTS_H
