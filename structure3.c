#include<stdio.h>
struct stu{
    int id;
    char name[20];
    float score[5];
    float avg;;
};
void input(struct stu a[],int x){
    for(int i=0;i<x;i++){
        scanf("%d%s%f%f%f",&a[i].id,a[i].name,&a[i].score[0],&a[i].score[1],&a[i].score[2]);
        a[i].avg=(a[i].score[0]+a[i].score[1]+a[i].score[2])/3.0;
    }
}
struct stu mmax(struct stu a[],int n){
    int m=0;
    for(int i=0;i<n;i++){
        if(a[i].avg>a[m].avg){
            m=i;
        }
    }
    return a[m];
}
void print(struct stu a){
    printf("成绩最高的学生是:\n");
    printf("学号:%d\n姓名:%s\n三门课成绩:%.2f %.2f %.2f\n",a.id,a.name,a.score[0],a.score[1],a.score[2],a.avg);
}   
struct stu a[100];
int main(){
    int n;
    scanf("%d",&n);
    input(a,n);
    struct stu max=mmax(a,n); 
    print(max);
    return 0;
}

