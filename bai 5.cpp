#include <iostream>
#include <math.h>
using namespace std;
int main() {
	int a, b,d ;
	float c = 0.1 ; //thue10%
	string v = "viet nam dong";
	cout << " HOA DON TIEN DIEN\n";
	cout << " Nhap so KW dien tieu thu: "; cin>>a;
	if ( 1 <= a <= 100 ) {
		b = a * 550 ;
		d = b + b*c;
		cout << "so tien dien phai tra la: "<<d<<v<<endl;
	}
	else if ( 101 <= a <= 150 ) {
		b = a * 750  ;
		d = b + b*c;
		cout << " so tien dien phai tra la: "<<d<<v<<endl;
		
	}
		else if ( 151 <= a <= 200 ) {
		b = a * 950;
		d = b + b*c;
		cout << " so tien dien phai tra la: "<<d<<v<<endl;
		
	}
		else if ( a <= 201) {
		b = a * 1350 ;
		d = b + b*c;
		cout << " so tien dien phai tra la: "<<d<<v<<endl;
		
	}
	return 0;
}
