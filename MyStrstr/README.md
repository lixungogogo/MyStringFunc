strstr(str1,str2) 函数用于判断字符串str2是否是str1的子串。如果是，则该函数返回str2在str1中首次出现的地址；否则，返回NULL。

包含文件：string.h

函数名: strstr

函数原型：
extern char *strstr(char *str1, const char *str2);

语法：

* strstr(str1,str2)

str1: 被查找目标　string expression to search.

str2: 要查找对象　The string expression to find.

返回值：若str2是str1的子串，则返回str2在str1的首次出现的地址；如果str2不是str1的子串，则返回NULL。

