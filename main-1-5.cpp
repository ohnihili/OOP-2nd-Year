#include <iostream>
using namespace std;
extern int count_evens(int number);

int main() 
{
int n;
cin >> n;
    
cout << "There are " << count_evens(n) << " even numbers between 1 and " << n << endl;
return 0;
}