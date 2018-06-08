#include "stdafx.h"
#include "Vector2.h"

Vector2::Vector2() { x = y = 0; };

Vector2::Vector2(float i, float j)
{
	x = i;
	y = j;
};

float Vector2::operator[](int index) const
{
	return data[index];
}

Vector2 Vector2::operator + (const Vector2& other) const {
	return { x + other.x, y + other.y};
}

Vector2& Vector2::operator -= (const Vector2& other) {
	x -= other.x; y -= other.y;
	return *this;
}

Vector2 Vector2::operator * (float scalar) const {
	return { x * scalar, y * scalar};
}

Vector2& Vector2::operator /= (float scalar) {
	x /= scalar, y /= scalar;
	return *this;
}

Vector2& Vector2::operator = (const Vector2& other) {
	x = other.x; y = other.y;
	return *this;
}

Vector2 operator *(float scalar, Vector2 vector)
{
	return vector * scalar;
}