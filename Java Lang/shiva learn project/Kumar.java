
public class Kumar {
    public static void main(String[] args) {
        String name= args[0];
        spec:
        switch(name){
            case "Bhavani" :
            System.out.println("Amma Bhavani");
            break spec;
            case "Shiva":
            System.out.println("Ohm Namo Shivaya");
            break;
            case "ManiKanta":
            System.out.println("Ayapa ani Piliche na Palakavu aavaru ame annaru Swami ");break;
            case "Ganesh":
            System.out.print("Vakra thunda maha karya koti Surya Samaprabha ");break;
        }
        lp1:
        for(int ka=0;ka<5;ka++){
            System.out.println(ka+"loop lp1");
            // lp2:
            for (int i = 0; i < 20; i++) {
                if(i==5)continue lp1;
                else if(i==2)continue lp1;
                System.out.println(i+"loop lp2");
            }
           
        }
        // for(;;){
        //     System.out.println("Jai Jai Narashimha");
        // }
    }
}
