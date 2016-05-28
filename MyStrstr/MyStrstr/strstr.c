#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
/**************************************************
�������ܣ�strstr(str1,str2) ���������ж��ַ���str2�Ƿ�
		 ��str1���Ӵ�������ǣ���ú�������str2��str1
		 ���״γ��ֵĵ�ַ�����򣬷���NULL
������ԣ�1. str1 ==	NULL,str2 != NULL
		 2. str1 != NULL,str2 == NULL
		 3. str1 == NULL,str2 == NULL
***************************************************/
char *my_strstr(const char*str1, const char*str2)
{
	assert(str1);//�����Ϸ��Լ��
	assert(str2);
	char *cp = (char*)str1;
	char *s2 = (char*)str2;
	char *s1 = (char*)str1;
	if (!*str2) //str1 == NULL,return NULL,str2 == NULL.return str1
	{
		return (char*)str1;
	}
	while (*cp)
	{
		s1 = cp;
		s2 = (char*)str2;
		while (*s1 && *s2 && !(*s1 - *s2))
		{
			*s1++;
			*s2++;
		}
		if (!*s2)
		{
			return cp;
		}
		cp++;
	}
	return NULL;
}

int main()
{
	char *s1 = "12";
	char *s2 = "2";
	char*s = my_strstr(s1, s2);
	return 0;
}