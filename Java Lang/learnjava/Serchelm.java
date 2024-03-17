import java.util.Scanner;

public class Serchelm {
    Scanner sc=new Scanner(System.in);
    int[] array;
    void Serch(int[] arr,int ele){
        for(int i=0;i<10;i++){
            if(arr[i]==ele){
                System.out.println("Element is Found ");
                break;
            }
        }
    }
}
