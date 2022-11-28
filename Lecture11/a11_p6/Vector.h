/*
  CH-230-A
  Vector.h
  Idriz Pelaj
  ipelaj@jacobs-university.de
*/

class Vector
{
  private:
    int size;
    double *components;

  public:
    Vector();
    Vector(const Vector &);
    Vector(int size, double *components);
    ~Vector();

    double *getComponents() const;
    int getSize() const;

    void setComponents(double *);
    void setSize(int);

    double norm();
    void printVector();

    double scalarMultiply(const Vector) const;
    Vector difference(const Vector) const;
    Vector add(const Vector) const;
};
