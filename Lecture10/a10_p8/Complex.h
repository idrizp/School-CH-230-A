/*
    CH-230-A
    Complex.h
    Idriz Pelaj
    ipelaj@jacobs-university.de
*/

// simple class for complex numbers

class Complex
{

  private:      // internal implementation is hidden
    float real; // real part
    float imag; // imaginary part

  public:
    Complex();                 // empty constructor
    Complex(float, float = 0); // constructor taking values for real and
    Complex(const Complex &);  // Copy constructor
    ~Complex();                // destructor

    // imaginary parts. Imaginary defaults to 0
    double magnitude(); // computes the magnitude of the number

    Complex conjugate();       // computes the conjugate of the number
    Complex add(Complex);      // adds two complex numbers
    Complex multiply(Complex); // multiplies two complex numbers
    Complex subtract(Complex); // subtracts two complex numbers

    void print(); // prints it to the screen
};
