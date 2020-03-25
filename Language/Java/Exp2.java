import java.io.*;

class Employee implements Serializable{
	public int id;
	public String name;

	public Employee(int id, String name){
		this.id = id;
		this.name = name;
	} 
}

public class Exp2{
	public static void main(String[] args) {
		try{

			Employee e1 = new Employee(1, "Vedant");

			FileOutputStream file = new FileOutputStream("output.ser");
			ObjectOutputStream out = new ObjectOutputStream(file);

			out.writeObject(e1);

			out.close();
			file.close();

			System.out.println("Object has been serialized");

		} catch(IOException ex){
			System.out.println("Io Occured");
		}

		try{
			FileInputStream file = new FileInputStream("output.ser");
			ObjectInputStream in = new ObjectInputStream(file);

			Employee e2 = null;
			e2 = (Employee)in.readObject();

			in.close();
			file.close();

			System.out.println("Object Deserialized");

			System.out.println(e2.id);
			System.out.println(e2.name);
		}
		catch(IOException ex){
			System.out.println("IOExp caught");
		}
		catch(ClassNotFoundException ex){
			System.out.println("Class Not Fount Exp");

		}
	}
}