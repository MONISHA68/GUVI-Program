#include <stdio.h>
int main()
{
	char i,j,k;
	for(i='A';i<='C';i++)
	{
	    for(j='A';j<='C';j++)
	    {
	        for(k='A';k<='C';k++)
	        {
	            printf("%c%c%c ",i,j,k);
	        }
	    }
	}
	return 0;
}
