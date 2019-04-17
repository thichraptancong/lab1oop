package cirlce;

public class circle {
	private float radius;
	circle (float R)
	{
		radius= R;
	}
	double perimeter()
	{
		return 2*Math.PI*radius;
	}
	double area()
	{
		return 2*Math.PI*Math.pow(radius, 2);
	}
	public static void main(String args[])
	{
		circle cir1= new circle(12);
		circle cir2= new circle(15);
		System.out.println("perimeter of cir1 is: "+cir1.perimeter());
		System.out.println("area of cir1 is: "+cir1.area());
		System.out.println("perimeter of cir2 is: "+cir2.perimeter());
		System.out.println("area of cir2 is: "+cir2.area());
	}
}

