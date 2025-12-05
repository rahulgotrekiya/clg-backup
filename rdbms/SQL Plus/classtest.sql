declare
   n number(2);
begin
  n := &number;
  if mod(2,0) = 0 then
   dbms_output.put_line(n || ' is Even');
  else
   dbms_output.put_line(n || ' is Odd');
  end if;
  dbms_output.put_line(n);
end;
/

-- 

declare
   vName applicant.a_name%type;
   vId applicant.aid%type;
begin
  vId := '&Id';
  select a_name into vName from applicant where aid = vId;
  dbms_output.put_line(vName);
exception
  when no_data_found then
  dbms_output.put_line('Wrong aid!!!');
end;
/

-- 

declare
   n number(2);
begin
   n := &number;
   loop
      dbms_output.put_line(n);
      n := n-1;
      exit when n > 0;
   end loop;
end;
/

-- 

declare
   n number(2);
begin
   n := &n;
   while n > 0
   loop
      dbms_output.put_line(n);
      n := n-1;
   end loop;
end;
/

-- 

declare
   n number(2);
begin
  for n in 1 .. 10
  loop
        dbms_output.put_line(n);
  end loop;
end;
/

-- 

declare
   b number(2);
begin
   for n in reverse 1 .. 11
  loop
    dbms_output.put_line(n);
  end loop;
end;
/

-- 

declare
   cursor vCur is select empno, ename, sal from emp;
   vNo emp.empno%type;
   vName emp.ename%type;
   vSal emp.sal%type;
begin
   open vCur;
   loop
      fetch vCur into vNo, vName, vSal;
      dbms_output.put_line('No: ' || vNo);
      dbms_output.put_line('Name: ' || vName);
      dbms_output.put_line('Sal: ' || vSal);
      exit when vCur%NOTFOUND;
   end loop;
   close vCur;
end;
/

-- 

declare
   cursor curEmp is select empno, ename, sal from emp;
begin
   dbms_output.put_line('| Emp no | eName | Salary |');
   for vCur in curEmp
   loop
      dbms_output.put_line('| ' || vCur.empno || ' | ' || vCur.ename || ' | ' || vCur.sal || ' | ');
   end loop;
end;
/

-- 

begin
  update stud 
  set total = sub1 + sub2 + sub3;

  dbms_output.put_line(SQL%rowcount || ' rows updated succesfully');
exception
  when others then
    dbms_output.put_line('Error updating table: ' || sqlerrm);
   rollback;
end;
/

-- 

begin
  update stud
  set Grade = 
      CASE
         when total > 70 then 'AA'  
         when total > 60 then 'A'  
         when total > 50 then 'B'  
         when total > 35 then 'C'  
         else 'Fail'
      end;
   dbms_output.put_line(sql%rowcount || 'grades are updated');
exception
  when others then
  dbms_output.put_line('Error updating grades: ' || sqlerrm);
end;
/

-- 

declare
   cursor topers is 
      select R_no, name, total, grade from stud
      order by total desc;
   v_counter int := 0;
begin
   dbms_output.put_line('-- top 3 rankers ---');
   DBMS_OUTPUT.PUT_LINE('R_No' || CHR(9) || 'Name' || CHR(9) || CHR(9) || 'Total' || CHR(9) || 'Grade');
   DBMS_OUTPUT.PUT_LINE('-----------------------------');
   
   for studrec in topers loop
     exit when v_counter >= 3;

     dbms_output.put_line(
      studrec.R_No || CHR(9) ||
      studrec.name || CHR(9) ||
      studrec.total || CHR(9) ||
      studrec.grade
     );
     v_counter := v_counter + 1;
   end loop;
end;
/

declare
   cursor cSal is select empno, ename, sal, dname from emp join dept on emp.deptno = dept.deptno;
   hra number(6,2);
   da number(6,2);
   medical number(6,2);
   pf number(6,2);
   totalSal number(6,2);
begin
   for vCur in sal
   loop
      dbms_output.put_line('Salary slip for the month: ' || to_char(sysdate, 'Month'));
      dbms_output.put('Employee Code: ' || vCur.empno);
        dbms_output.put_line(' Employee Code: ' || vCur.empno);
        dbms_output.put_line('Department Name: ' || vCur.dname);
        dbms_output.put_line(lpad('-', 75, '-'));
        dbms_output.put_line(rpad('Basic Salary', 15) || rpad('HRA', 15) || rpad('DA', 15) || rpad('Medical', 15) || rpad('P.F.', 15));
        hra := vCur.sal * 0.15;
da := vCur.sal * 0.30;
        medical := vCur.sal * 0.01;
        pf := vCur.sal * 0.10;
        totalSal := hra + da + medical - pf;
        dbms_output.put_line(rpad(vCur.sal, 15) || rpad(da, 15) || rpad(hra, 15) || rpad(medical, 15) || rpad(pf, 15));
        dbms_output.put_line(lpad('-', 75, '-'));
        dbms_output.put_line('Total Salary : ' || totalSal);
        dbms_output.put_line(' ');
        dbms_output.put_line(' ');
    END LOOP;
EXCEPTION
    WHEN NO_DATA_FOUND THEN 
        dbms_output.put_line('No Records Found !!!');
END;
/

-- 

create or replace procedure hello
is
begin
  dbms_output.put_line('Hello world !');
end;
/

-- 

create or replace procedure 
p1 (vId in faculty)
is
begin
  dbms_output.put_line('Hello world !');
end;
/

-- 

CREATE OR REPLACE PROCEDURE get_emp_name(
    p_empcode IN NUMBER,
    p_name OUT VARCHAR2
)
IS
BEGIN
    SELECT Emp_Name
    INTO p_name
    FROM Employee_master
    WHERE EmpCode = p_empcode;
END;
/

DECLARE
    v_name VARCHAR2(100);
BEGIN
    get_emp_name(1001, v_name);
    DBMS_OUTPUT.PUT_LINE('Employee Name = ' || v_name);
END;
/

-- 