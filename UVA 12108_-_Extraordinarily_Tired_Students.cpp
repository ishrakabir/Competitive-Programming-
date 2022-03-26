#include <stdio.h>
#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
#include <queue>
#include <string.h>
#include <set>
#include <stack>
#include <stdlib.h>
#include <time.h>

using namespace std;

int va[11];    // Length cycle length
int vb[11];    // Sleep cycle length
int now[11];   // In the current state for a few minutes
int first[11]; // In the first few minutes
int f[11];     // Whether to sleep

bool isall(int n) // Judge whether it coincides with the original state, that is, judge whether there is no solution
{
    for (int i = 0; i < n; i++)
    {
        int t = 0;
        if (f[i])
            t = va[i]; // Add the length of the awake period, keep the same with the original value
        if (now[i] + t != first[i])
            return false;
    }
    return true;
}

int main()
{
    int n, T = 0;
    while (cin >> n && n)
    {
        T++;
        int time = 1; // current time
        int num = 0;  // total number of people sleeping
        for (int i = 0; i < n; i++)
        {
            cin >> va[i] >> vb[i] >> now[i];
            first[i] = now[i];
            if (now[i] > va[i])
            {
                f[i] = 1;
                num++;
                now[i] -= va[i];
            }
            else
                f[i] = 0;
        }
        // cout << num << endl;
        // for (int i = 0; i < n; i++)
        // {
        //     cout << va[i] << " " << vb[i] << " " << f[i] << " " << now[i] << " " << first[i] << endl;
        // }
        // for (int i = 0; i < n; i++)
        //     cout << now[i] << " ";
        // cout << endl;
        while (1)
        {
            if (num == 0) // All sober, exit the loop
                break;
            int t = 0; // Increase or decrease in the number of people sleeping this minute
            for (int i = 0; i < n; i++)
            {
                now[i]++;
                if (f[i]) // sleep
                {
                    if (now[i] > vb[i])
                    { // Be awake
                        now[i] = 1;
                        f[i] = 0;
                        t--;
                    }
                }
                else
                {
                    if (now[i] > va[i])
                    {
                        now[i] = 1;
                        if (num * 2 > n) // Whether the number of people sleeping in the last minute meets the sleeping conditions
                        {
                            f[i] = 1;
                            t++;
                        }
                    }
                }
            }
            num += t;
            if (isall(n))
            {
                time = -1;
                break;
            }
            time++;
        }
        printf("Case %d: %d\n", T, time);
    }
    return 0;
}
