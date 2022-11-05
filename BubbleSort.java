//compile-time
import java.util.*;
public class Main
{
    int bubbleSort(int[] array){
        int x=array.length;
        for(int i=0;i<x-1;i++){
            for(int j=0;j<x-i-1;j++){
                if(array[j]>array[j+1]){
                    int temp=array[j];
                    array[j]=array[j+1];
                    array[j+1]=temp;
                }
            }
        }
        return 0;
        
    }
	public static void main(String[] args) {
	    Main obj=new Main();
		Scanner sc=new Scanner(System.in);
		int[] arr={4,8,7,9,2,5,1};
		
		int result=obj.bubbleSort(arr);
		System.out.println("sorted array is"+Arrays.toString(arr));
		
}
}
//runtime
import java.util.*;
public class Main
{
    int bubbleSort(int[] array){
        int x=array.length;
        for(int i=0;i<x-1;i++){
            for(int j=0;j<x-i-1;j++){
                if(array[j]>array[j+1]){
                    int temp=array[j];
                    array[j]=array[j+1];
                    array[j+1]=temp;
                }
            }
        }
        return 0;
        
    }
	public static void main(String[] args) {
	    Main obj=new Main();
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int[] arr=new int[n];
		
		for(int i=0;i<n;i++){
		    arr[i]=sc.nextInt();
		}
		
		int result=obj.bubbleSort(arr);
		System.out.println("sorted array is"+Arrays.toString(arr));
		
}
}
