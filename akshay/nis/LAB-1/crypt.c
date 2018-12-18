#include<stdio.h>
#include<string.h>
int l,k;
main()
{
	int i,j;
	
	printf("Enter The Length Of Cipher ");
	scanf("%d",&l);

	char text[l],cipher[l];
	
	printf("Enter The Cipher : ");
	scanf("%s",&cipher);
	
	for(i=0;i<26;i++)
	{
		strcpy(text,cipher);
		
		for(j=0;j<l;j++)
		{
			text[j]=text[j]-'a';
			//printf("%d ",text[i]);
			text[j]=(text[j]-i)%26;
			//printf("%d ",text[i]);
			while(text[j] < 0)
				text[j]+=26;
			//printf("%d ",text[i]);
			text[j]+='a';
		
		}
		//printf("%s\n",text);
		printf("Key %d  : %s\n",i,text);
	}
}
