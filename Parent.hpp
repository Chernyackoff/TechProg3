#ifndef LAB3_PARENT_HPP
#define LAB3_PARENT_HPP

#include <string>
#include "correct_input.cpp"
class Parent{
protected:
    std::string birth_date;
    std::string full_name;
public:
    Parent();
    ~Parent() = default;
    virtual void print();
};

#endif //LAB3_PARENT_HPP
