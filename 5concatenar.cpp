#include <iostream>
#include <string>
using namespace std;
void concatenarCadena(char cadena[], char cadenaCopiada[], int tamano);
int contadorDeCaracter(char cadena[]);

int main()
{
int tamano=0;
    char cadena[50];
    char cadena2[50];
    cout<<"introduce tu nombre completo:\n "<<endl;
    cin.getline(cadena, 50, '\n');
    tamano = contadorDeCaracter(cadena);
    cout<<"\nintroduce cadena 2:\n "<<endl;
    cin.getline(cadena2, 50 ,'\n');
    concatenarCadena(cadena,cadena2,tamano);
    cout<<"\ncadena concatenada: \n\n"<<cadena<<endl;
    
    return 0;
}

int contadorDeCaracter(char cadena[])
{
    int contador=0;
    while(cadena[contador]!='\0')
    {
        contador++;
    }
    return contador;
}
void concatenarCadena(char cadena[], char cadena2[], int tamano)
{
    for(int i=0; cadena2[i]!=0; i++)
	{
        if(cadena[tamano]=='\0')
            cadena[tamano]=32;
        cadena[++tamano]=cadena2[i];
        }
        cadena[tamano+1]='\0';
}
