/*11.Hacer un programa que simule un cajero automático con un saldo inicial de 1000 dolares*/
//#include <iostream>
//#include <bits/stdc++.h>
//using namespace std;
//int main()
//{
//    int n = 0, d=1000,ds=0,v=0;
//    while (n!=4)
//    {
//        switch (n)
//        {
//        case 1:
//            while(v==0)
//            {
//                cout<<"Inserte la cantidad de dinero que desee sacar"<<endl;
//                cin>>ds;
//                if(ds<=d)
//                {
//                    d-=ds;
//                    v=1; 
//                    cout<<"hola"<<endl;
//                }
//                else
//                {
//                    cout<<"Esta desando sacar una cantidad mayor a la que posee, favor de insertar una cantidad menor o igual a su saldo actual"<<endl;
//                }
//            }   
//            break;
//        case 2:
//            break;
//        case 3:
//            cout<<d;
//            break;
//        default:
//            cout<<"Eliga el numero correspondiente a una de las siguientes opciones"<<endl;
//            cout<<"1-Sacar dinero"<<endl;
//            cout<<"2-Meter dinero"<<endl;
//            cout<<"3-Revisar dinero"<<endl;
//            cout<<"4-Salir"<<endl;
//            cin>>n;
//            break;
//        }
//    }
//    return 0;
//}
/*Forma correcta de hacer el 10*/
//#include <iostream>
//#include <bits/stdc++.h>
//using namespace std;
//int main()
//{
//    int saldoinicial = 1000, opc;
//    float extra,saldo = 0, retiro;    
//    cout<<"Bienvenido a su cajero virtual"<<endl;
//    cout<<"1. Ingresar dinero en cuenta"<<endl;
//    cout<<"2. Retirar dinero en cuenta"<<endl;
//    cout<<"3. Salir"<<endl;
//    cout<<"Opcion"<<endl;
//    cin>>opc;
//    switch (opc)
//    {
//        case 1:
//            cout<<"Digite la cantidad de dinero a ingresar:"<<endl;
//            cin>>extra;
//            saldo = saldoinicial + extra;
//            cout<<"Dinero en cuenta: "<<saldo<<endl;
//            break;
//        case 2: 
//            cout<<"Digite la cantidad de dinero que va a retirar"<<endl;
//            cin>>retiro;
//            if (retiro > saldoinicial)
//            {
//                cout<<"No tiene esa cantidad de dinero"<<endl;
//            }
//            else 
//            {
//                saldo = saldoinicial - retiro;
//                cout<<"Dinero en cuenta"<<saldo<<endl;
//            }
//            break;
//        case 3: 
//            break;
//    } 
//    return 0;
///}
/*12. Hacer un menu que considere las siguientes opciones:
1. Cubo de un numero 
2. Numero par o impar
3. Salir
*/
//#include <iostream>
//#include <bits/stdc++.h>
//using namespace std;
//int main()
//{
//    int n, opc;
//    cout<<"Teclee el numero a analizar"<<endl;
//    cin>>n;
//    cout<<"Eliga una opcion"<<endl;
//    cout<<"1-Cubo de un numero"<<endl;
//    cout<<"2-Numero par o impar"<<endl;
//    cout<<"3-Salir"<<endl;
//    cin>>opc;
//    switch (opc)
//    {
//    case 1:
//        n = pow (n,3);
//        cout<<"El numero que tecleo con anteriodidad elevado al cubo es: "<<n<<endl;
//        break;
//    case 2:
//        if (n%2==0)
//        {
//            cout<<"El numero "<<n<<" es un numero par"<<endl;
//        }
//        else 
//        {
//            cout<<"El numero "<<n<<" es un numero impar"<<endl;
//        }
//        break;
//    case 3:
//        break;
//    }
//    return 0;
//}