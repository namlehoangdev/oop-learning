#pragma once
class DiemDuong {
private:
	int x;
	int y;

public:
	DiemDuong();

	int getX();

	int getY();

	void setX(int x);

	void setY(int y);
	  
	float getDistance(DiemDuong B); 
};
