/*11. Escriba un programa que calcule el valor de: 2^1+2^2+3^2+2^4...2^n*/
//#include <iostream>
//#include <bits/stdc++.h>
//using namespace std;
//int main()
//{
//    int n,sum,qrt;
//    cin>>n;
//    for(int i=1; i<=n; i++)
//    {
//        qrt=pow(2,i);
//        sum+=qrt;
//    }
//    cout<<sum<<endl;
//    return 0;
//}
/*12.Hacer un programa que calcule el resultado de la siguiente expresión: 1-2+3-4+5-6...n*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n,hola=0,aux=1;
   cin>>n;
   for(int i=1; i<=n; i++)
   {
      if(aux%2==0)
      {
        hola-=i;
        aux++;
      }
      else if(aux%2!=0)
      {
        hola+=i;
        aux++;
      }
   }
   cout<<hola<<endl;
   return 0;
}