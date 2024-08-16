public class practice{

    public static class a{
        int a, b;
        void swap(){
            int temp = a;
            a = b;
            b = temp;
        }
    }

    public static void main(String args[]){
        System.out.println("Hello world");

        int a,b;
        a=10;
        b=20;
        System.out.printf("value of a = %d and b = %d\n",a,b);
        a newA = new a();
        newA.a=a;
        newA.b=b;
        newA.swap();
        System.out.printf("Value of a = %d and b = %d",a,b);
    }



}