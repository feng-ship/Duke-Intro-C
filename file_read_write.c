#include<stdio.h>
int main(){
    FILE *fp;
    char ch,filename[10];
    printf("请输入所用的文件名:\n");
    scanf("%s",filename);
    if((fp=fopen(filename,"w"))==NULL){
        printf("文件打开失败！\n");
        return 1;
    }
    ch=getchar(); // 吸收换行符
    printf("请输入一个字符串(以#结束):\n");
    ch=getchar();
    while(ch!='#'){
        fputc(ch,fp);
        ch=getchar();
    }
    fclose(fp);
    putchar('\n');
    return 0;
}