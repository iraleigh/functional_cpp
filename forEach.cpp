void forEach(int a[], int size,int (*function)(int)){
  if (size == 0){
    a[0] = function(a[0]);
  } else {
    forEach(a,size-1,function);
    a[size] = function(a[size]);
  }
}
void forEach(double a[], int size,double (*function)(double)){
  if (size == 0){
    a[0] = function(a[0]);
  } else {
    forEach(a,size-1,function);
    a[size] = function(a[size]);
  }
}
void forEach(char a[], int size,char (*function)(char)){
  if (size == 0){
    a[0] = function(a[0]);
  } else {
    forEach(a,size-1,function);
    a[size] = function(a[size]);
  }
}
