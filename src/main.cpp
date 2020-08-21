#include "include/declaration.hpp"

int main()
{
    Vector<int> simple_vector;
    simple_vector.push_bac(1);
    simple_vector.push_bac(2);
    simple_vector.push_bac(3);
    simple_vector.pop_bac();
    simple_vector.show();

    return 0;
}