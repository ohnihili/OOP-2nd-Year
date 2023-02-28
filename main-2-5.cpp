#include <iostream>
using namespace std;
extern bool is_descending(int array[], int n);

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



cout << "The array is descending is... " << is_descending(test_array, n) << endl;

return 0;

}