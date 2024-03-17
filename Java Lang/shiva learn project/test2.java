public class test2 {
    public static void main(String[] args) {
        System.out.println(test1.num2);
        test1.num2=1;
        System.out.println(test1.num2);
        temp();
        System.out.println(test1.num2);
    }
    static void temp(){
        System.out.println(test1.num2);
        test1.num2=2;
    }
}
