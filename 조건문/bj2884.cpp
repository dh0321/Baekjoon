#include <iostream>
using namespace std;

int main()
{
    int h;
    int m;

    cin>>h>>m;


    if(m < 45)
    {
        if(h == 0)
        {
            h = 23;
            m = m + 15;
        }

        else
        {
            h = h - 1;
            m = m + 15;
        }
    }

    else 
    {
        m = m - 45;
    }

    cout<<h<<" "<<m<<endl;
}

/* My first answer 
int main()
{
    int h;
    int m;

    int ans_h;
    int ans_m;

    cin>>h>>m;

    int ans = (h * 60 + m) - 45;
    ans_h = ans / 60;
    ans_m = ans % 60;

    if(h == 0)
    {
        h = 24;
        int ans = (h * 60 + m) - 45;
        ans_h = ans / 60;
        ans_m = ans % 60;
    }
    else
    {
        int ans = (h * 60 + m) - 45;
        ans_h = ans / 60;
        ans_m = ans % 60;
    }

    cout<<ans_h<<" "<<ans_m<<endl;

    return 0;
}*/
