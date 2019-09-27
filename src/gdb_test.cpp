#include <iostream>
#include <stdio.h>

using namespace std;

int func(int n)
{
    int i = 0;
    int sum = 0;
    for (i = 0; i < n; i++)
    {
        sum += i;
    }

    return sum;
}

int main(int argc, char* argv[])
{
    int n;
    cout << "please input n : " ;
    cin >> n;
    printf("sum: %d", func(n));
    return 0;
}