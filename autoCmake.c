//
// Created by 17416 on 24-12-7.
//
#include "global.h"

int main(int argc, char *argv[],char *envp[]) {

	DIR * dp;
	struct dirent * filename;
	char dir[50000],dir1[50000],projectName[100];
	int standard;
	bool isCPP;
	FILE* fp=NULL;

	printf("if CPP please input 1, if C 0:\n");
	scanf("%d",&isCPP);
	getchar();

	printf("please input your C/CPP File directory:\n");
	scanf("%[^\n]s",dir);
	getchar();

	printf("please input your CMakeFile File directory:\n");
	scanf("%[^\n]s",dir1);
	getchar();

	printf("please input your project name:\n");
	scanf("%s",projectName);
	getchar();

	printf("please input your C standard:\n");
	scanf("%d",&standard);

	dp=opendir(dir);


	fp=fopen(dir1,"w+");

	if(isCPP==false) {
		fprintf(fp,"cmake_minimum_required(VERSION 3.29)\n\n\n"
			"project(%s C)\n\n\nset(CMAKE_C_STANDARD %d)\n\n"
			,projectName,standard);
		while((filename=readdir(dp))!=NULL) {
			if(strcmp(filename->d_name,".")==0 || strcmp(filename->d_name,"..")==0) {
				continue;
			}
			char filename1[100]={"\0"};
			strncpy(filename1,filename->d_name,strlen(filename->d_name)-2);
			fprintf(fp,"\nadd_executable(%s \"%s\")",filename1,filename->d_name);
		}
	}else {
		fprintf(fp,"cmake_minimum_required(VERSION 3.29)\n\n\n"
			"project(%s)\n\n\nset(CMAKE_CXX_STANDARD %d)\n\n"
			,projectName,standard);
		while((filename=readdir(dp))!=NULL) {
			if(strcmp(filename->d_name,".")==0 || strcmp(filename->d_name,"..")==0) {
				continue;
			}
			char filename1[100];
			strncpy(filename1,filename->d_name,strlen(filename->d_name)-4);
			fprintf(fp,"\n add_executable(%s \"%s\")",filename1,filename->d_name);
		}
	}

	closedir(dp);
	fclose(fp);
	return 0;
}
