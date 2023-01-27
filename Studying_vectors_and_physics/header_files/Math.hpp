#ifndef MATH_HPP
# define MATH_HPP

# include "defines.hpp"

namespace Math
{
	inline float toRadians(float degrees)
	{
		return degrees * M_PI / 180.0f;
	}

	inline float toDegrees(float radians)
	{
		return radians * 180.0f / M_PI;
	}
};

#endif