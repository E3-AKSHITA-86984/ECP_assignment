int find_max_min(int arr[],int i,int *min){
 int max=arr[0];
 *min=arr[0];
 for(int n=1;n<i;n++){
 	if(max<arr[n]){
	max=arr[n];
	}
	else if(*min>arr[n]){
	*min=arr[n];
 }
}
return max;
}

int main(){
int i,j;
int min;
printf("Enter the range of array:");
scanf("%d",&i);
int arr[i];
for(j=0;j<i;j++){
printf("arr[%d]=",j);
scanf("%d",&arr[j]);
}
int res=find_max_min(arr,i,&min);
printf("Max=%d",res);
printf("\nMin=%d",min);
return 0;
}
