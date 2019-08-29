#include <iostream>
#include "DiemDuong.h";
using namespace std;
 


int main() {
	DiemDuong A, C; 
	A.setX(-3);
	A.setY(4);

	C.setX(5);
	C.setY(6);

	cout << "A(" << A.getX() << "," << A.getY() << ")";
	cout << "C(" << C.getX() << "," << C.getY() << ")";
	cout << "distance between A and C : " << A.getDistance(C);
	system("pause");
}