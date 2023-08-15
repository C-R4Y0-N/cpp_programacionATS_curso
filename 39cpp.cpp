//#include <bits/stdc++.h>
//using namespace std;
//int main()
//{
//    int matriz[100][100];
//    char band='F';
//    int filas, columnas;
//    cout<<"Digite numero de filas: "<<endl;
//    cin>>filas;
//    cout<<"Digite numero de columnas: "<<endl;
//    cin>>columnas;
//    for(int i=0; i<filas; i++)
//    {
//        for(int j=0; j<columnas; j++)
//        {
//            cout<<"Digite el numero "<<"["<<i<<"]"<<"["<<j<<"]: "<<endl;
//            cin>>matriz[i][j];
//        }
//    }
//    if(filas==columnas)
//    {
//        for(int i=0; i<filas; i++)
//        {
//            for(int j=0; j<columnas; j++)
//            {
//                if(matriz[i][j] == matriz[j][i])
//                {
//                    band='V';
//                }
//            }
//        }
//    }
//
//    if(band=='V')
//    {
//        cout<<"La matriz es simetrica"<<endl;
//    }
//    else
//    {
//        cout<<"La matriz no es simetrica"<<endl;
//    }
//
//    return 0;
//}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int matriz[3][3], matriz2[3][3];
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin>>matriz[i][j];
        }
    }
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin>>matriz2[i][j];
        }
    }
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<matriz[i][j]*matriz2[i][j];
        }
    }
    return 0;
}