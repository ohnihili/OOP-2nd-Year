#include <iostream>
using namespace std;
extern int array_min(int integers[], int length);
extern int array_max(int integers[], int length);
extern int sum_min_max(int integers[], int length);

int main() {

int n = 0;

cout << "Input length of array: ";
cin >> n;
cout << "\n";

int test_array[n];

cout << "Input numbers of array: " << endl;

for (int i=0;i<n;i++) {
    cin >> test_array[i];
    cout << "\n";
}

int sum = sum_min_max(test_array, n);

cout << sum << endl;

return 0;
}