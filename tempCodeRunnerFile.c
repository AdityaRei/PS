
	int i,n;
	struct Student S;
    struct Student *ptr;
	scanf("%d",&n);
	ptr=&S;
	for(i=0;i<n;i++){
	scanf("%d%s%lf",&((ptr+i)->r_no),(ptr+i)->name,&((ptr+i)->perc));
	}
	for(i=0;i<n;i++){
	printf("%d %s %lf\n",((ptr+i)->r_no),(ptr+i)->name,((ptr+i)->perc));
	}