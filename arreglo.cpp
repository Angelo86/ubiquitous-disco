# include <iostream>
using namespace std;

int main()
{
	int arreglo [4] [4] = {{5,7,2,8 } , {3,1,0,6 } , {10,20,15,9 } , {4,31,24,32 } };
	
	int i;
	int j;
	
	for ( i=0; i<4; i++)
	{
		for (j=0; j<4; j ++)
	{
	    cout<< arreglo [i] [j]; cout<<"\t";
	    	    
}

cout<<"\n";

}

return 0;
}
