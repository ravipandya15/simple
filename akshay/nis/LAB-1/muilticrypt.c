#include<stdio.h>
#include<string.h>
int l,k;
int inverse(int k)
{
	int i;
	for(i=0;i<26;i++)
	{
		if((k*i)%26 == 1)
		{
			//printf("inverse :%d ",i);
			return i;
		}
	}
	return -1;
}
main()
{
	int i,j;
	
	printf("Enter The Length Of Cipher ");
	scanf("%d",&l);

	char text[l],cipher[l];
	
	printf("Enter The Cipher : ");
	scanf("%s",&cipher);
	//int possibleKeys[]={1,3,5,7,9,11,15,17,19,21,23,25};
	for(i=0;i<26;i++)
	{
		strcpy(text,cipher);
		//int inK=inverse(possibleKeys[i]);
		int inK= inverse(i);
		if(inK!=-1) 		
		{	
			for(j=0;j<l;j++)
			{
				text[j]=text[j]-'a';
				//printf("%d ",text[i]);
				text[j]=(text[j]*inK)%26;
				//printf("%d ",text[i]);
				while(text[j] < 0)
					text[j]+=26;
				//printf("%d ",text[i]);
				text[j]+='a';
		
			}
			//printf("Key %d  : %s\n",possibleKeys[i],text);
			printf("Key %d  : %s\n",i,text);
		}
		
	}
}
