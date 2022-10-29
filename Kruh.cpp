#include <iostream>
#include <cmath>
#include <math.h>
#include "Kruh.h"

using namespace std;

Kruh::Kruh(double rr, double xx, double yy){

	r = rr;
	x = xx;
	y = yy;
}

/*void Kruh::posun(double xx, double yy){

	x += xx;
	y += yy;
	
}
*/
double Kruh::obsah() const {
	
	return M_PI*(r*r);

}

double Kruh::obvod() const {

	return 2*M_PI*r;

}

bool Kruh::leziUvnitr(double xx, double yy) const {

	double vzdalenost = sqrt(((x-xx)*(x-xx))+((y-yy)*(y-yy)));
	
/*	if (vzdalenost <= r){
	
		true;
	}
	else {
	
		false;
	}
*/

	return vzdalenost < r;		
	
}

void Kruh::vypisInfo() const {

	cout << "Kruh (" <<  r << "," <<  x << "," << y << ") \n";
	
	
}

	

