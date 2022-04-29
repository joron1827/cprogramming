#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;


class Vector2D
{
public:
    Vector2D( );
    Vector2D(int theX, int theY);    
    int getX() const;
    int getY() const;
    void output( ) const;

private:
    int x; 
    int y; 

};

const Vector2D operator +(const Vector2D& vector1, const Vector2D& vector2);
const Vector2D operator -(const Vector2D& vector1, const Vector2D& vector2);
bool operator ==(const Vector2D& vector1, const Vector2D& vector2);

int main()
{
    Vector2D v0, v1(2,2), v2(3,3), v3;
    v0.output();
    v3 = v1 + v2;
    v3.output();
    v3 = v2 - v2;
    v3.output();
    if (v3 == v0)
        cout << "Operator - works!";

}


const Vector2D operator +(const Vector2D& vector1, const Vector2D& vector2)
{
    int coordX = vector1.getX() + vector2.getX();
    int coordY = vector1.getY() + vector2.getY();
    
    return Vector2D(coordX,coordY);
}

const Vector2D operator -(const Vector2D& vector1, const Vector2D& vector2)
{
    int coordX = vector1.getX() - vector2.getX();
    int coordY = vector1.getY() - vector2.getY();
    
    return Vector2D(coordX,coordY);
}

bool operator ==(const Vector2D& vector1, const Vector2D& vector2)
{ 
    return ((vector1.getX() == vector2.getX())
            && (vector1.getY() == vector2.getY()));
}

void Vector2D::output( ) const
{

    cout << "(" << x << ","
         << y << ")" << endl;
}

int Vector2D::getX() const
{
    return x;
}

int Vector2D::getY() const
{
    return y;
}

Vector2D::Vector2D( ): x(0), y(0)
{ }

Vector2D::Vector2D(int theX, int theY ): x(theX), y(theY)
{ }