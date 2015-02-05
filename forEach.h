#ifndef FOR_EACH_H
#define FOR_EACH_H
//Template Declaraion
template<class T>
void forEach(T a[], int size,T (*function)(T));
///Template Definition
/*!Note that the forEach.cpp file the included
 * is not to be compiled it is just for
 * instantiating the template.I am currently
 * looking into the best practice for this.
 */
#include "forEach.cpp"
#endif
