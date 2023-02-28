#include <iostream>
using namespace std;
extern void two_five_nine(int array[], int n);

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

two_five_nine(test_array, n);

}