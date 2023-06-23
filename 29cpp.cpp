/*15.Realice un programa que solicite al usuario que piense un número entero entre el 1 y el 100. El programa debe generar un numero aleatorio en ese mismo rango
[1-100], e indicarle al usuario si el numero que digito es menor o mayor al numero aleatorio, asi hasta que lo adivine, y por ultimo mostrarle el numero de 
intentos que le llevo.

variable=limite_inferior + rand() % (limite_superior +1 - limite_inferior);
*/
//#include <iostream>
//#include <bits/stdc++.h>
//using namespace std;
//int main()
//{
//    int n,d,c=0;
//    srand(time(NULL));
//    d=1 + rand()%(100);
//    do {
//         cout<<"Digite un numero: "<<endl;
//         cin>>n;
//         if(n>d)
//         {
//            cout<<"Digite un numero menor"<<endl;
//         }
//         if(n<d)
//         {
//            cout<<"Digite un numero mayor"<<endl;
//         }
//         c++;
//    }while(n!=d);
//    cout<<"Numero de intentos que le llevo"<<c<<endl;
//    return 0;
//}
/*16*/
//#include<iostream>
//#include<conio.h>
//
//using namespace std;
//
//int main (){
// int numero,primo=1;
// cout<<"\tBienvenido al Descomponedor Factorial"<<endl<<endl;
// 
// do{
//  
//  cout<<"Digite un numero o introduzca (0) para cerrar: ";
//  cin>>numero;
//  
//  
//  if(numero==0){
//  cout<<"\nADIOS!\n"; 
//  }
//  else{
//   cout<<"\nFactores Primos: ";
//   
//   if(numero==1){
//   cout<<"1"; 
//   }
// 
//   for(int i=1;i!=numero;){
//      
//    if (numero%2==0){
//     numero=numero/2;
//     cout<<"2";
//    }
//    else if(numero%3==0){
//     numero=numero/3;
//     cout<<"3";
//    }
//    else if(numero%5==0){
//     numero=numero/5;
//     cout<<"5";
//    }
//    else if(numero%7==0){
//     numero=numero/7;
//     cout<<"7";
//    }
//    else if(numero%11==0){
//     numero=numero/11;
//     cout<<"11";
//    }
//    else if(numero%13==0){
//     numero=numero/13;
//     cout<<"13";
//    }
//    else if(numero%17==0){
//     numero=numero/17;
//     cout<<"17";
//    }
//    else if(numero%23==0){
//     numero=numero/23;
//     cout<<"23";
//    } 
//    else if(numero%numero==0){
//     cout<<numero;
//     numero= numero/numero;
//    }
//    if(i!=numero){
//    cout<<" * ";
//    } 
//   } 
//  }
//  cout<<"\n\n";
//  
// }
// while (numero!=0);
// 
// getch ();
// return 0;
//}