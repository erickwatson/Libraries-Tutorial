#pragma once
#include "Vector3.h"
class Matrix3
{
public:

	union {
		struct {
			Vector3 xAxis;
			Vector3 yAxis;
			Vector3 zAxis;
		};
		Vector3 axis[3];
		float data[3][3];
	};
	Matrix3() {};
	~Matrix3() {};

	Vector3& operator [] (int index);

	const Vector3& operator [] (int index) const;
	
	Matrix3 operator * (const Matrix3& other) const;

};

