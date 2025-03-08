#include <stdio.h>
#include "vector2_1.h"

int main(void) {
    vec2d result, v1, v2;
    v1.x = 5;
    v1.y = 3;
    v2.x = 1;
    v2.y = 2;
    
    result = add(v1, v2);
    display_vector(result);
    
    return 0;
}
