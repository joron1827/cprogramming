#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

class Vector2D
{
public:
    Vector2D( );
    Vector2D(int theX, int theY);    

    friend const Vector2D operator +(const Vector2D& vector1, const Vector2D& vector2);
    friend ostream& operator <<(ostream& outputStream, const Vector2D& vector1);
private:
    int x; 
    int y; 
};

int main()
{
    Vector2D v0, v1(2,2), v2(3,3), v3;
    cout << v1 << endl;
    cout << v1 + v2 << endl;

}

const Vector2D operator +(const Vector2D& vector1, const Vector2D& vector2)
{
    int coordX = vector1.x + vector2.x;
    int coordY = vector1.y + vector2.y;
    
    return Vector2D(coordX,coordY);
}

ostream& operator <<(ostream& outputStream, const Vector2D& vector1)
{
    cout << "(" << vector1.x << ","
         << vector1.y << ")" ;
}


Vector2D::Vector2D( ): x(0), y(0)
{ }

Vector2D::Vector2D(int theX, int theY ): x(theX), y(theY)
{ }