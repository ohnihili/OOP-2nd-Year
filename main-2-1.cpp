#include <iostream>
using namespace std;
extern int min_element(int array[], int n);

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
    
cout << "The smallest number in the array is " << min_element(test_array,n) << endl;
return 0;
}