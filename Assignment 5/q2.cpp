#include <iostream>
using namespace std;
int main()
{
    int num, ans = 0, count = 0, rem,power=1;
    cout << "Enter a Natural Number: ";
    cin>>num;
    while (num != 0)
    {
        rem = num % 2;
        if (rem == 0)
        {
            count++;
        }
        ans = ans  + rem*power;
        power*=10;
        num /= 2;
    }
    cout << "Binary representation: " << ans << endl;
    cout << "Number of Zeros: " << count;
    return 0;
}