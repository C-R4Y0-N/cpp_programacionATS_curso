//#include <bits/stdc++.h>
//using namespace std;
//int main()
//{
//    int matriz[2][2], matriz2[2][2];
//    for(int i=0; i<2; i++)
//    {
//        for(int j=0; j<2; j++)
//        {
//            cin>>matriz[i][j];
//        }
//    }
//    for(int i=0; i<2; i++)
//    {
//        for(int j=0; j<2; j++)
//        {
//            matriz2[i][j]=matriz[i][j];
//        }
//    }
//    for(int i=0; i<2; i++)
//    {
//        for(int j=0; j<2; j++)
//        {
//            cout<<matriz[i][j]<<endl;
//        }
//    }
//    return 0;
//}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int matriz[100][100], matriz2 [100][100];
    int filas, columnas;
    cout<<"Digite numero de filas: "<<endl;
    cin>>filas;
    cout<<"Digite numero de columnas: "<<endl;
    cin>>columnas;
    for(int i=0; i<filas; i++)
    {
        for(int j=0; j<columnas; j++)
        {
            cout<<"Digite el numero "<<"["<<i<<"]"<<"["<<j<<"]: "<<endl;
            cin>>matriz[i][j];
        }
    }
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            matriz2[i][j]=matriz[i][j];
        }
    }
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            cout<<matriz2[i][j]<<endl;
        }
    }
    return 0;
}