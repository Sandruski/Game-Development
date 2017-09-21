#ifndef Vec3_H
#define Vec3_H

#include <math.h>

template <class TYPE>
class Vec3 {
public:
	TYPE x, y, z;

public:
	Vec3() {}
	Vec3(const TYPE& x, const TYPE& y, const TYPE& z);
	Vec3(const Vec3& vec3);

	const Vec3 operator+(const Vec3& vec3) const;
	const Vec3 operator-(const Vec3& vec3) const;
	const Vec3 operator+=(const Vec3& vec3);
	const Vec3 operator-=(const Vec3& vec3);
	const Vec3 operator*(const TYPE& k);
	/*Encara que 'k' sigui un escalar, pot ser un escalar que vingui d'una variable, 
	i no volem ni fer una còpia d'aquesta variable ni modificar-la dins d'aquest mètode.
	Per això la passem per referència.
	*/
	const Vec3 operator*=(const TYPE& k);
	TYPE operator*(const Vec3& vec3); // Dot product
	/*El TYPE no porta 'const' perquè és un escalar com a tal, no ve de cap variable, 
	i els escalars porten la propietat 'const' intrínsicament.
	*/
	const Vec3 operator=(const Vec3& vec3); // Assignation
	//bool operator==(const Vec3<TYPE>& vec3a, const Vec3<TYPE>& vec3b); is implemented outside the class

	TYPE distance(const Vec3& vec3);
	bool is_zero();
	const Vec3 set_to_zero();
};

template <class TYPE>
Vec3<TYPE>::Vec3(const TYPE& x, const TYPE& y, const TYPE& z) :x(x), y(y), z(z) {}

template <class TYPE>
Vec3<TYPE>::Vec3(const Vec3& vec3) {
	x = vec3.x;
	y = vec3.y;
	z = vec3.z;
}

template <class TYPE>
const Vec3<TYPE> Vec3<TYPE>::operator+(const Vec3& vec3) const {
	return Vec3<TYPE>(x + vec3.x, y + vec3.y, z + vec3.z);
}

template <class TYPE>
const Vec3<TYPE> Vec3<TYPE>::operator-(const Vec3& vec3) const {
	return Vec3<TYPE>(x - vec3.x, y - vec3.y, z - vec3.z);
}

template <class TYPE>
const Vec3<TYPE> Vec3<TYPE>::operator+=(const Vec3& vec3) { //Norma de C: els operadors de suma, resta, etc. sempre han de retornar un resultat. El retorn no pot ser 'void'.
	return Vec3<TYPE>(x += vec3.x, y += vec3.y, z += vec3.z);
}

template <class TYPE>
const Vec3<TYPE> Vec3<TYPE>::operator-=(const Vec3& vec3) {
	return Vec3<TYPE>(x -= vec3.x, y -= vec3.y, z -= vec3.z);
}

template <class TYPE>
const Vec3<TYPE> Vec3<TYPE>::operator*(const TYPE& k) {
	return Vec3<TYPE>(x * k, y * k, z * k);
}

template <class TYPE>
const Vec3<TYPE> Vec3<TYPE>::operator*=(const TYPE& k) {
	return Vec3<TYPE>(x *= k, y *= k, z *= k);
}

template <class TYPE>
TYPE Vec3<TYPE>::operator*(const Vec3& vec3) { // Dot product
	return (x * vec3.x) + (y * vec3.y) + (z * vec3.z);
}

template <class TYPE>
const Vec3<TYPE> Vec3<TYPE>::operator=(const Vec3& vec3) { // Assignation
	return Vec3<TYPE>(x = vec3.x, y = vec3.y, z = vec3.z);
}

template <class TYPE>
TYPE Vec3<TYPE>::distance(const Vec3& vec3) {
	return abs(sqrt(pow(x - vec3.x, 2) + pow(y - vec3.y, 2) + pow(z - vec3.z, 2)));
}

template <class TYPE>
bool Vec3<TYPE>::is_zero() {
	return x == 0 && y == 0 && z == 0;
}

template <class TYPE>
const Vec3<TYPE> Vec3<TYPE>::set_to_zero() {
	return Vec3<TYPE>(x = 0, y = 0, z = 0);
}

//
template <class TYPE>
bool operator==(const Vec3<TYPE>& vec3a, const Vec3<TYPE>& vec3b) {
	return vec3a.x == vec3b.x &&
		vec3a.y == vec3b.y &&
		vec3a.z == vec3b.z;
}

#endif