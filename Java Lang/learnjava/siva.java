public class siva {
    public static void main(String[] args) {
        System.out.println(add(100));
        System.out.println(sum(5,5));
        int num1=213,num2=617,num3=90;
        if(num1>num3 || num2>num3){
        if(num1>num2) System.out.println("The Largest Number is "+ num1);
        else System.out.println("The Largest Number is "+ num2);
        }
        else System.out.println("The Largest Number is "+ num3);
    }
    public static int add(int num1){
        if (num1>0) return num1+add(num1-1);
        else return 0;
    }
    public static int sum(int start,int end){
        if(end>=start) return end+sum(start, end-1);
        else return 0;
    }
}
