public class Amma {
    int num;
   
    static int sub(int a,int b){
        return b-a;
    }
    static void add(int a){
        System.out.println("jai Sri Ram   "+ a);
    }
    public static void main(String[] args) {
        Amma am= new Amma();
        Amma.add(55);
        System.out.println(sub(52,56));
        // Amma[] mama;
        int[] nam={23,56};
        
        System.out.println(am.num);
        System.out.print(nam);
    }
}