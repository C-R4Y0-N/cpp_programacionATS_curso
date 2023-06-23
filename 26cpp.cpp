/*9.Escriba un programa que calcule el valor de: 1*2*3...*n (factorial)*/
//#include <iostream>
//#include <bits/stdc++.h>
//using namespace std;
//int main()
//{
//    int n,mult=1;
//    cin>>n;
//    for(int i=1; i<=n; i++)
//    {
//        mult*=i;
//    }
//    cout<<mult<<endl;
//    return 0;
//}
/*10.Escriba un programa que calcule el valor de: 1! + 2! + 3! + ... +n!*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0,mult=1;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        mult*=i;
        sum+=mult;
    }
    cout<<sum<<endl;
    return 0;
}