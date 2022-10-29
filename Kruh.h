#ifndef  KRUH_H
#define  KRUH_H

using namespace std;

class Kruh
{
	public:
		double r; double x; double y;
		Kruh();
		Kruh(double rr, double xx, double yy);
		
		virtual ~Kruh();
		
		double obsah() const;
		double obvod() const;
		//void posun(double xx, double yy) const;
		//void printout() const;
		bool leziUvnitr(double xx, double yy) const;
		void vypisInfo() const;
};

#endif
		
		
		
