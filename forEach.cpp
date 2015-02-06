template<class T>
void forEach(T a[], int size,void (*function)(T)){
  if (size > 0){
    forEach(a,size-1,function);
    function(a[size-1]);
  }
}
