#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int i,primefactor,num;
	for (;;)
	{
		printf ("Please enter a positive integer:");
		scanf ("%d",&num);
	
		if (num<=1)
		printf ("%d has not any prime factor, please enter again.\n",num);
		else
		{
			printf ("The prime factor of %d is: ",num);
			for (primefactor=2; primefactor<=num;)
			{
				if (num==primefactor)
				{
					printf("%d",primefactor);
					break;
				} 
				else
				{
					for (primefactor=2; primefactor<=num; )
					{
						if (num%primefactor==0)
						{
							printf("%d ",primefactor);
							num=num/primefactor;
							break;
						}
						else
						primefactor=primefactor+1;
					}
					
				}
				
			}
			printf("\n");
			break;
		}
	}
	
	system ("pause");
	return 0;
}
