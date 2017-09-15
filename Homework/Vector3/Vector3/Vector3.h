#ifndef Vec3_H
#define Vec3_H

template <class TYPE>
class Vec3 {
public:
	TYPE x, y, z;

public:
	Vec3() {}
	Vec3(const TYPE x, const TYPE y, const TYPE z);
	Vec3(const Vec3& vec3);

	Vec3 operator+(const Vec3& vec3) const;
	Vec3 operator-(const Vec3& vec3) const;
	void operator+=(const Vec3& vec3);
	void operator-=(const Vec3& vec3);
	Vec3 operator*(TYPE k);
	void operator*=(TYPE k);
	TYPE operator*(const Vec3& vec3);

	void zero();
};

template <class TYPE>
Vec3<TYPE>::Vec3(const TYPE x, const TYPE y, const TYPE z) :x(x), y(y), z(z) {}

template <class TYPE>
Vec3<TYPE>::Vec3(const Vec3& vec3) {
	x = vec3.x;
	y = vec3.y;
	z = vec3.z;
}

template <class TYPE>
Vec3<TYPE> Vec3<TYPE>::operator+(const Vec3& vec3) const {
	Vec3 auxiliar;

	auxiliar.x = x + vec3.x;
	auxiliar.y = y + vec3.y;
	auxiliar.z = z + vec3.z;

	return auxiliar;
}

template <class TYPE>
Vec3<TYPE> Vec3<TYPE>::operator-(const Vec3& vec3) const {
	Vec3 aux;

	aux.x = x - vec3.x;
	aux.y = y - vec3.y;
	aux.z = z - vec3.z;

	return aux;
}

template <class TYPE>
void Vec3<TYPE>::operator+=(const Vec3& vec3) {
	x += vec3.x;
	y += vec3.y;
	z += vec3.z;
}

template <class TYPE>
void Vec3<TYPE>::operator-=(const Vec3& vec3) {
	x -= vec3.x;
	y -= vec3.y;
	z -= vec3.z;
}

template <class TYPE>
void Vec3<TYPE>::zero() {
	x = 0;
	y = 0;
	z = 0;
}

template <class TYPE>
Vec3<TYPE> Vec3<TYPE>::operator*(TYPE k) {
	Vec3 aux;

	aux.x = x * k;
	aux.y = y * k;
	aux.z = z * k;

	return aux;
}

template <class TYPE>
void Vec3<TYPE>::operator*=(TYPE k) {
	x *= k;
	y *= k;
	z *= k;
}

template <class TYPE>
TYPE Vec3<TYPE>::operator*(const Vec3& vec3) {
	return (x * vec3.x) + (y * vec3.y) + (z * vec3.z);
}




template <class TYPE>
bool operator==(const Vec3<TYPE>& vec3a, const Vec3<TYPE>& vec3b) {
	return vec3a.x == vec3b.x &&
		vec3a.y == vec3b.y &&
		vec3a.z == vec3b.z;
}

#endif