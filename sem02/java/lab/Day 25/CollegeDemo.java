import java.util.*;
class InvalidMarksException extends Exception
{
	InvalidMarksException(String message){
		super(message);
	}
}
interface Exam
{
	public void enterMarks(int marks) throws InvalidMarksException;
	public void calculateGrade();
}
abstract class Person
{
	private int id;
	protected String name;
	public final String collegeName = "ABC College";

	Person(int id, String name){
		this.id = id;
		this.name = name;
	}
	public int getId(){
		return id;
	}
	public String getName(){
		return name;
	}
	public abstract void display();
}
class Student extends Person implements Exam
{
	private int marks;
	private String grade;

	Student(int id,String name){
		super(id,name);
	}
	public void enterMarks(int marks) throws InvalidMarksException
	{
		if(marks<0 || marks>100){
			throw new InvalidMarksException("Invalid Marks..");
		}
		else{
			this.marks = marks;
		}
	}
	public void calculateGrade(){
		if(marks>=90){
			grade="A";
		}else if(marks>=75){
			grade="B";
		}else if(marks>=50){
			grade="C";
		}else{
			grade="FAIL";
		}
	}
	public void display(){
		System.out.println("ID : " + getId());
		System.out.println("NAME : " + getName());
		System.out.println("COLLEGE : " + collegeName);
		System.out.println("MARKS : " + marks);
		System.out.println("GRADE : " + grade);
	}
}
public class CollegeDemo
{
	public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		int id,marks,ch;
		String name;
		try{
			System.out.print("Enter ID : ");
			id = sc.nextInt();
			System.out.print("Enter Name : ");
			name = sc.next();
			Student std = new Student(id,name);
			do{
				System.out.println("\n1.Enter Marks \n2.Calculate Grade \n3.Display Student \n4.Exit\n");
				System.out.print("Enter Your Choice : ");
				ch = sc.nextInt();
				switch(ch){
					case 1:
					System.out.print("Enter Marks : ");
					marks = sc.nextInt();
					std.enterMarks(marks);
					System.out.println("Data Saved..");
					break;

					case 2:
					std.calculateGrade();
					System.out.println("Grades Calculated..");
					break;

					case 3:
					std.display();
					break;

					case 4:
					System.exit(0);
					break;

					default:
					System.out.println("Invalid Choice..");
				}
			}while(true);
		}catch(InvalidMarksException e){
			System.out.println(e.getMessage());
		}
	}
}