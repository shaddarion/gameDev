#pragma once

class Vector2
{
public:
  Vector2();

  Vector2(
	  float _X,
	  float _Y
    );
    
  Vector2 operator +(Vector2 _Vector)
  {
    return Vector2(_Vector.X + X, _Vector.Y + Y);
  }

protected:
  float X;
  float Y;
};
