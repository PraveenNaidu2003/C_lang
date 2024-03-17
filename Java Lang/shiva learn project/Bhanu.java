// import java.util.Scanner;

public class Bhanu {
    public static void main(String[] args) {
        // int[][] number = new int[2][3];
        // int i = 0, j = 0;
        // Scanner sc = new Scanner(System.in);
        // System.out.println("Enter the Elements");
        // for (i = 0; i < 2; i++) {
        // for (j = 0; j < 3; j++) {
        // number[i][j] = sc.nextInt();
        // }
        // }
        // System.out.println("The Numbers you entered : ");
        // for (i = 0; i < 2; i++) {
        // for (j = 0; j < 3; j++) {
        // System.out.println(number[i][j]);\
        // }
        // System.out.println();
        // }
        bhavani bha=new bhavani();
        bhavani nana=new bhavani();
        bha.fun();
        System.out.println(bha.num);
        bha.num=56;
        System.out.println(bha.num);
        System.out.println(nana.num);
        Bhanu na = new Bhanu();
        int a = na.Method(2,     3);
        double b = na.Method(56.23d, 56.25d);
        System.out.println(a + '\n' + b);
        if (true) {
            int ant = 20;
            System.out.println(ant);
        }
        int xal = na.sum(10);
        // System.out.println(ant);
        System.out.println(xal);
    }

    int Method(int a, int b) {
        return a * b;
    }

    int sum(int a) {
        if(a>=1){
            return a + sum(a - 1);
        }
        return a;
    }
    // double Method(int a, int b) {
    // return a + b;
    // }

    // int Method(double a, double b) {
    // return a + b;
    // }

    double Method(double a, double b) {
        return a + b;
    }
}
