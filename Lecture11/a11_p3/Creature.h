/*
  CH-230-A
  Creature.h
  Idriz Pelaj
  ipelaj@jacobs-university.de
*/

#ifndef CREATURE_H
#define CREATURE_H

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

// Wizard class
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

#endif