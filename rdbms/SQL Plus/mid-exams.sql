DECLARE
    name VARCHAR2(50);
    age NUMBER(3);
    salary NUMBER(10,2);
    is_active BOOLEAN;
BEGIN
   name := 'John';
   age:= 25;
   dbms_output.put_line('Hello');
EXCEPTION
   when no_data_found then
      dbms_output.put_line('No recod found');
   when others then
            dbms_output.put_line('error');
END;
/

DECLARE
   n number(3);
BEGIN 
   n := &number;
   loop
      dbms_output.put_line(n);
      n := n - 1;
      exit when n <= 0;
   end loop;
end;
/


DECLARE
   n number(3);
BEGIN 
   n := &number;
   while n > 0 loop
      dbms_output.put_line(n);
      n := n - 1;
   end loop;
end;
/

BEGIN
   FOR n IN REVERSE 1 .. 10 LOOP
      dbms_output.put_line(n);
   END LOOP;
END;
/


BEGIN
   FOR n IN 1 .. 10 LOOP
      dbms_output.put_line('5 x ' || n || ' = ' || (5 * n));
   END LOOP;
END;
/

DECLARE
   vName applicant.a_name%TYPE;
   vID applicant.aid%TYPE;
BEGIN
   vID := '&Id';
   select a_name into vName
   from applicant
   where aid = vID;

   dbms_output.put_line('Name: ' || vName);
END;
/


DECLARE
   vSid supplier.ID%TYPE;

   CURSOR cReport(vSid supplier.S_ID%TYPE) is
      SELECT p.PART_ID, p.PART_NAME, c.qty, p.unit_rate, (c.qty) * p.unit_rate) as total_price
      from catalog c
      JOIN parts p ON c.PART_ID = p.PART_ID
      WHERE c.S_ID = vSid;
BEGIN
   vSid := '&supplier_ID';

   FOR vCur IN cReport(vSid) LOOP
DBMS_OUTPUT.PUT_LINE(lpad('*', 75, '*'));
DBMS_OUTPUT.PUT_LINE(rpad('PART ID', 15) ||
rpad('PART NAME', 15) ||
rpad('QUANTITY', 15) ||
rpad('UNIT', 15) ||
rpad('PRICE', 15) ||
rpad('TOTAL', 15));
DBMS_OUTPUT.PUT_LINE(rpad(vCur.PART_ID, 15) ||
rpad(vCur.PART_NAME, 15) ||
rpad(vCur.qty, 15) ||
rpad(vCur.unit_rate, 15) ||
rpad(vCur.total_price, 15));
DBMS_OUTPUT.PUT_LINE(lpad('-', 75, '-'));
END LOOP;
EXCEPTION
WHEN NO_DATA_FOUND THEN
DBMS_OUTPUT.PUT_LINE('Wrong supplier Id !!!');END;
/