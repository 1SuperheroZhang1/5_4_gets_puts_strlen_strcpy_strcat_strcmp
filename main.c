#include <stdio.h>
#include <string.h>
/*
 * 5.4 gets函数与puts函数 str系列字符串操作函数
 *   Ⅰ、gets函数与puts函数
 *     > gets函数类似于scanf函数，用于读取标准输入。gets函数一次读取一行
 *       scanf函数在读取字符串时遇到空格就认为读取结束.
 *      当输入的字符串存在空格时,需要使用gets函数进行读取
 *     > gets函数的格式如下：
 *       char *gets(char *str);
 *       gets函数从STDIN(标准输入)读取字符并把它们加载到str(字符串)中，直至遇到换行符(\n)
 *     > puts函数类似于printf函数，用于标准输出。
 *     > puts函数的格式如下：
 *       int puts(char *str);
 *       函数puts把str(字符串)写入STDOUT(标准输出)。
 *   Ⅱ、str系列字符串操作函数
 *      > str系列字符串操作函数主要包括：strlen、strcpy、strcmp、strcat等。
 *        strlen函数用于统计字符串长度
 *        strcpy函数用于将字符串中的字符逐个地赋值为目标字符数组
 *         注意，目标数组一定要大于字符串大小，即sizeof(d)>sizeof(c)，否则会造成访问越界
 *        strcmp函数用于比较两个字符串的大小，相等返回0，大于返回正值(1)，小于返回负值(-1)
 *        strcat函数用于将一个字符串拼接到另外一个字符串的末尾。注意，目标数组必须大于拼接后的字符串大小
 *     > 各个函数的具体格式如下所示：
 *        #include<string.h>
 *        size_t strlen(char *str);
 *        char * strcpy(char *to,const char *from);
 *        int strcmp(const char *str1,const char *str2);
 *        char * strcat(char *str1,const char *str2);
 *
 * */

//gets函数与puts函数
//int main() {
//    char c[20];
//    gets(c);//gets函数会读取空格，gets函数遇到\n后，不会存储\n,而是将其翻译为空字符\0
//    puts(c);//puts函数只能用于打印字符串，同时多打印一个换行符，等价于printf("%s\n",c);
//    return 0;
//}

//模拟实现strlen函数：统计字符串长度
int mystrlen(char c[]){
    int i;
    while(c[i]!='\0'){
        i++;
    }
    return i;
}
//str系列字符串操作函数
int main(){
    char c[20];
    char d[10]="world";
    char e[20];
    int len;  //用于存储字符串长度
    gets(c);
    puts(c);
    len=strlen(c);
    printf("len=%d\n",len);
    len=mystrlen(c);
    printf("my len=%d\n",len);
    strcat(c,d);
//    puts(c);
    strcpy(e,c);//将c字符串复制给d
    puts(e);
    printf("c?e=%d\n",strcmp(c,"ha"));
    puts(c);
    return 0;
}
