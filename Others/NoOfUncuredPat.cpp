#include<iostream>
using namespace std;
struct Obs{
    int date, npat;
    void read()
    {
        cin >> date >> npat;
    }
};

int uncured(Obs obs[], int n, int D, int gd)
{
    int i, j, sum = 0, temp = 0;
    if(gd == 0)
        return sum;

    for(i = gd; i > 0; i--)
        for(j = 0; j < n; j++)
            if(i == obs[j].date)
            {
                sum += obs[j].npat;
                break;
            }
    if(gd <= D)
        return sum;

    for(i = gd-D; i>0; i--)
        for(j = 0; j < n; j++)
            if(i == obs[j].date)
            {
                temp += obs[j].npat;
                break;
            }
    sum = sum - temp;
    return sum;
}

int main(){
    int D; cin>>D;
    int n; cin>>n;
    Obs obs[n];
    for(int i = 0; i < n; i++)
    {
        obs[i].read();
    }
    for(int i = 0; i < n; i++)
    {
        cout << obs[i].date <<" " << obs[i].npat << endl;
    }

    while(true)
    {
        int gd; cin>>gd;
        if(gd == -1)
            break;
        cout << gd << " " << uncured(obs, n, D, gd)<<endl;
    }
}
