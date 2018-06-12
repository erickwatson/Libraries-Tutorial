#pragma once
#include "stdafx.h"

class Vector2 {
public: 
	union {
		struct {
			float x, y;
		};
		float data[2];
	};

	Vector2();
	Vector2(float, float);

	float operator [] (int index) const;

	operator float* () {
		return &data[0];
	}

	operator const float* () const {
		return &data[0];
	}

	Vector2 operator + (const Vector2& other) const;

	Vector2 operator - (const Vector2& other) const;

	Vector2& operator -= (const Vector2& other);

	Vector2 operator * (float scalar) const;

	Vector2& operator /= (float scalar);

	Vector2& operator = (const Vector2& other);

};

Vector2 operator *(float scalar, Vector2 vector);