#include <iostream>
using namespace std;

void llenarVec (int vec[], int tam);
int esSimetrico (int vec[], int tam);

int main ()
{
	int vec[10];
	int tam,resp;
	cout<<"Ingrese el tnamano del vector: ";
	cin>>tam;
	llenarVec(vec,tam);
	resp=esSimetrico(vec,tam);
	cout<<"\nContenido del vector:";
	for(int i=0; i<tam; i++)
	{
	cout<<vec[i]<<endl;
	}
	if(resp==1)
	{
		cout<<"\nEs simetrico";
	}
	else
	{
		cout<<"\nNo es simetrico";
	}
}

void llenarVec (int vec[], int tam)
{
	for (int i=0; i<tam; i++)
	{
		cout<<"introduce numero en posicion "<<i+1<<" :";
		cin>>vec[i];
	}
}
int esSimetrico (int vec[], int tam)
{
	int a=0;
	for (int i=0, j=tam-1; i<=(tam/2)+1, j>=(tam/2)+1; i++, j--)
	{
		if (vec[i]==vec[j])
		{
			a++;
		}
		else
            return 0;
	}
		if (a==(tam/2))
		{
			return 1;
		}
		else if (a==(tam/2)-1)
		{
			return 1;
		}
}
