import java.util.Scanner;
public class university
{
    public void display_college()
    {
        System.out.println("Dispaly Clg");
    }
    public class dept
    {
        public void display_dept()
        {
            System.out.println("Department");
        }

        public class division
        {
            public void display_division()
            {
                System.out.println("Division");
            }
        }
    }

    public static void main(String args[])
    {
        university u= new university();
        u.display_college();
        university.dept d = u.new dept();
        d.display_dept();
        university.dept.division di = d.new division(); 
        di.display_division();
    }
}

Dispaly Clg
Department