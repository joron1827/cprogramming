#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;


class Vector2D
{
public:
    Vector2D( );
    Vector2D(int theX, int theY);    
    
    void output( ) const;

    friend const Vector2D operator +(const Vector2D& vector1, const Vector2D& vector2);
    friend const Vector2D operator -(const Vector2D& vector1, const Vector2D& vector2);
    friend bool operator ==(const Vector2D& vector1, const Vector2D& vector2);
    friend const Vector2D operator *(int k, const Vector2D& vector1);
    const int operator *(const Vector2D& vector1);

private:
    int x; 
    int y; 

};

int main()
{
    Vector2D v0, v1(2,2), v2(3,3), v3;
    int k = 2;
    v3 = k*v1;
    v3.output();
    cout << v1 * v2 << endl;

}


const Vector2D operator +(const Vector2D& vector1, const Vector2D& vector2)
{
    int coordX = vector1.x + vector2.x;
    int coordY = vector1.y + vector2.y;
    
    return Vector2D(coordX,coordY);
}

const Vector2D operator -(const Vector2D& vector1, const Vector2D& vector2)
{
    int coordX = vector1.x - vector2.x;
    int coordY = vector1.y - vector2.y;
    
    return Vector2D(coordX,coordY);
}

bool operator ==(const Vector2D& vector1, const Vector2D& vector2)
{ 
    return ((vector1.x == vector2.x)
            && (vector1.y == vector2.y));
}


const Vector2D operator *(int k, const Vector2D& vector1)
{
    int tempCoordX = k * vector1.x;
    int tempCoordY = k * vector1.y;
    return Vector2D(tempCoordX, tempCoordY);
}

const int Vector2D::operator *(const Vector2D& vector1)
{
    int coordX = (x * vector1.x);
    int coordY = (y * vector1.y);

    int innerProduct = coordX + coordY;
    return innerProduct;
}


void Vector2D::output( ) const
{
    
    cout << "(" << x << ","
         << y << ")" << endl;
}

Vector2D::Vector2D( ): x(0), y(0)
{ }

Vector2D::Vector2D(int theX, int theY ): x(theX), y(theY)
{ }