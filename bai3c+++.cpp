#include <iostream>
#include <math.h>
using namespace std;
int main () {
	char Kt;
	float a,b;

	cout << " Nhap gia tri cua a= "; cin>>a;
	cout << " Nhap gia tri cua b= "; cin>>b;
	cout << " Nhap ki tu can kiem tra: "; cin >>Kt;
	float T = a +b;
	float H = a -b;
	float Ti = a *b;
	float Th = a /b;
	
switch(Kt) {
	case 'T' :
		cout << " Tong= " << T<< endl;
		break;
	case 'H' :
		cout << " Hieu= " << H << endl;
		break;
	case 'N' :
		cout << " Tich= " << Ti << endl;
		break;
	case 'C' :
		cout << " Thuong " << Th << endl;
		break;
	
	default :
		cout << " Chao cac ban =)) " << endl;
		
}
 return 0;	
	
}
