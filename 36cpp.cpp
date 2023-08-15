//#include <bits/stdc++.h>
//using namespace std;
//int main()
//{
//    int numeros[100][100],filas,columnas;
//    cout<<"Digite el numero de filas"<<endl;
//    cin>>filas;
//    cout<<"Digite el numero de columnas"<<endl;
//    cin>>columnas;
//    for(int i=0; i<filas; i++)
//    {
//        for(int j=0; j<columnas;j++)
//        {
//            cout<<"Digite el numero "<<"["<<i<<"]"<<"["<<j<<"]:"<<endl;
//            cin>>numeros[i][j];
//        }
//    }
//    for(int i=0; i<filas; i++)
//    {
//        for(int j=0; j<columnas; j++)
//        {
//            cout<<"Numero "<<"["<<i<<"]"<<"["<<j<<"]: "<<numeros[i][j]<<endl;
//        }
//    }
//    return 0;
//}

// matriz [filas][columnas]
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int matriz[3][3];
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<"Digite el numero: "<<"["<<i<<"]"<<"["<<j<<"]"<<endl;
            cin>>matriz[i][j];
        }
    }
    cout<<"Diagonal principal: "<<endl;
    cout<<" "<<matriz[0][0]<<endl;
    cout<<"  "<<matriz[1][1]<<endl;
    cout<<"   "<<matriz[2][2]<<endl;
    return 0;
}