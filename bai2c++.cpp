#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
     float a,b, c ;
	cout << "Hoa don mua may tinh\n";
	cout << " Nhap so may tinh muon mua : "; cin >>a;
	
	if (a<5) {

	b = a * 500;
	cout << " So tien phai tra la= " << b;
}
    if (a>5) {

	c = a * 450;
	cout << " So tien phai tra la = " << c;
}
	return 0;
 } 
