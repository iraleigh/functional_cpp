template<class T>
void forEach(T a[], int size,T (*function)(T)){
  if (size == 0){
    a[0] = function(a[0]);
  } else {
    forEach(a,size-1,function);
    a[size] = function(a[size]);
  }
}
