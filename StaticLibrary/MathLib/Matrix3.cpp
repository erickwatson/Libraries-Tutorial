#include "stdafx.h"
#include "Matrix3.h"

/*

Place inside main cpp

Matrix3 m;

// Assign a vector to X-axis
m[0] = Vector3(1, 0, 0);

// Assign a value to Z-axis.y if
// Vector3 has sub-script access
m[2][1] = 99;

*/

Vector3& Matrix3::operator [] (int index) {
	return axis[index];
};

const Vector3& Matrix3::operator [] (int index) const {
	return axis[index];
};

Matrix3 Matrix3::operator * (const Matrix3& other) const {

	Matrix3 result;

	for (int r = 0; r < 3; ++r) {
		for (int c = 0; c < 3; ++c) {
			result.data[c][r] = data[0][r] * other.data[c][0] +
								data[1][r] * other.data[c][1] +
								data[2][r] * other.data[c][2];
		}
	}
	return result;
};