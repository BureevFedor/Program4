#include <iostream>
using namespace std;
int main()
{
    int a, n;
    int cnt[] = {500,200,100,50,20,10};
    cin >> n;
    int x = 0;
    for (int i = 0; i < 6; i++)
    {
        a = cnt[i];
        x += n / a;
        n %= a;
    }

    if(n > 0)
        x = -1;

    cout << x;
    return 0;
}
