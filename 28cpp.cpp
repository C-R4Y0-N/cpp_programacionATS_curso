/*13.Hacer un que realize la serie fibonacci -> 1 1 2 3 5 8 13 ... n*/
//#include <iostream>
//#include <bits/stdc++.h>
//using namespace std;
//int main()
//{
//    int n,aux=0,y=0,x=1;
//    cin>>n;
//    for(int i=1; i<=n; i++)
//    {
//    	aux= y + x;
//        cout<<aux<<" ";
//        x = y;
//        y = aux;
//    }
//    return 0;
//}
/*14.En una clase de 5 alumnos se han realizado tres exámenes y se requiere determinar el número de:
    a)Alumnos que aprobaron todos los examenes
    b)Alumnos que aprobaron al menos un examen 
    c)Alumnos que aprobaron unicamente el ultimo examen
Realice un programa que permita la lectura de los datos y el cálculo de las estadísticas */
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
   int aux,c1=0,c2=0,c3=0;
   for(int i=0; i<5; i++)
   {
        cout<<"Seleccione la opcion correspondiente al alumno: "<<endl;
        cout<<"1.El alumno aprobo todos los examenes"<<endl;
        cout<<"2.El alumno aprobo al menos un examen"<<endl;
        cout<<"3.El alumno unicamente aprobo el ultimo examen"<<endl;
        cin>>aux;
        switch (aux)
        {
        case 1:
            c1++;
            break;
        case 2:
            c2++;
            break;
        case 3:
            c3++;
            break;
        }
   }
   cout<<c1<<endl;
   cout<<c2<<endl;
   cout<<c3<<endl;
   return 0;
}