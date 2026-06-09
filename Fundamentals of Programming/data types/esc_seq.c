#include <stdio.h>
int main() {
    char name[5] = "Golu";
    // we want to print hello "golu" kaise ho  i.e. hume golu mein double quotes mein print karna hai
    printf("hello \"%s\" kaise ho \n",name);
    // we want to print hello 'golu' kaise ho  i.e. hume golu mein single quotes mein print karna hai
    printf("hello \'%s\' kaise ho \n",name);
    // we want to print hello golu       kaise ho i.e. hume golu ke piche tab space dena hai
    printf("hello %s\t kaise ho \n",name);
    return 0;
}