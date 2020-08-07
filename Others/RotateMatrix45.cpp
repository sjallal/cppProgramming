#include<iostream>
using namespace std;
int main()
{
    const int n = 5;
    int a[n][n] = {{0,0,1,0,0},{0,0,1,0,0},{1,1,1,1,1},{0,0,1,0,0},{0,0,1,0,0}};
    int b[n][n];
    int x, y;
    int mid = n / 2;
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
            cout << a[i][j] <<" ";
        cout<<endl;
    }

    for(int i = 0; i < 3; i++)
    {
        x = 0; y = mid - i;
        for(int j = 0; j < 5; j++)
        {
            b[i][j] = a[x][y];
            b[n-i-1][j] = a[y][x];

            if(i == 0)
            {
                if(j >= mid)
                    x++;
                if(j < mid)
                    y++;
            }

            else if(i == 1)
            {
                if(j != 1)
                    x++;
                if(j != mid)
                    y++;
            }
            else
            {
                x++;
                y++;
            }
        }
    }
    cout << endl << endl;
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
            cout << b[i][j] <<" ";
        cout<<endl;
    }

    return 0;
}
