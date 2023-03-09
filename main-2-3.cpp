#include <iostream>

extern int sum_if_palindrome(int integers[], int length);
extern bool is_palindrome(int integers[], int length);
extern int sum_array_elements(int integers[], int length);

using namespace std;

int main()
{
    int array[5] = {1,2,3,2,1};

    int array2[4] = {1,2,2,1};

    int array3[4] = {1,2,3,4};

    cout << sum_if_palindrome(array,0) << "," << sum_if_palindrome(array2,4) << "," << sum_if_palindrome(array3,4) << endl;


}