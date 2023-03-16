#include <iostream>
extern bool is_array_palindrome(int integers[], int length);
extern int sum_integers(int integers[], int length);
extern int palindrome_sum(int integers[], int length);

using namespace std;

int main()
{
    int array[5] = {1,2,3,2,1};
    int num = 5;

    cout << sum_integers(array,num) << endl;
    
}