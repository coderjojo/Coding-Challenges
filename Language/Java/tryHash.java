import java.util.*;

public class tryHash{
	public static void main(String[] args) {
		List<String> l1 = new ArrayList<>();
		l1.add("vedant");
		l1.add("xyzz");

		Scanner sc = new Scanner(System.in);
		char c = sc.next().charAt(0);

		System.out.println("Character: "+c);

		Iterator<String> it = l1.iterator();

		while(it.hasNext()){
			String str = it.next();
			System.out.println(str);
		}

		for(String s:l1)
			System.out.println(s);


		System.out.println("------------");

		ArrayList a1 = new ArrayList<>();

		a1.add("hello");

		a1.add(887858);

		a1.add(884584.487848);

		for(Object o : a1)
			System.out.println(o);
	}

	





}