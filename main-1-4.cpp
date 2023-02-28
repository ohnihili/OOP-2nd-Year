#include <iostream>
using namespace std;
extern int sum_two_arrays(int array[], int secondarray[], int n);

int main() 
{
int n;
cin >> n;

int test_array[n];
int test_array2[n];

for (int i = 0; i<n; i++) 
{
    cin >> test_array[i] ;
    cout << "\n";
}
for (int i = 0; i<n; i++) 
{
    cin >> test_array2[i] ;
    cout << "\n";
}

cout << "The sum of the two arrays is " << sum_two_arrays(test_array, test_array2, n) << endl;

return 0;
}