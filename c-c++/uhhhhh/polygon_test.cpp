/*
 * This program defines a class named RegularPolygon that represents a regular polygon with a given number of sides
 * and a specified side length. The class includes methods to set and get the number of sides and the side length,
 * to display the properties of the polygon, and to calculate the perimeter and area of the polygon.
 * 
 * The RegularPolygon class includes:
 * - A default constructor that initializes the polygon to a triangle with side length 1.0.
 * - A parameterized constructor that initializes the polygon with the specified number of sides and side length.
 * - Getter methods for the number of sides and side length.
 * - Setter methods for the number of sides and side length, ensuring valid values.
 * - A display method to output the number of sides and side length.
 * - Methods to calculate and return the perimeter and area of the polygon.
 * 
 * The main function creates three RegularPolygon objects and demonstrates the use of the class by displaying
 * their properties, perimeters, and areas.
 *
 * Siddharth Ghosh July 24 2024
 * 
 */


using namespace std;
#include <iostream>
#include <iomanip>
#include <cmath>

class RegularPolygon
{
	private:
		int nSides;
		double sideLength;
		
	public:
		// constructors
		RegularPolygon(){
			nSides = 3;
			sideLength = 1.0;
		}
		RegularPolygon(double x, double y){
			nSides = x;
			sideLength = y;
		}
		
		// getters
		int getNSides(){
			return nSides;
		}	
		double getSideLength(){
			return sideLength;
		}
		
		// setters
		void setNSides(int sides) {
			nSides = max(3, sides);
		}
		void setSideLength(double length) {
			sideLength = std::abs(length);
		}
		
		// displays
		
		void display(){
			std::cout << "Sides: " << nSides << " | Side Length: " << sideLength;
		}
		
		// calculations of stuff
		double getPerimeter(){
			return nSides * sideLength;
		}
		
		double getArea(){
			double tangentVal = tan(3.14159 / nSides);
			return (nSides * (sideLength * sideLength)) / (4 * tangentVal);
		}
};

int main() {
	RegularPolygon polygon1; 
	RegularPolygon polygon2(6, 4.0);
	RegularPolygon polygon3(4, 7.5);
	
	polygon1.display();
	std::cout << " | Perimeter: " << polygon1.getPerimeter() << " | Area: " << polygon1.getArea();
	cout << "\n";
	
	polygon2.display();
	std::cout << " | Perimeter: " << polygon2.getPerimeter() << " | Area: " << polygon2.getArea();
	cout << "\n";
	
	polygon3.display();
	std::cout << " | Perimeter: " << polygon3.getPerimeter() << " | Area: " << polygon3.getArea();
	cout << "\n";
	
	return 0;
}
