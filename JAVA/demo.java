
// instance varible declaration and use // class variables

class instance {
    int x;
    int y;

    instance(){}


    // copy constructor
    instance(instance a){
        x = a.x;
        y = a.y;
    }
}

public class demo {

    public static void main(String[] args) {
        instance mypoint = new instance();
        mypoint.x = 80;
        mypoint.y = 30;
        
        instance mypoint2 = new instance(mypoint);

        System.out.println("X = " + mypoint.x);
        System.out.println("Y = " + mypoint.y);
        System.out.println("X = " + mypoint2.x);
        System.out.println("Y = " + mypoint2.y);
    }
}
