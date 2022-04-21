#ifndef LAB_SHPAGIN_VECTOR_CPP
#define LAB_SHPAGIN_VECTOR_CPP
#include <iostream>
#include <cmath>

template<typename T>
class Vector {
    T *values = nullptr;
    int length{};
public:
    Vector() = default;
    ~Vector(){
        delete[] values;
    }

    Vector(const Vector<T>&  v){
        length = v.length;
        values = new T[length];
        memcpy(values, v.values, length* sizeof(T));
    }

    Vector<T>& operator=(const Vector<T>& v){
        if(this == &v) return *this;
        delete[] values;

        length = v.length;
        values = new T[v.length];
        memcpy(values, v.values, (length)* sizeof(T));
        return *this;
    }

    explicit Vector(int l) : length(l) {
        values = new T[length];
    }

    int size() {
        return length;
    }

    void append(T var) {
        values = static_cast<T*>(std::realloc(values, ++length * sizeof(T)));
        values[length - 1] = var;
    }

    T &operator[](int i) {
        if (i >= length || i < -length) throw "Out of bounds";
        if (i < 0) {
            return values[length + i];
        } else {
            return values[i];
        }
    }


};
#endif