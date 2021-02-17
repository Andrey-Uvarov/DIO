#include <iostream>


using namespace std;

class Figure {
	protected:
		double _x; //wihth
		double _y; //height
	public:
		void setDim(int x, int y = 1) {
			_x = x;
			_y = y;
		}
		virtual void showArea() = 0;
};

class Rectagle : public Figure {
	public: 
		void showArea() {
			cout << "x = " << _x << ", y = " << _y << endl;
			cout << "Rectangle area = " << _x * _y << endl;
		} 
};

class RectTriangle : public Rectagle {	
	public: 
		void showArea() {
			cout << "x = " << _x << ", y = " << _y << endl;
			cout << "Rectangle area = " << _x * _y * 0.5 << endl;
		}
};


class Circle : public Figure {
	public:
		void showArea() {
			cout << "x = " << _x << ", y = " << _y << endl;
			cout << "Rectangle area = " << _x * _y << endl;
		}
};

int main() {
	Figure* pf;
	Rectagle r; 
	pf = &r;
	pf->setDim(3, 4);
	pf->showArea();

	Circle c;
	pf = &c;
	pf->setDim(4);
	pf->showArea();

	RectTriangle rt;
	pf = &rt;
	pf->setDim(6, 8);
	pf->showArea();

	return 0;
}