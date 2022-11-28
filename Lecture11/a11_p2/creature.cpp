/*
  CH-230-A
  creature.cpp
  Idriz Pelaj
  ipelaj@jacobs-university.de
*/

#include <iostream>

using namespace std;

// Creature class
class Creature
{
  public:
    Creature();
    // Declare destructor for Creature
    ~Creature();
    void run() const;

  protected:
    int distance;
};

Creature::Creature() : distance(10)
{
    cout << "Creature constructor called." << endl;
}

Creature::~Creature()
{
    cout << "Called Creature destructor." << endl;
}

void Creature::run() const
{
    cout << "running " << distance << " meters!\n";
}

class Wizard : public Creature
{
  public:
    Wizard();
    // Declare destructor for Wizard
    ~Wizard();
    void hover() const;

  private:
    int distFactor;
};

Wizard::Wizard() : distFactor(3)
{
    cout << "Wizard constructor called." << endl;
}

Wizard::~Wizard()
{
    cout << "Wizard destructor called." << endl;
}

void Wizard::hover() const
{
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}

// Fly class
class Fly : public Creature
{
  public:
    Fly();
    // Declare destructor for Fly
    ~Fly();
    // The fly method.
    void fly() const;

  private:
    // The fly's buzzing sound decibel level.
    int soundDecibels;
};
// The fly constructor, by default has a sound decibel level of 50.
Fly::Fly() : soundDecibels(50)
{
    cout << "Fly constructor called." << endl;
}

Fly::~Fly()
{
    cout << "Fly destructor called." << endl;
}

void Fly::fly() const
{
    cout << "Flying at a distance of " << distance
         << "m and making a noise of " << soundDecibels << " decibels!";
}

// Dog class
class Dog : public Creature
{
  public:
    Dog();
    // Declare destructor for Dog
    ~Dog();
    void bark() const;

  private:
    bool fluffy;
};

Dog::Dog() : fluffy(true)
{
    cout << "Dog constructor called." << endl;
}

Dog::~Dog()
{
    cout << "Dog destructor called." << endl;
}

void Dog::bark() const
{
    cout << "A " << (fluffy ? "fluffy" : "not so fluffy ")
         << " dog is barking at a distance of " << distance << "m!"
         << endl;
}

int main()
{
    cout << "Creating an Creature.\n";
    Creature c;
    c.run();

    // Create an instance of a wizard.
    cout << "\nCreating a Wizard.\n";
    Wizard w;
    w.run();
    w.hover();

    // Create an instance of a fly.
    cout << "\nCreating a Fly.\n";
    Fly f;
    f.run();
    f.fly();

    // Create an instance of a dog.
    cout << "\nCreating a Dog.\n";
    Dog d;
    d.run();
    d.bark();

    return 0;
}
