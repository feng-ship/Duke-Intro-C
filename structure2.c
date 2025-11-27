#include<stdio.h>
struct stu{
    int id;
    char name[20];
    int score;
}a[100];
int main(){
    int n,mmin;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d%s%d",&a[i].id,a[i].name,&a[i].score);
    }
    for(int i=0;i<n-1;i++){
        mmin=a[i].score;
        for(int j=i;j<=n-1;j++){
            if(a[j].score<mmin){
                mmin=a[j].score;
                struct stu temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}