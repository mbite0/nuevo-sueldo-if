# nuevo-sueldo-if
#include <iostream>
using namespace std;
int main()
{
float sueldo;
cout<<"Ingresa tu sueldo actual ";
cin>>sueldo;
/*
Sin necesidad de usar otras variables, calcula el nuevo sueldo de acuerdo a la siguiente tabla
rango aumento
0 - 1000 18% 
1001 - 1100 15%
1101 - 1200 12%
1201 - 1300 10%
mas de 1300 8%
*/
if (sueldo<=1000)
{
  sueldo+=(sueldo*.18);
  cout<<"\nTu nuevo sueldo es : "<<sueldo;
}
  else
  {   
	if(sueldo<1101)
	{
        sueldo+=(sueldo*.15);
        cout<<"\nTu nuevo sueldo es : "<<sueldo;
	}
    else
	{
       if(sueldo<1201)
	   	{
            sueldo+=(sueldo*.12);
            cout<<"\nTu nuevo sueldo es : "<<sueldo;
		}
        else
		{
            if(sueldo<1301)
			{
                sueldo+=(sueldo*.10);
                cout<<"\nTu nuevo sueldo es : "<<sueldo;
			}
            else
			{
                sueldo+=(sueldo*.8);
                cout<<"\nTu nuevo sueldo es : "<<sueldo;
			}
        }    
    }
	}
return 0;
}
