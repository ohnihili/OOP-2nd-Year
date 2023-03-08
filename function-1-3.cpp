#include <iostream>

using namespace std;

void count_digits(int array[4][4])
{
    int ones = 0;
    int twos = 0;
    int threes = 0;
    int fours = 0;
    int fives = 0;
    int sixes = 0;
    int sevens = 0;
    int eights = 0;
    int nines = 0;
    int zeros = 0;

    for (int i=0;i<4;i++)
    {
        for (int j=0;j<4;j++)
        {
            if (array[i][j]==1)
            {
                ones = ones + 1;
            } else if (array[i][j]==2)
            {
                twos = twos + 1;
            } else if (array[i][j]==3)
            {
                threes = threes + 1;
            } else if (array[i][j]==4)
            {
                fours = fours + 1;
            } else if (array[i][j]==5)
            {
                fives = fives + 1;
            } else if (array[i][j]==6)
            {
                sixes = sixes + 1;
            } else if (array[i][j]==7)
            {
                sevens = sevens + 1;
            } else if (array[i][j]==8)
            {
                eights = eights + 1;
            } else if (array[i][j]==9)
            {
                nines = nines + 1;
            } else if (array[i][j]==0)
            {
                zeros = zeros + 1;
            }
        }
    }
    
    cout << "0:" << zeros << ";"; 
    cout << "1:" << ones << ";"; 
    cout << "2:" << twos << ";"; 
    cout << "3:" << threes << ";"; 
    cout << "4:" << fours << ";"; 
    cout << "5:" << fives << ";"; 
    cout << "6:" << sixes << ";"; 
    cout << "7:" << sevens << ";"; 
    cout << "8:" << eights << ";"; 
    cout << "9:" << nines << ";"; 

}