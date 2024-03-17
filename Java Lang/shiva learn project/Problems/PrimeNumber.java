public class PrimeNumber {
    static void Prime(int Number) {
        int count;
        for (int i=1;i<Number;i++){
            count = 0;
            for(int j=2;j<=i/2;j++) {
                if (i%j==0) {
                    count++;
                }
            }
            if(count==0)
                System.out.print("   "+i);
        }
    }
    static void Primeof(int Number){
        int count1=0;
        while(count1!=Number){
            int num=2,i;
            for(i=2;i<=num/2;i++){
                if(num%i==0){
                    System.out.print("   "+num);
                    count1++;
                    break;
                }
            }
            num++;
        }
    }
    public static void main(String[] args) {
        Prime(50);
        System.out.println("Jai Sri Ram");
        Primeof(10);
    }
}