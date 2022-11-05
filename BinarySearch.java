import java.util.*;
public class Main
{
    int binarySearch(int[] array,int element,int low,int high){
        while(low<=high){
            int middle=low+(high-low)/2;
            if(array[middle]==element)
                return middle;
            if(array[middle]<element)
                return binarySearch(array,element,middle+1,high);
            else
                return binarySearch(array,element,low,middle-1);

            }
        return -1;
    }
	public static void main(String[] args) {
	    Main obj=new Main();
		Scanner sc=new Scanner(System.in);
		int[] arr={1,2,3,4,5};
		int x=arr.length;
		int element=sc.nextInt();
		int result=obj.binarySearch(arr,element,0,x-1);
		if(result==-1)
		    System.out.println("Ele not found!");
		else
		    System.out.println("found at posn"+result);
	}
}
