package day12;

public class ObjectInstance {
	public String toString() {
		return "在" + getClass().getName() + "类中重写toString()方法";
	}

	public static void main(String[] args) {
		// TODO 自动生成的方法存根
		System.out.println(new ObjectInstance());

	}

}
