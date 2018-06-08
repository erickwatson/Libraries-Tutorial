#pragma once

class Vector3 {
public:
	union {
		struct {
			float x, y, z;
		};
		
		float data[3];
	};

	Vector3();
	Vector3(float, float, float);

	float operator [] (int index) const;
	operator float* () { 
		return &data[0]; 
	}
	operator const float* () const { 
		return &data[0]; 
	}

	Vector3 operator + (const Vector3& other) const;

	Vector3& operator = (const Vector3& other);
	
	Vector3& operator -= (const Vector3& other);

	Vector3 operator * (float scalar) const;
	
	Vector3& operator /= (float scalar);

	

};