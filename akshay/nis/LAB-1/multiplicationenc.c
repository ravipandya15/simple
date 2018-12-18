//multiplicationenc.c
#include<stdio.h>
#include<string.h>
main()
{
	int i,n=26,l,k;
	
	printf("Enter The Length Of Plain Text : ");
	scanf("%d",&l);

	char text[l],cipher[l];
	
	printf("Enter The Plain Text : ");
	scanf("%s",&text);
	
	strcpy(cipher,text);
	//printf("%s",cipher);
	
	printf("Enter The Key K : ");
	scanf("%d",&k);

	for(i=0;i<l;i++)
	{
		cipher[i]=cipher[i]-'a';
		//printf("%d ",text[i]);
		cipher[i]=(cipher[i]*k)%26;
		//printf("%d ",cipher[i]);
		cipher[i]+='a';
		
	}
	printf("TEXT : %s CIPHER : %s",text,cipher); // vmhhq
}
