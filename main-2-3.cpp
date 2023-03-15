#include <iostream>
extern bool is_palindrome(int integers[], int length);
extern int sum_array_elements(int integers[], int length);
extern int sum_if_palindrome(int integers[], int length);

using namespace std;

int main()
{
    int array[5] = {1,2,3,2,1};
    int num = 5;

    cout << sum_array_elements(array,num) << endl;
    
}