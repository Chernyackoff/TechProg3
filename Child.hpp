#ifndef LAB3_CHILD_HPP
#define LAB3_CHILD_HPP
#include "Parent.hpp"

class Child : public Parent{
protected:
    Parent* parent;
public:
    Child();
    Child(std::string name, int day, int month, int year, Parent* p);
    ~Child();
    void print(std::ostream &out) override;
};

#endif //LAB3_CHILD_HPP
