#include<stdio.h>
int divide(int a,int b,int *result){
    int ret=1;
    if(b==0) ret=0;
    else *result=a/b;
    return ret;
}
int main(){
    int x,y,ans=0;
    scanf("%d%d",&x,&y);
    if(divide(x,y,&ans)){
        printf("x/y=%d\n",ans);
    }
    return 0;
}