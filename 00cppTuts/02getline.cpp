#include <iostream>
using namespace std;
int main()
{
    int b;
    string a, c;
    getline(cin, a);
    cin >> b;
    cin.ignore(); // To ignore the return in the buffer.
    getline(cin, c);
    cout << a << endl
         << b << endl
         << c << endl;
    return 0;
}
/*
i/p:-
Saqib Jallal
21
Years old

o/p:-
Saqib Jallal
21
Years old
*/