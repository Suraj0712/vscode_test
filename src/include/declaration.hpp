#include <iostream>
#include <vector>

using namespace std;

template <class T>
class Vector
{
    public:
    int size;
    Vector();
    ~Vector();
    void push_bac(T var);
    void pop_bac();
    void show()
    {
        for(size_t i=0 ; i < my_vector.size(); i++)
        {
            cout<<my_vector[i]<<" ";
        }
    }

    private:
    vector<T> my_vector;
};
