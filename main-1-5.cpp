#include <iostream>
using namespace std;
extern void print_summed(int array1[3][3],int array2[3][3]);

int main() {

int test_array_1[3][3];
int test_array_2[3][3];

cout << "enter values for first matrix" << endl;

for (int i=0;i<3;i++) {
    for (int j=0;j<3;j++) {
        cin >> test_array_1[i][j];
        
    }
    cout << "\n";
}

cout << "enter values for second matrix" << endl;

for (int i=0;i<3;i++) {
    for (int j=0;j<3;j++) {
        cin >> test_array_2[i][j];
        
    }
    cout << "\n";
}

print_summed(test_array_1,test_array_2);

return 0;
}