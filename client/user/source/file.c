#include "../heads/file.h"
float get_temp(char *file)//参数为路径，返回值：float温度
{
    int fd;
    char read_buff[RDBUFFSIZE];
    float temp;
    char *ptr;

    fd = open(file,O_RDONLY,644);
    if(fd < 0)
    {
        perror("");
        return -1;
    }
    memset(read_buff,0,sizeof(read_buff));
    if( !read(fd,read_buff,sizeof(read_buff)/sizeof(read_buff[0])) )
    {
        perror("");
        close(fd);
        return -1;
    }
    close(fd);
    ptr = strstr(read_buff,"t=");
    ptr = ptr + 2;
    temp = atof(ptr)/1000.00;
    return temp;
}
