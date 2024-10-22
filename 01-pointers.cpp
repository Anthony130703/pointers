#include <iostream>

using namespace std;

int main()
{
    int num = 20, *dir_num;
    dir_num = &num;

    cout << "El numero es: " << *dir_num << endl;
    cout << "LA direccion es: " << dir_num << endl;

    return 0;
}