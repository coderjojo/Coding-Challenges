import java.util.*;

class Book{
	private int id;
	private String title;

	public Book(int id, String title){
		this.id = id;
		this.title = title;
	}

	@Override
	public String toString(){
		return id+": " + title;
	}

	@Override
	public boolean equals(Object o){
		return o != null && o instanceof Book && this.id == ((Book)o).id;
	}

	@Override
	public int hashCode(){
		return id;
	}
}

public class tryColl{
	public static void main(String[] args) {
		Book book1 = new Book(1, "Sample");
		Book book = new Book(2, "xyz");
		Book book2 = new Book(1,"Sample");


		Set<Book> set1 = new HashSet<Book>();
		set1.add(book1);
		set1.add(book);
		set1.add(book2);

		set1.add(null);

		System.out.println(set1);
	}
}