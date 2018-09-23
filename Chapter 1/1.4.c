for(int i = 0; i < n; ++i){
	x[i] = i;
}
for(int i = 0; i < k; ++i){
	swap(i , randint(i, n -1));
	printf("%d\n",x[i]);
}