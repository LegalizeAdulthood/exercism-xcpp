#if !defined(TRIANGLE_H)
#define TRIANGLE_H

namespace triangle
{

enum flavor
{
    equilateral,
    isosceles,
    scalene,
    illegal
};

flavor kind(double a, double b, double c);

};

#endif
