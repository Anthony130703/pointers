#include <iostream>
#include <cstdlib>
#include <string.h>

using namespace std;

int main()
{
    int *p = new int[0];
    int *q = p + 7;
    int *r = p+2;
    int z;
    z=q-r;
    cout << z << endl;
    return 0;
}