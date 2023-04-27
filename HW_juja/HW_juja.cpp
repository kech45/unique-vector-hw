#include <iostream>
using namespace std;

template<class T>
class UniqueVector {
private:

    T *_arr;
    int _length = 0;
    int _capacity;

    setCapacity(int val) {

        if (val>0)
        {
            this->_capacity = val;
        }
    }

    void deleteArr() {
        delete[]_arr;
    }
    void copy(const UniqueVector<T> &other) {
        deleteArr();
        for (size_t i = 0; i < other.getLength(); i++)
        {

        }
        this->_capacity = other.getCapacity();
        this->_length = other.getLength();
    }


    bool exists(T& element) {
        for (size_t i = 0; i < _length; i++)
        {
            if (_arr[i]==element)
            {
                return true;
            }
        }
        return false;
    }
    void resize() {
        _capacity *= 2;
        T* newarr = new T[_capacity];

        for (size_t i = 0; i < _length; i++)
        {
            newarr[i] = _arr[i];
        }
        delete []_arr;

        _arr = newarr;

    }
    bool needsResizing() {
        if (_length == _capacity)
        {
            return true;
        }
        return false;
    }

public:

    UniqueVector()
    {
        _arr = new T[5];
        _capacity = 5;
    }

    UniqueVector(int capacity)
    {
        setCapacity(capacity);
        _arr = new T[capacity];
    }

    const int getLength() const { return _length; }
    const int getCapacity() const { return _capacity; }

    void addElement(T& element) {
        if (!exists(element))
        {
            _arr[_length] = element;
        }


    }

    void addElement(int i,T element) {

        if (!exists(element))
        {

            
        }
    }

    void removeElement() {

    }

    void reverseArray() {

    }

 };











int main()
{
    std::cout << "Hello World!\n";
}


