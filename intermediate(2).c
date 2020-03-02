#include <stdio.h>
#include <ctype.h>

struct A_MEMBER {
	char name[20];
	int age;
	char gender;
	char grade;
	char mobTel[15];
	char custAddr[100];
};
void heading();
int main()
{
	struct A_MEMBER cust;
	printf("성명? ");
	gets(cust.name);
	//fgets(cust.name,sizeof(cust.name),stdin);
	//cust.name[strlen(cust.name) - 1] = '\0';
	printf("나이? ");
	scanf("%d%*c",&cust.age);
	
	do {
		printf("성별? (남: m: 여:w)");
		scanf("%c%*c",&cust.gender);
		cust.gender = toupper(cust.gender);
	} while (cust.gender!='M'&&cust.gender!='W');

	do {
		printf("회원등급? (A,B,C) ");
		scanf("%c%*c",&cust.grade);
		cust.grade = toupper(cust.grade);
	} while (cust.grade!='A'&&cust.grade!='B'&&cust.grade!='C');

	printf("휴대폰 번호? ");
	gets(cust.mobTel);
	//fgets(cust.mobTel,sizeof(cust.mobTel),stdin);
	//cust.name[strlen(cust.mobTel) - 1] = '\0';

	printf("근무지역 주소? ");
	gets(cust.custAddr);
	//fgets(cust.custAddr,sizeof(cust.custAddr),stdin);
	//cust.name[strlen(cust.custAddr) - 1] = '\0';

	heading();

	printf("%s, %d, %c, %4c, %s, %s \n",cust.name,cust.age,cust.gender,cust.grade,cust.mobTel,cust.custAddr);
	return 0;
}

void heading()
{
	printf("==========================================\n");
	printf("성명   나이 성별 등급 휴대폰번호    고객주소 \n");
	printf("==========================================\n");
}

/*
I recommend fgets function!!
*/
