/*
//EJERCICIO 1 


//forma.h

#ifndef FORMA_H
#define FORMA_H

#include <iostream>
#include <stdlib.h>
using namespace std;
class Forma {
protected:
public:
Forma();
~Forma();
void funcion(string x);
void funcion(int x, int y);
void funcion(char x);


};
#endif

//forma.cpp

#include "Forma.h"

Forma::Forma(){
}
Forma::~Forma(){
}
void Forma::funcion(string x){
cout << "El color ingresado es : " <<  x << endl;
}
void Forma::funcion(char x){
cout << "Forma ingresada : " << x << endl;
}

void Forma::funcion(int x, int y){
cout << "Coordenada del centro x : " << x << ", y : " << y <<endl;
}


//DerivadaRectangulo.h

#ifndef DERIVADARECTANGULO_H
#define DERIVADARECTANGULO_H
#include "Forma.h"

class DerivadaRectangulo:public Forma{
protected:
int a,b;

public:
DerivadaRectangulo(int,int);
void mostrar();
void area();
void perimetro();
void escala(int);
};

#endif

//DerivadaRectangulo.cpp

#include "DerivadaRectangulo.h"

DerivadaRectangulo::DerivadaRectangulo(int t,int y){
a=t;
b=y;
}


void DerivadaRectangulo::mostrar(){
if(a>b){
cout<<"lado mayor es : "<<a<<endl;
cout<<"lado menor es : "<<b<<endl;
}
else{

cout<<"lado mayor es : "<<b<<endl;
cout<<"lado menor es : "<<a<<endl;
}
}

void DerivadaRectangulo::area(){
cout<<"area del rectangulo es : "<<a*b<<endl;
}
void DerivadaRectangulo::perimetro(){
cout<<"perimetro del rectangulo es : "<<2*(a+b)<<endl;
}
void DerivadaRectangulo::escala(int _escala){
int t;
t=_escala;
cout<<"nuevo lado mayor es : "<<a*t<<endl;
cout<<"nuevo lado menor es : "<<b*t<<endl;
}

//main.cpp

#include<iostream>
using namespace std;
#include "DerivadaRectangulo.h"
int main (int argc, char *argv[]) {
int c,b;
string d;
Forma a;
a.funcion("azul");
a.funcion(2,5);
a.funcion("B");
cout<<"Cambiar nuevo punto centro "<<endl;
cin>>c;
cin>>b;
a.funcion(c,b);
cout<<"Cambiar de color "<<endl;
cin>>d;
a.funcion(d);

int k,l;
cout<<"lado mayor rectangulo "<<endl;
cin>>k;
cout<<"lado menor rectangulo "<<endl;
cin>>l;
DerivadaRectangulo h=DerivadaRectangulo(k,l);

h.mostrar();
h.area();
h.perimetro();
h.escala(2);

return 0;
}


*/

/*
//EJERCICIO2

//Elipse.h

#ifndef ELIPSE_H
#define ELIPSE_H
#include <iostream>
#include <stdlib.h>
using namespace std;
class Elipse {
public:
Elipse();
~Elipse();
void funcion(int x, int y);

private:
};


#endif


//Elipse.cpp

#include "Elipse.h"
#include <math.h>
#include <iostream>
#define pi 3.14151
Elipse::Elipse(){
}
Elipse::~Elipse(){
}
void Elipse::funcion(int x ,int y){
if(x>y){
cout<<"lado mayor es : "<<x<<endl;
cout<<"lado menor es : "<<y<<endl;
}
else{

cout<<"lado mayor es : "<<y<<endl;
cout<<"lado menor es : "<<x<<endl;
}

cout<<"area del elipse ingresado es : "<<pi*(x*y);
}

//main.cpp

#include<iostream>
using namespace std;
#include "Elipse.h"
int main (int argc, char *argv[]) {
int x,y;
Elipse a;
cout<<"ingre Radio Mayor"<<endl;
cin>>x;
cout<<"ingrese Radio Menor"<<endl;
cin>>y;

a.funcion(x,y);

return 0;
}



*/


/*
//EJERCICO3
// Rectangulo.h

#ifndef RECTANGULO_H
#define RECTANGULO_H

class Rectangulo {
protected:
int x,y;

public:
Rectangulo(int,int);
void mostrar();
private:
};

#endif


//Rectangulo.cppp

#include "Rectangulo.h"
#include<iostream>
using namespace std;

Rectangulo::Rectangulo(int _valorx , int _valory) {
x=_valorx;
y=_valory;
}
void Rectangulo::mostrar(){
cout<<"valor de lados "<<x<<" - "<<y<<endl;
if(x!=y)
cout<<"area del Rectangulo es : "<<x*y;
else
cout<<"area del cuadrado es : "<<x*y;

}

//main.cpp

#include<iostream>
using namespace std;
#include "Rectangulo.h"
int main (int argc, char *argv[]) {
Rectangulo a=Rectangulo(5,6);
a.mostrar();

return 0;
}



*/

