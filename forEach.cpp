template<class T>
void forEach(T a[], int size,T (*function)(T)){
  if (size > 0){
    forEach(a,size-1,function);
    a[size-1] = function(a[size-1]);
  }
}
