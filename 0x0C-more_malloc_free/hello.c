#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
  * _realloc - Reallocates a memory block
  * @ptr: Pointer to the memory previously allocated
  * @old_size: Original size, in bytes, of the allocated space for pointer
  * @new_size: New size, in bytes of the new memory block
  * Return: Newly allocated memory block, NULL 
  * if new size of memory block is zero,
  * Pointer to old memory if pointer is NULL, NULL if newly
  * allocated size of memory is equal old size of memory block.
  */
int mult(int sumargc1, int sumargc2, char *argv1, char *argv2)
{
	int *fs, sec, ans,
	int l1, l2, i, j, tmp;
	l1 = strlen(argv1);
	l2 = strlen(argv2);
	
	fs = malloc(sumargc1 * sizeof(int));
	sec = malloc(sumargc2 * sizeof(int));
	ans = malloc((sumargc1 + sumargc2) * sizeof(int));
	ans[0] = 0;
	for (i = sumargc1 - 1, j = 0; i >= 0; i--, j++)
		fs[j] = argv1[i] - '0';
	for (i = sumargc2 - 1, j = 0; i >= 0; i--, j++)
		sec[j] = argv2[i] - '0';
	for(i = 0; i < l2;i++)
	{
        	for(j = 0; j < l1; j++)
            		ans[i+j] += sec[i] * fs[j];
    	}
	for(i = 0;i < l1 + l2; i++)
	{
        	tmp = ans[i] / 10;
	        ans[i] = ans[i] % 10;
        	ans[i + 1] = ans[i + 1] + tmp;
    	}
	for(i = l1 + l2; i >= 0;i--)
	{
        	if(ans[i] > 0)
            		break;
    	}
	for(;i >= 0; i--)
        	printf("%d",ans[i]);
	putchar('\n');
}

/*
    int a[100],b[100];
    int ans[200]={0};
    int i,j,tmp;
    char s1[101],s2[101];
    scanf(" %s",s1);
    scanf(" %s",s2);
    int l1 = strlen(s1);
    int l2 = strlen(s2);
    for(i = l1-1,j=0;i>=0;i--,j++)
    {
        a[j] = s1[i]-'0';
    }
    for(i = l2-1,j=0;i>=0;i--,j++)
    {
        b[j] = s2[i]-'0';
    }
    for(i = 0;i < l2;i++)
    {
        for(j = 0;j < l1;j++)
        {
            ans[i+j] += b[i]*a[j];
        }
    }
    for(i = 0;i < l1+l2;i++)
    {
        tmp = ans[i]/10;
        ans[i] = ans[i]%10;
        ans[i+1] = ans[i+1] + tmp;
    }
    for(i = l1+l2; i>= 0;i--)
    {
        if(ans[i] > 0)
            break;
    }
    printf("Product : ");
    for(;i >= 0;i--)
    {
        printf("%d",ans[i]);
    }
*/


int main(int argc, char **argv)
{	
	int i, j, x, y, sumfsarg = 0, sumsecarg = 0;
	if (argc != 3)
	{
		puts("Error");
		exit(98);
	}
	for (i = 1; i < argc - 1 ; i++)
	{
		for (j = 0; j < strlen(argv[i]); j++)
		{
			if (!((argv[i][j]) >= 49 && (argv[i][j]) <= 57))
			{
				puts("Error");
				exit(98);
			}
			sumfsarg++;
		}
	}
	
	for (x = 2; x < argc; x++)
	{
		for (y = 0; y < strlen(argv[x]); y++)
		{
			if (!((argv[x][y]) >= 48 && (argv[x][y]) <= 57))
			{
				puts("Error");
				exit(98);
			}
			sumsecarg++;
		}
	}
	mult(sumfsarg, sumsecarg, argv[1], argv[2]);
//	mult(argv[1], argv[2]);
//	printf("%d\n", r);
	return (0);
}
