#include <iostream>
#include <math.h>
#include <stdlib.h>


class vec3 {

public:
	//vector
	float e[3];

	vec3() {};
	vec3(float e_0, float e_1, float e_2):e[0](e_0), e[1](e_1),e[2](e_2){};

	//member function: access the axis
	inline float x() const {return e[0];}
	inline float y() const {return e[1];}
	inline float z() const {return e[2];}

	//member function: access the color
	inline float r() const {return e[0];}
	inline float g() const {return e[1];}
	inline float b() const {return e[2];}

	//overloading
	inline const vec3& operator+() const {return *this;}

};
