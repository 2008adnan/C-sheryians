#include<stdio.h>
#include<string.h>
#include <math.h>

typedef struct Student{
    int roll;
    char name[35];
    float marks;
}s;

void DIsplay(struct Student a){
    printf("Roll = %d, Name = %s, Marks = %.2f\n", a.roll,a.name,a.marks);
}
int main(){
    int n;
    printf("Enter number of students\n");
    scanf("%d", &n);
    s arr[n];
    for(int i =0; i<n;i++){
        printf("enter roll of student %d\n", i+1);
        scanf("%d", &arr[i].roll);
            getchar();
        printf("enter name of student %d\n", i+1);
        fgets(arr[i].name, sizeof(arr[i].name), stdin);
        arr[i].name[strcspn(arr[i].name, "\n")] = '\0';
        printf("enter marks of student %d\n", i+1);
        scanf("%f", &arr[i].marks);
    }
    for(int i=0;i<n;i++){
        DIsplay(arr[i]);
    }

    float max = arr[0].marks;
    int index = 0;
    for(int i=1;i<n;i++){
        if(arr[i].marks>max){
            max = arr[i].marks;
            index = i;
        }
    }
    printf("Maximum marks = %.2f which is obtained by %s\n", max, arr[index].name);
    return 0;
}