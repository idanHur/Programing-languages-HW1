import java.util.ArrayList;
import java.util.List;

public class PlainPizza implements OlivesMixin{
	List<String> toppings;
	public PlainPizza() {
		toppings=new ArrayList<String>();
	}
	@Override
	public void add_olives() {
		System.out.println("Adding olives!");
		toppings.add("olives");
	}	

}

