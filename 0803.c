#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * strim(char *str)//ȥ����β�Ŀո�
{
	char *end, *sp, *ep;
	int len;
	sp = str;
	end = str + strlen(str) - 1;
	ep = end;

	while (sp <= end && *sp == ' ')// *sp == ' 'Ҳ����
		sp++;
	while (ep >= sp && *sp == ' ')
		ep--;
	len = (ep < sp) ? 0 : (ep - sp) + 1;//(ep < sp)�ж��Ƿ����ж��ǿո�
	sp[len] = '\0';
	return sp;
}

int main()
{
	char str[] = "     as    adadq     ";
	char *str1=strim(str);
	printf("%s\n", str1);
	system("pause");
	return 0;
}