create database student;
use student;
create table student1 (RollNo int,Name varchar(30),Branch varchar(30),primary key (RollNo));

create table student (RollNo int,Name varchar(30),Branch varchar(30), primary key (RollNo));
create table exam (rollno int,S_code int,Marks int, P_code varchar(30),foreign key (rollno) references student(RollNo));

insert into exam value (1,11,50,'CS'),(1,12,60,'CS'),(2,101,66,'EC'),(2,102,70,'EC'),(3,101,45,'EC'),(3,102,50,'EC');

select student.RollNo, student.Name, student.Branch, exam.Marks from student inner join exam on student.RollNo = exam.RollNo;



create table below (FirstName varchar(30),LastName varchar(30),Address varchar(30),City varchar(30),Age int);
insert into below value ('Mickey','Mouse','123 Fantasy Way','Anaheim',73),('Bat','Man','321 Cavem Ave','Gotham',54),('Wonder','Woman','987 Truth Way','Paradise',39),('Donald','Duck','555 Quack Street','Mallaed',65),('Bugs','Bunny','567 Carrot Street','Rascal',58),('Wiley','Coyote','999 Acme Way','Canyon',61),('Cat','Woman','234 Purrfect','Hairball',32),('Tweety','Bird','543','Itotltaw',28);


create table employee (Employee_id int,Frist_name varchar(30),Last_name varchar(30),Salary int,Joining_date datetime,Department varchar(30),primary key(Employee_id));

create table incentive (Employee_ref_id int,Incentive_date date,Incentive_amount int,foreign key (Employee_ref_id) references employee(Employee_id));
insert into incentive value (1,'2013-02-01',5000),(2,'2013-02-01',3000),(3,'2013-02-01',4000),(1,'2013-01-01',4500),(2,'2013-01-01',3500);

select Frist_name,Joining_date,Salary  from  employee;
SELECT Frist_name ,Salary FROM employee ORDER BY Salary DESC;
select * from employee where Frist_name like 'J%';
select Frist_name, Salary from employee order by Salary asc;
SELECT employee.Frist_name , Incentive.Incentive_amount FROM employee  INNER  JOIN incentive ON Employee_id=Employee_ref_id WHERE Incentive_amount>3000;

create table employee_backup (Employee_id int,Frist_name varchar(30),Last_name varchar(30),Salary int,Joining_date datetime,Department varchar(30));
delete from employee where Employee_id = 2;



create table salseperson (PKSNo int,SNAME varchar(30),CITY varchar(30),COMM varchar(30),primary key(PKSNo));
create table customer (PKCNM int,CNAME varchar(30),CITY varchar(30),RATING int,FKSNo int,primary key(PKCNM));

select *from customer where FKSNo > 1000;
select SNAME,CITY, COMM from salseperson where CITY='London' and COMM>0.10 ; 
select *from salseperson where CITY='Barcelona' or CITY='London' ;
select *from salseperson where CITY in ('Barcelona','London');
select *from salseperson where COMM between 0.10 and 0.12 ;
select *from customer where rating>=100 and CITY not in ('Roe');