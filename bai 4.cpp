#include <iostream>
using namespace std;
int main () {
	char TKB ;
 
	cout << " Hom nay hoc mon gi \n";
	
	cout << " Nhap ngay hoc: "; cin >> TKB;
	string thu2 = "Tieng Anh";
	string thu3 = "Lap trinh VB.Net";
	string thu4 = "Excel";
	string thu5 = "Onile Excel";
	string thu6 = "Lap trinh C++";
	string thu7 = "Onile Tieng Anh";
	
	switch(TKB) {
		case 'a' :
			cout << "Hom nay hoc mon: " <<thu2<<endl;
			break;
		case 'b' :
			cout << "Hom nay hoc mon: " <<thu3<<endl;
			break;
		case 'c' :
			cout << "Hom nay hoc mon: " <<thu4<<endl;
			break;
		case 'd' :
			cout << "Hom nay hoc mon: " <<thu2<<endl;
			break;
		case 'e' :
			cout << "Hom nay hoc mon: " <<thu6<<endl;
		    break;
	    case 'f' :
	    	cout << "Hom nay hoc mon: " <<thu7<<endl;
	    	break;
	    default:
	    	cout << " Hom nay duoc nghi " << endl;
	    
		
			
	}
	 return 0;
} 
