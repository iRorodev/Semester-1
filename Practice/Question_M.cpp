#include <iostream>
using namespace std;
float area(float r)
{
    const float pi = 3.1415;
    float area = 0;
    area = pi * r * r;
    return area;
}
float area(float l, float w)
{
    float area = 0;
    area = 0.5 * l * w;
    return area;
}
float area(float a, float b, float h)
{
    float area = 0;
    area = (a + b) * (h / 2);
    return area;
}
int main()
{
    float radius, lenght, width, a1, b1, height;
    cout << "Enter the radius of cirlce" << endl;
    cin >> radius;
    cout << "Enter the base a , base b and height of trapezium " << endl;
    cin >> a1 >> b1 >> height;
    cout << "Enter the lenght and width of triangle " << endl;
    cin >> lenght >> width;

    cout << "Area of Circle is: " << area(radius) << endl;
    cout << "Area of Triangle is: " << area(lenght, width) << endl;
    cout << "Area of Trapezium is: " << area(a1, b1, height) << endl;

    return 0;
}