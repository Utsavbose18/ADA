#include <math.h>
#include <stdio.h>
#include <time.h>
void delay(){
 long n;
 for(n=0;n<1000;n++){
 int a = 10/10;
 }
}
void insertionSort(int arr[], int n)
{
int i, val, j;
for (i = 1; i < n; i++) {
val = arr[i];
j = i - 1;
while (j >= 0 && arr[j] < val) {
arr[j + 1] = arr[j];
j --;
delay();
}
arr[j + 1] = val;
}
}
int main()
{ int arr[1500],n=100,i;
 double start,end;
 while(n<=1200){
 for(i=0;i<n;i++){
 arr[i]=i;
 }
 start = clock();
 insertionSort(arr, n);
 end=clock();
 printf("n=%d time= %f \n",n,(end-start)/CLOCKS_PER_SEC);
 n=n+100;
 }
return 0;
}
