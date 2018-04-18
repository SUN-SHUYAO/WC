#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<io.h>
void zifu(FILE *fi1);
void danci(FILE *fi1);
void juzi(FILE *fi1);
void main()
{
	char command[100];
	char s1[100]="wc.exe -c file.txt";
	char s2[100]="wc.exe -w file.txt";
	char s3[100]="wc.exe -l file.txt";
	FILE *fi1;
    fi1=fopen("D:\\C++\\WENZI\\233.txt","r");
	printf("请输入指令:\n");
	gets(command);
	if(strcmp(command,s1)==0)
	{
		zifu(fi1);
	}
	if(strcmp(command,s2)==0)
	{
		danci(fi1);
	}
	if(strcmp(command,s3)==0)
	{
		juzi(fi1);
	}
	fclose(fi1);
}

void zifu(FILE *fi1)
{
	int bits;
	bits=0;
	char c;
	while((c=fgetc(fi1)) != EOF)
	{
		fputc(c,stdout);
		bits++;
	}
	printf("\n字符数：");
	printf("%d\n",bits);
}

void juzi(FILE *fi1)
{
	int sent;
	sent=0;
	char c;
	while((c=fgetc(fi1)) != EOF)
	{
		fputc(c,stdout);
		if(c=='.')
		{
			sent++;
		}
	}
	printf("\n句子数：");
	printf("%d\n",sent);
}

void danci(FILE *fi1)
{
	int words,flag;
	words=1;
	char c;
	while((c=fgetc(fi1)) != EOF)
	{
		fputc(c,stdout);
		if(c=='\n'||c==' '||c=='.')
		{
			flag=0;
		}
		if((flag==0) && (c!='\n') && (c!='.'))
		{
				flag=1;
				words++;
		}
	}
	printf("\n单词数：");
	printf("%d\n",words);
}
