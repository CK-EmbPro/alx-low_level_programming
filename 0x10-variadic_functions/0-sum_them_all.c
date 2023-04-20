#include<stdio.h>
#include<variadic_functions.h>

int sum_them_all(const unsigned int n, ...){
va_list arg;
int sum=0;
unsigned int i;

va_start(args, n);
for(i=0;i<n; i++){
sum+=va_arg(arg, int);
}

va_end(args);

if(n==0){
return 0;

}else{

return sum;
}

