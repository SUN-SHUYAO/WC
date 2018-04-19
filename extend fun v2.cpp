#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<io.h>
void zifu(FILE *fi1);
void danci(FILE *fi1);
void juzi(FILE *fi1);
void hang(FILE *fi1);
void zhu(FILE *fi1);
void kong(FILE *fi1);
void main()
{
	char command[100];
	char s1[100]="wc.exe -c file.txt";
	char s2[100]="wc.exe -w file.txt";
	char s3[100]="wc.exe -l file.txt"; /*注释行不算一句话*/
	char s4[100]="wc.exe -h file.txt";
	char s5[100]="wc.exe -z file.txt";
	char s6[100]="wc.exe -k file.txt";
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
	if(strcmp(command,s4)==0)
	{
		hang(fi1);
	}	
	if(strcmp(command,s5)==0)
	{
		zhu(fi1);
	}
	if(strcmp(command,s6)==0)
	{
		kong(fi1);
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
	int words,flag,sum;
	sum=0;
	words=0;
	flag=0;
	char c;
	while((c=fgetc(fi1)) != EOF)
	{
		fputc(c,stdout);
		if(c=='\n')
		{
			sum++;
		}
		if(c!='\n'||c!=' '||c!='.'||c!='/'||c!='*')
		{
			flag++;
		}
		if((flag!=0) && ( (c=='\n') || (c=='.')||(c==' ')) )
		{
				flag=0;
				words++;
		}
	}
	printf("\n单词数：");
	printf("%d\n",words-sum);
}

void hang(FILE *fi1)
{
	int h=1;
	char c;
	while((c=fgetc(fi1)) != EOF)
	{
		fputc(c,stdout);
		if(c=='\n')
		{
			h++;
		}
	}
	printf("\n行数：");
	printf("%d\n",h);
}

void zhu(FILE *fi1)
{
	int flag=0;
	int exp=0;
	char c;
	while((c=fgetc(fi1)) != EOF)
	{
		fputc(c,stdout);
		if(c!='\n')
		{
			if(c=='/'||c=='*')
			{
				flag++;
			}
		}
		else
		{
			if(flag==4)      /*这是为本文档类型注释的情况*/
			{
				exp++;
				flag=0;
			}
		}
	}
	printf("\n注释行数：");
	printf("%d\n",exp);
}

void kong(FILE *fi1)
{
	int flag=1;   /*解决第一行为空的问题*/
	int null=0;
	char c;
	while((c=fgetc(fi1)) != EOF)
	{
		fputc(c,stdout);
		if(c=='\n')
		{
			flag++;
			if(flag>=2)
			{
				null++;
			}
		}
		else
		{
			flag=0;
		}
	}
	printf("\n空行数：");
	printf("%d\n",null);
}

