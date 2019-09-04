#pragma once
#include <iostream> 
#include <string.h>
using namespace std;

class ARRAY {
private:
	float *v;//con tro mang so thuc
	int n;//so phan tu
public:
	ARRAY();

	ARRAY(int n) {//phuong thuc thiet lap 1 tham so
		this->n = n;
		this->v = new float[this->n]; 
	}

	ARRAY(int n, float a) {//phuong thuc thiet lap 2 tham so
		this->n = n;
		this->v = new float[this->n];
		for (int i = 0; i < this->n; i++) {
			v[i] = a;
		}
	}
	~ARRAY() {
		delete v;
	}
	 
	void Nhap() {
		for (int i = 0; i < this->n; i++) {
			cin >> v[i];
		}
	}

	void Xuat() {
		for (int i = 0; i < this->n; i++) {
			cout << v[i] << "  ";
		}
	} 

	int Get(float *&V) {
		V = this->v;
		return this->n;
	}

}; 

 