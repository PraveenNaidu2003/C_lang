public class Control{
    static int num1 = 512, num2= 12;
    Control(int nu1, int nu2){
        num1=nu1;
        num2=nu2;
    }
    public static void main(String[] args) {
        num1=51;
        num2=21;
    //     if(num1==num2){
    //         System.out.println("Both are Equal");
    //     }
    //     else if(num1>num2){
    //         System.out.println(num1);
    //     }   \core\images\java-break-statement.png
    //     switch(num1){
    //         case 21 :
    //         System.out.println("21 is a number");
    //         break;
    //         case 51 :
    //         System.out.println("Ram Ram Ram");
    //         case 23:
    //         System.out.println("Shitha Ram");
    //         break;
    //         case 3:
    //         System.out.println("Janaki Ram");
    //     }
    //     for(int mnum1=21;mnum1<40;mnum1++){
    //         System.out.println(mnum1);
    //     }
    //     String[] games={"Football","Vollyball","Cricket","Kabadhi","Koko"};
    //     for (String amma : games) {
    //         System.out.println(amma);
    //     }
    // while(num1!=90){System.out.println("Jai Jai Sri Ram Jai Sri Ram"+num1); num1++;}
        do{
            System.out.println("jai sri ram");
        }while(1==2);
        String name=(num1==2)?"Jai Jai Rama":"jai jai Sriram";
        System.out.print(name);
    }

}