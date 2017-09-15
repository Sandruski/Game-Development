#ifndef Vec3_H
#define Vec3_H

template <class type>
class Vec3 {
private:
	type x, y, z;

public:
	Vec3();
	Vec3(type x, type y, type z);
	Vec3(const Vec3& vec3);

	~Vec3() {}

	void set_x(type x) {
		this->x = x;
	}
	void set_y(type y) {
		this->y = y;
	}
	void set_z(type z) {
		this->z = z;
	}

	type get_x() const {
		return x;
	}
	type get_y() const {
		return y;
	}
	type get_z() const {
		return z;
	}

	Vec3 operator+(const Vec3& vec3) const;
};

template <class type>
Vec3<type>::Vec3() {
	x = 0;
	y = 0;
	z = 0;
}

template <class type>
Vec3<type>::Vec3(type x, type y, type z) :x(x), y(y), z(z) {}

template <class type>
Vec3<type>::Vec3(const Vec3& vec3) {
	x = vec3.x;
	y = vec3.y;
	z = vec3.z;
}

template <class type>
Vec3<type> Vec3<type>::operator+(const Vec3& vec3) const {
	Vec3 auxiliar;

	auxiliar.x = x + vec3.x;
	auxiliar.y = y + vec3.y;
	auxiliar.z = z + vec3.z;

	return auxiliar;
}

template <class type>
bool operator==(const Vec3<type>& vec3a, const Vec3<type>& vec3b) {
	return vec3a.get_x() == vec3b.get_x() &&
		vec3a.get_y() == vec3b.get_y() &&
		vec3a.get_z() == vec3b.get_z();
}

#endif