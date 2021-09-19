#include<bits/stdc++.h>

using namespace std;

int main()
{

    int step, mod;
    while (scanf("%d%d", &step, &mod))
    {
        int cnt =0,seed = 0;
        printf("%10d%10d", step, mod);
        while (true)
        {
            seed = (seed + step) % mod;
            cnt++;
            if (seed == 0)
            {
                if (cnt == mod)
                    cout<<"    Good Choice"<<endl;
                else
                    cout<<"    Bad Choice"<<endl;
                cout<<endl;
                break;
            }
        }
    }
    return 0;
}
