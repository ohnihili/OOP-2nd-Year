#include <iostream>
using namespace std;
extern int num_count(int array[], int n, int number);

int main() 
{
int n;
int number = 0;

cin >> n;

int test_array[n];

for (int i = 0; i<n; i++) 
{
    cin >> test_array[i] ;
    cout << "\n";
}

cout << "What is your desired number? ";
cin >> number;

cout << "The number of times that " << number << " appears in the array is " << num_count(test_array,n,number) << endl;

return 0;
}