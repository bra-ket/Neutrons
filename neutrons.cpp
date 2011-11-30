#include <iostream>
#include <fstream>
#include <cmath>
#include <cstdlib> 

using namespace std;

class neutron { 
	private
	
} // 

int main (int argc, char** argv) {
	double lambda = 0.5;
	double p_c = 0.3333;
	double p_s =  1 - p_c;
	double d = 0.2;
	double r, phi, theta;
	
	srand ( 666 );
	
	r = - lambda * log(1 - uni());
	theta = acos(1 - 2 * uni());
	phi = 2 * M_PI * uni(); 
	
	
} // main


double uni (void) {
	return rand() / ((double) RAND_MAX);
} // uni

