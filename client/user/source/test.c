/*************************************************************************
  > File Name: test.c
  > Author: malunkun
  > Mail: 209446860@qq.com
  > Created Time: 2019-09-21 22:13:25
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#include"crc-itu-t.h"

int main(int argc,char **argv)
{
    char *a = argv[1];
    int num = atoi(argv[2]);
    short crc = 2;
    short res = crc_itu_t(crc,a,num);
    printf("%s\n",a);
    printf("result:%d\n",res);
    return 0;
}

