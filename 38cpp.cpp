//#include <bits/stdc++.h>
//using namespace std;
//int main()
//{
//    int matriz[3][3];
//    for(int i=0; i<3; i++)
//    {
//        for(int j=0; j<3; j++)
//        {
//            cin>>matriz[i][j];
//        }
//    }
//
//    for(int i=0; i<3; i++)
//    {
//        for(int j=0; j<3; j++)
//        {
//            cout<<matriz[j][i]<<" ";
//        }
//        cout<<endl;
//    }
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
            cout<<matriz[i][j]+matriz2[i][j];
        }
    }
    return 0;
}