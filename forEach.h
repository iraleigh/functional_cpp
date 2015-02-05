///Add Documentation
#ifndef FOR_EACH_H
#define FOR_EACH_H
void forEach(int a[], int size,int (*function)(int));
void forEach(double a[], int size,double (*function)(double));
void forEach(char a[], int size,char (*function)(char));
#endif
