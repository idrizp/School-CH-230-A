/*
  CH-230-A
  testvector.cpp
  Idriz Pelaj
  ipelaj@jacobs-university.de
*/

#include "Vector.h"
#include <iostream>

using namespace std;

int main()
{
    Vector v1;

    double arr[2] = {1, 2};
    Vector v2 = Vector(2, arr);

    Vector v3 = Vector(v2);
    v3.printVector();

    double arr2[2] = {3, 4};
    Vector v4 = Vector(2, arr2);

    cout << "v2: " << v2.norm() << endl;
    cout << "v2 . v4: " << v2.scalarMultiply(v4) << endl;

    (v2.add(v4)).printVector();
    (v2.difference(v4)).printVector();

    return 0;
}