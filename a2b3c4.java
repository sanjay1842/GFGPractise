import java.io.*;
import java.util.*;
import java.lang.*;
class Main{
static void res(String s){
	int l=s.length();
	for(int i=0;i<l;i++){
	if(Character.isAlphabetic(s.charAt(i))){
	System.out.print(s.charAt(i));
}
else{
	int a=Character.getNumericValue(s.charAt(i));
	for(int j=1;j<a;j++){
	System.out.print(s.charAt(i-1));
}
}
}
}
public static void main(String args[]){
	Scanner sc=new Scanner(System.in);
	//Main obj=new Main();
	String x;
	x=sc.nextLine();
	res(x);
	
}
}

//a2b3c4
//run length encoding
