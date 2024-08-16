class Circledemo {
    double x, y;
    double r;

    double circumference() {
        return 2 * 3.14159 * r;
    }

    double area() {
        return (22 / 7) * r * r;
    }

    void setCircle(double a, double b, double c) {
        x = a;
        y = b;
        r = c;
    }
}

class circleparamet {
    public static void main(String args[]) {
        Circledemo c1 = new Circledemo();
        Circledemo c2 = new Circledemo();
        c1.setCircle(3.0, 4.0, 5.0);
        c2.setCircle(-3.0, 4.0, 5.0);
        System.out.println("Circumference of Circle 1: " + c1.circumference());
        System.out.println("Area of Circle 1: " + c1.area());
        System.out.println("Circumference of Circle 2: " + c2.circumference());
        System.out.println("Area of Circle 2: " + c2.area());
    }
}
