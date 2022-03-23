#include "Box.h"

// Implement setters and getters
void Box::setLength(int bxLength, int bxWidth, int bxHeight)
{
  length = bxLength;
  width = bxWidth;
  height = bxHeight;
}

int Box::getHeight()
{
  return height;
}

int Box::getLength()
{
  return length;
}

int Box::getWidth()
{
  return width;
}

// Implemenet the calcVolume() unction
int Box::calcVolume() {
  return (height * width * length);
}
