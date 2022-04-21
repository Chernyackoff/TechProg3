#ifndef LAB3_PARENT_HPP
#define LAB3_PARENT_HPP
#include <iostream>
#include <fstream>
#include <string>
#include "correct_input.cpp"
#include "Vector.cpp"
class Parent{
protected:
    std::string birth_date;
    std::string full_name;
public:
    Parent();
    Parent(std::string name, int day, int month, int year);
    ~Parent() = default;
    virtual void print(std::ostream &out);
};

#endif //LAB3_PARENT_HPP
