/*3. Realice un programa que calcule y muestre en la salida estandar la suma de los cuadrados de los primeros 10 numeros mayores a cero*/
//#include <iostream>
//#include <bits/stdc++.h>
//#include <conio.h>
//using namespace std;
//int main()
//{
//    int cuadrado=0, suma=0;
//    for(int i=1; i<=10; i++)
//    {
//        cuadrado=pow(i,2);
//        suma+=cuadrado;
//    }
//    cout<<"La suma de los cuadrados de los primeros 10 numeros mayores que cero "<<suma<<endl;
//    getch();
//    return 0;
//}
/*4. Escriba un programa que tome cada 4 horas la temperatura exterior, leyendola durante un periodo de 24 horas. Es decir, debe leer 6 temperaturas. Calcule la 
temperatura media del día, la temperatura más alta y la más baja */
//#include <iostream>
//#include <bits/stdc++.h>
//#include <locale.h>
//#include <conio.h>
//using namespace std;
//int main()
//{
//    setlocale(LC_CTYPE, "Spanish");
//    int i=0,h=0;
//    float t,tma,tmb,sum=0;
//    while(i<=6)
//    {
//        cout<<"Ingrese la temperatura (en grados Celcius) de las "<<h<<":00"<<endl;
//        cin>>t;
//        if(i==0)
//        {
//            tma=t;
//            tmb=t;
//        }
//        if(t>tma)
//        {
//            tma=t;
//        }
//        if(t<tmb)
//        {
//            tmb=t;
//        }
//        sum+=t;
//        i++;
//        h+=4;
//        
//    }
//    sum/=i;
//    cout<<"El promedio de temperatura en el día fue de: "<<sum<<"C"<<endl;
//    cout<<"La temperatura mas alta fue: "<<tma<<endl;
//    cout<<"La temperatura mas baja fue: "<<tmb<<endl;
//    getch();
//    return 0;
//}