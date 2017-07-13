#include <stdio.h>

typedef struct {
	int age;
	char *name;
}person;


typedef union {
	int age;
	int salary;
}student;

void person1(person *p){
	printf("%d %s ",p->age,p->name);
	}
void student1(student *p){
	printf("%d %d ",p->age,p->salary);
}

void main(){
	person p;
	p.age=10;
	p.name="nikhil";
	
	student s;
	s.age=100;
	s.salary=1500;
	person1(&p);
	student1(&s);
}

//output: 10 nikhil 1500 1500
