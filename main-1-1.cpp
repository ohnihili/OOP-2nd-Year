#include <iostream>
using namespace std;
extern int array_sum(int array[], int n);

int main() 
{
int n;
cin >> n;

int test_array[n];

for (int i = 0; i<n; i++) 
{
    cin >> test_array[i] ;
    cout << "\n";
}

cout << "The sum of the array is " << array_sum(test_array,n) << endl;

return 0;
}