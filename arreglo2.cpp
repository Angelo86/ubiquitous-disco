# include <iostream>
# include <iomanip>
using namespace std;

int main()
{
	int const filas = 4;
	int const columna = 4;
	int f,c;
	
	int variables [filas] [columna];
	
	for (f=0; f< filas; f++)
	{
		for (c=0 ; c < columna ; c++)
		{
			cout << "ingrese el elemento (" << f << "i" << c <<"): ";
			cin >> variables [f] [c] ;
		}
	}
	
	for (f=0 ; f < filas ; f++){
		cout << endl;
		for ( c=0 ; c < columna ; c++){
			cout << setw (4) << variables [f] [c] ;
			
		}
	}
	cout << endl;
	system ("pause");
	return 0;
	
}
