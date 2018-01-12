#include <iostream>
#include <string.h>
using namespace std;

void llenar(int vec[], int t, int mat[][2]);
void buscar(int vec[], int t, int mat[][2]);
void imprimir(int vec[], int t, int mat[][2]);

int main ()
{
	int tam;
	int vec[10], mat[10][2];
	cout<<"Ingrese tamano del vector: ";
	cin>>tam;
	llenar(vec, tam, mat);
	buscar(vec, tam, mat);
	imprimir(vec,tam, mat);

}

void llenar(int vec[], int t, int mat[][2])
{
    for(int c=0; c<2; c++)
    {
        for(int r=0; r<10; r++)
        {
            mat[r][c]='Q';
        }
    }
	for (int i=0; i<t; i++)
	{
		cout<<"Posicion "<<i<<" :";
		cin>>vec[i];
	}
	for (int r=0; r<10; r++)
	{
		cout<<"Numeros a buscar: ";
		cin>>mat[r][0];
	}
}

void buscar(int vec[], int t, int mat[10][2])
{
	for (int i=0; i<t; i++)
	{
		for (int r=0; r<10; r++)
		{
			if (vec[i]==mat[r][0])
			{
				mat[r][1]=i;
			}

		}
	}
	for (int r=0; r<10; r++)
	{
		if (mat[r][1]=='Q')
		{
			mat[r][1]=-1;
		}
	}
}

void imprimir(int vec[], int t, int mat[][2])
{
	for(int i=0; i<10; i++)
	{
		cout<<"VECTOR: "<<vec[i]<<endl;
	}
	for(int r=0; r<10; r++)
	{
		cout<<"MATRIZ: ";

		for(int c=0; c<2; c++)
		{
		cout<<mat[r][c]<<" ";
		}

	cout<<endl;
	}
}
