
#include <stdio.h>
#include "stdlib.h"
#include <string.h>
#include <iostream>
using namespace std;//�ļ����
void main()
{
	FILE *file = fopen("F:/2.mp3","wb");
	long i=0;
	char a[10];
            
	char *buff = new char[10240];	//������
	while(true)
	{
		string strName = "F:/���/"; //�ļ���
		buff= "";
		string s;
		sprintf(a,"%d",i);			
		s = a;
        strName += string("1-");
		strName += s;
		strName += string(".mp3") ;  
		
		FILE * f = fopen(strName.c_str(),"rb");
		if(f == 0)
		{
			break;
		}
		fread(buff,10240,1,f);
		int a=fwrite(buff,10240,1,file);	
		printf("%d\t",a);
		i++;
		fclose(f);

	}
	fclose(file);

}