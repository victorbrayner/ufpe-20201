#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int t, n, i, sami, cases = 0;
    bool key;

    cin >> t;

    while (t > 0)
    {
        cin >> n;

        cases++;
        sami = 5;
        key = false;
        i = 2;
        
        while (n > sami)
        {
            if ((n - sami) % 3 == 0)
            {
                key = true;
                n -= sami;
                cout << "Case " << cases << ": " << n << endl;
                break;
            }
            else
            {
                sami *= i;
                i++;
            }   
        }
        
        if (key == false)
        {
            cout << "Case " << cases << ": " << -1 << endl;
        }
        t--;
    }
    
    

    return 0;
}
