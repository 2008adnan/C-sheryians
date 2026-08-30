#include<stdio.h>
struct Students{
    char name[50];
    int age;
    float marks;
};
int main(){
    //declare an array of three students
    struct Students arr[3] = {
        {"Alice", 18, 85.5},
        {"Bob", 19, 90.0},
        {"Charlie",17,92.5}
    };
    for(int i=0;i<3;i++){
        printf("Name = %s\t Age = %d\t Marks = %.2f\n", arr[i].name, arr[i].age, arr[i].marks);

    }

    return 0;
}