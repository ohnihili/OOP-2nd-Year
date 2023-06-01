#include "Utils.h"
#include <iostream>
#include <tuple>

using namespace std;

int main()
{

    tuple<int,int> t1 = make_tuple(10,15);
    tuple<int,int> t2 = make_tuple(5,10);

    cout << Utils::calculateDistance(t1,t2) << endl;

    tuple<int,int> t3 = Utils::generateRandomPos(50,50);
    tuple<int,int> t4 = Utils::generateRandomPos(50,50);

    cout << Utils::calculateDistance(t3,t4) << endl;
}
