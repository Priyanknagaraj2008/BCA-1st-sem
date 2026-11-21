#include <stdio.h>
struct student{
	int reg, m1,m2,m3;
	char name[30];
};
int main (){
	struct student s;
	FILE*fp;
	int ch, key, found;
	do {
	printf("\n1.add 2.display 3.search 4.exit\n");
	printf("enter choice");
	scanf("%d",&ch);
	if(ch==1){
		printf("enter regno,name and marks");
		scanf("%d %29 %d %d %d",&s.reg,s.name, &s.m1, &s.m2, &s.m3);
		fp = fopen ("students.text","a");
		if (fp == NULL){
			printf("file error\n");
			continue;
		}
		fprintf(fp,"%d %s %d %d %d\n",s.reg, s.name,s.m1,s.m2,s.m3);
		fclose(fp);
		printf("record added\n");
	}
	else if (ch==2||ch==3){
		found = 0;
		if (ch==3){
			printf("enter register number");
			scanf("%d",&key);
		}
		fp=fopen ("students.text","r");
		if (fp==NULL){
			printf("no records  found\n");
			continue;
		}
		while (fscanf(fp,"%d %29s %d %d %d",&s.reg,s.name, &s.m1, &s.m2, &s.m3)==5){
			if (ch==2||s.reg==key){
				int total = s.m1+s.m2+s.m3;
				printf("\n %d %s total =%d percentage=%.2f\n",s.reg,s.name,total,total/3.0);
				if(s.m1<35||s.m2<35||s.m3<35)
				printf("result:fail\n");
				else
				printf("result:pass\n");
				found=1;
			}
		}
			fclose(fp);
			if (!found)
			printf("Record not found\n");
	    }
	    else if (ch!=4)
	    printf("invalid choice\n");
	}
	while (ch!=4);
	return 0;
}
