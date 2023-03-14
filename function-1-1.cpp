#include <iostream>

using namespace std;

int size_of_variable_star_t()
{
    int *t = new int;

    *t = 5;

    cout << t << endl;

    return *t;

}