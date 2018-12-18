#include<stdio.h>
#include<string.h>
int inverse(int k)
{
	int i;
	for(i=0;i<26;i++)
	{
		if((k*i)%26 == 1)
		{
			printf("inverse :%d ",i);
			return i;
		}
	}
	return -1;
}
main()
{
	int i,n=26,l,k;
	
	printf("Enter The Length Of Cipher ");
	scanf("%d",&l);

	char text[l],cipher[l];
	
	printf("Enter The Cipher : ");
	scanf("%s",&cipher);
	
	strcpy(text,cipher);
	
	printf("Enter The Key K : ");
	scanf("%d",&k);
	int inK=inverse(k);
	for(i=0;i<l;i++)
	{
		text[i]=text[i]-'a';
		//printf("%d ",text[i]);
		text[i]=(text[i]*inK)%26;
		//printf("%d ",text[i]);
		while(text[i] < 0)
			text[i]+=26;
		//printf("%d ",text[i]);
		text[i]+='a';
		
	}
	printf("\nTEXT : %s CIPHER : %s",text,cipher);
}
