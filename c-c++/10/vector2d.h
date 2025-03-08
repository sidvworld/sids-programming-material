#include "vector2d.c"

#ifndef VECTOR2D_H
#define VECTOR2D_H

typedef struct {
	double x;
	double y;
} vec2d;

void display_vector(const vec2d v);
double magnitude(const vec2d v);
vec2d add(const vec2d v1, const vec2d v2);
vec2d scale(const vec2d v, const double factor);
double dot_product(const vec2d v1, const vec2d v2);

#endif
