#include <vector>
#include <iostream>

template <class T>
struct Triplet{
    T a;
    T b;
    T c;
};

template<class T>
class TridiagonalMatrix{
private:
    unsigned int size;
    std::vector<Triplet<T>> data;

public:
    TridiagonalMatrix() = default;
    TridiagonalMatrix(unsigned int size){
        this->size = size;
        data.reserve(size);
    }
    TridiagonalMatrix(std::initializer_list<T> l) {
        this->size = l.size() / 3;
        data.reserve(size);
        unsigned int i = 0;
        for(auto it = l.begin(); i <= size * 3 - 3; i += 3){
            Triplet<T> t;
            t.a = *(it + i);
            t.b = *(it + i + 1);
            t.c = *(it + i + 2);
            data.push_back(t);
        }

    }

    const unsigned int get_size() const {
        return this->size;
    }

    const Triplet<T> operator[](unsigned i) const {
        return data[i];
    }

    friend std::ostream &operator<<(std::ostream &os, const TridiagonalMatrix<T> &tm) {
        for (unsigned i = 0; i < tm.get_size(); i++){
            os << tm[i].a << ' ' << tm[i].b << ' ' << tm[i].c << std::endl;
        }
        return os;
    }


};