/*

//EJERCICO 4 


//Circulo.h

#ifndef CIRCULO_H
#define CIRCULO_H
#include<iostream>
using namespace std;
class Circulo {
int x,y;//
public:
Circulo(int,int);
void area();
private:
};

#endif

//Circulo.cpp

#include "Circulo.h"
#define pi 3.14151
#include<iostream>
using namespace std;
Circulo::Circulo(int a,int b) {
x=a;
y=b;


}
void Circulo::area(){
if(x=y){
cout<<"area del Circulo : "<<pi*(x*y)<<endl;
}
else
{
cout<<"area del elipse : "<<pi*(x*y)<<endl;
}
}

//main.cpp

#include<iostream>
using namespace std;
#include "Circulo.h"
int main (int argc, char *argv[]) {
int g,h;
cout<<"ingrese radio mayor : ";
cin>>g;
cout<<"ingre radio menor : ";
cin>>h;

Circulo a =Circulo(g,h);
a.area();


return 0;
}



*/

/*

//EJERCICIO 5 


#include <iostream>
using namespace std;
class Forma{
protected:
string nombre;
string color;
int posicion;
public:
Forma(string,string,int);
void mostrar();
string getNombre(){return nombre;}
string getColor(){return color;}
int getPosicion(){return posicion;}
};
Forma::Forma(string n,string m,int a){
posicion=a;
nombre=n;
color=m;

}


int main(int argc, char *argv[]) {

Forma *Lista[20];
int cont1=0;

for(int i=0;i<3;i++){
string nombre,color;
int posicion,aux;
cout<<"ingrese forma : ";cin>>nombre;
cout<<"ingrese color : ";cin>>color;
cout<<"ingrese posicion del 1 al 3 : ";cin>>posicion;
cout<<endl;
aux=posicion;
Lista[aux-1]=new Forma(nombre,color,posicion);
cont1++;
}
for(int i=0;i<3;i++){
cout<<"RESULTADO "<<endl;
cout<<"posicion "<<i+1<<endl;
cout<<"Forma : "<<Lista[i]->getNombre()<<endl;
cout<<"color : "<<Lista[i]->getColor()<<endl;

}

return 0;
}

*/


/*

//EJERCICIO 6

#include <iostream>
using namespace std;
class Forma{
protected:
string nombre;
string color;
int posicion;
public:
Forma(string,string,int);
void mostrar();
string getNombre(){return nombre;}
string getColor(){return color;}
int getPosicion(){return posicion;}
};
Forma::Forma(string n,string m,int a){
posicion=a;
nombre=n;
color=m;

}




int main(int argc, char *argv[]) {

Forma *Lista[20];
int cont1=0;
//int area[3];

for(int i=0;i<3;i++){
string nombre,color;
int posicion,aux;
cout<<"ingrese forma : ";cin>>nombre;
cout<<"ingrese color : ";cin>>color;
cout<<"ingrese posicion del 1 al 3 : ";cin>>posicion;
cout<<endl;
aux=posicion;
Lista[aux-1]=new Forma(nombre,color,posicion);
cont1++;
}
for(int i=0;i<3;i++){
cout<<"RESULTADO "<<endl;
cout<<"posicion "<<i+1<<endl;
cout<<"Forma : "<<Lista[i]->getNombre()<<endl;
cout<<"color : "<<Lista[i]->getColor()<<endl;

if(Lista[i]->getNombre()=="triangulo"){
cout<<"area del triangulo es : base*altura"<<endl;
}
else if(Lista[i]->getNombre()=="cuadrado"){
cout<<"area del cruadro es : lado*2"<<endl;
}
else if(Lista[i]->getNombre()=="circulo")
{
cout<<"area del circulo es : pi*radio*2"<<endl;
}

}

return 0;
}

*/

/*
//EJERCICO 7
*/

/*
//EJERCICIO 8 

#include <iostream>
using namespace std;
class Forma{
protected:
string nombre;
public:
Forma(string);

};
Forma::Forma(string _nombre){
nombre=_nombre;

}

class Triangulo:public Forma{
protected:
int base;
int altura;
public:
Triangulo(string,int,int);
int areaTriangulo();
};
Triangulo::Triangulo(string _nombre,int _base,int _altura):Forma(_nombre){
base=_base;
altura=_altura;
}
int Triangulo::areaTriangulo(){
return (base*altura)/2;

}

class Cuadrado:public Forma{
protected:
int lado;
public:
Cuadrado(string,int);
int areaCuadrado();
};
Cuadrado::Cuadrado(string _nombre,int _lado):Forma(_nombre){
lado=_lado;
}
int Cuadrado::areaCuadrado(){
return lado*lado;
}


int main(int argc, char *argv[]) {

Triangulo a=Triangulo("Triangulo",5,6);
Cuadrado b=Cuadrado("Cuadrado",6);

cout<<"area del Triangulo es : "<<a.areaTriangulo()<<endl;
cout<<"area del Cuadrado es : "<<b.areaCuadrado()<<endl;

if(a.areaTriangulo()> b.areaCuadrado())
cout<<"area mayor es Triangulo"<<endl;
else
cout<<"area mayor es Cuadrado"<<endl;


return 0;
}



*/
