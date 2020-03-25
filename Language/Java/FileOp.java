import java.io.*;
import java.util.*;

public class FileOp{
	public static void main(String[] args) {
		String str = "";
		//BufferedReader br = null;
	    try{

	    	LineNumberReader rd = new LineNumberReader(new InputStreamReader(new FileInputStream("file.txt"),"UTF-8"));

	    	while(((str = rd.readLine()) != null) && rd.getLineNumber() < 5){
	    		System.out.println(str);
	    	}

	    	rd.close();

	    }catch(FileNotFoundException e){
	    	System.err.println("File not found");
	    }
	    catch(IOException e){
	    	System.err.println("Unble to read the file");
	    }

	    try{

	    	String l_word="";
	    	String curr;

	    	Scanner sc = new Scanner(new File("file.txt"));

	    	while(sc.hasNext()){
	    		curr = sc.next();

	    		if(curr.length() > l_word.length())
	    			l_word = curr;		
	    	}

	    	System.out.println("Longest Word: "+l_word);
	    }catch(FileNotFoundException e){
	    	System.err.println("File not found");
	    }
	}
}