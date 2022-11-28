/*
    CH-230-A
    Box.h
    Idriz Pelaj
    ipelaj@jacobs-university.de
*/

// Header guard
#ifndef _BOX_H
#define _BOX_H

// Class that defines a box.
class Box
{
    // The data members.
  private:
    double width;
    double height;
    double depth;

    // The methods.
  public:
    Box(); // Default constructor

    // Constructor with parameters
    Box(double width, double height, double depth);

    // Copy constructor.
    Box(const Box &);

    // The destructor.
    ~Box();

    void setWidth(double);
    void setHeight(double);
    void setDepth(double);

    double getWidth();
    double getHeight();
    double getDepth();

    double computeVolume();
};

#endif