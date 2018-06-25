#ifndef FARM_H_
#define FARM_H_
#include <iostream>

class Animal
{
    protected:
        std::string voice;
    public:
        // Animal();
        // ~Animal();
        virtual std::string getVoice() = 0;
};

class Dog : public Animal
{
        std::string sign;
    public:
        Dog();
        ~Dog();
        std::string getVoice() { return voice + " " + sign; }
};

class Cat : public Animal
{
        std::string sign;
    public:
        Cat();
        ~Cat();
        std::string getVoice() { return voice + " " + sign; }
};

class Cow : public Animal
{
        std::string sign;
    public:
        Cow();
        ~Cow();
        std::string getVoice() { return voice + " " + sign; }
};

#endif //FARM_H_