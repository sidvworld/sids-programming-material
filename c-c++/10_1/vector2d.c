#include "vector2d.h"
#include <stdio.h>
#include <math.h>

void display_vector(const vec2d v){
	printf("%.2f, %0.2f", v.x, v.y);
}

double magnitude(const vec2d v){
	double result = sqrt((v.x*v.x) + (v.y * v.y));
	return result;
}

vec2d add(const vec2d v1, const vec2d v2){
	vec2d result;
	result.x = v1.x + v2.x;
	result.y = v1.y + v2.y;
	return result;
}

vec2d scale(const vec2d v, const double factor){
	vec2d result;
	result.x = v.x * factor;
	result.y = v.y * factor;
	return result;
}

double dot_product(const vec2d v1, const vec2d v2){
	double result = (v1.x * v2.x) + (v1.y * v2.y);
	return result;
}

