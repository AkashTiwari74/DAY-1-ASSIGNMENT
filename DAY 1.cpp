/*What is the time complexity T(n) for the following code snippet?
a = 1
b = 1
while(b <= n)
{
    a += 1
    b += 1
    cout<<"Hi";
}

				ANS: O(n)

*/


#include<iostream>
using namespace std;
void fun(int n)
{
    if(n > 0)
    {
        cout<<n;
        fun(n - 1);					// OUTPUT : 321123
        cout<<n;
    }
}

int main()
{
fun(3);
return 0;

}

