public class Srinivasa{
  public static void main(String[] arg) {
    float a=add(12.5f, 15.0f);
    System.out.println(add(98,2));
  }
  public static int add(int num1,int num2){
    System.out.println("Sum of two numbers is "+(num1+num2));
    return num1+num2;
  }
  public static float add(float num1,float num2){
    System.out.println("Sum of two numbers is "+(num1+num2));
    return num1+num2;
  }
}