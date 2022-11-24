#include <iostream>
using namespace std;

int main()
{
    int enter_price;
    int number;
    int a;
    int b;
    int result = 0;

    cin >> enter_price;
    cin >> number;

    for(int i = 0; i < number; i++)
    {
        cin >> a >> b;
        result += a * b;
    }

    if(result == enter_price)
    {
        cout<<"Yes"<<endl;
    }
    else {
        cout<<"No"<<endl;
    }
    


    return 0;
}
