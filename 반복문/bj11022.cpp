#include <iostream>
using namespace std;


int main()
{
    int t;
    int a, b;
    int result;

    cin >> t;

    for(int i = 0; i < t; i++)
    {
        cin >> a >> b;
        result = a + b;
        cout<<"Case #"<<i + 1<<": "<<a<<" + "<<b<<" = "<<result<<endl;
    }


    return 0;
}
