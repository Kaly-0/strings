#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

class Rectangle {
private:
	double _width;
	double _height;

public:
	Rectangle(double w, double h) : _width(w), _height(h) {
	}
	   
	   //Getters
	   double getWidth() const {
		 return _width;
	   }
	   
	   double getHeight() const {
		 return _height;
	   }


	   //Setters
	   void setWidth(double w) {
		_width = w;
	}

	   void setHeight(double h) {
		_height = h;
	}


	double area() const {
		return _width * _height;
	}

	double perimeter() const {
		return 2 * (_width + _height);

	}
};
#endif


