#include <iostream>
using namespace std;
extern void print_scaled(int array[3][3],int scale);

int main() {
int n = 0;
int test_array[3][3];

cout << "Enter scale degree: ";
cin >> n;

for (int i=0;i<3;i++) {
    for (int j=0;j<3;j++) {
        cin >> test_array[i][j];
        cout << "\n";
    }
}

print_scaled(test_array,n);

return 0;
}