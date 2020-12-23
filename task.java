public class TheMain {
	
	public static void main(String[] args) {
		
		String[] data= new String[10]; // string array to store data (size is unknown)
		int count=0;
		
		// if argument pass for add task
		if(args[0].equals("add")) {
			data[count]=args[1];			
			System.out.println("added "+data[count]);
			count++;
		}
		// if the argument pass for list of task
		if(args[0].equals("ls")) {
			System.out.println("lst task "+data[0]);
			System.out.println("2nd task "+data[1]);
		}
	}
  // These help() function for commands
	/*
	public static void help() {
		System.out.println("Usage : ");
		System.out.println("add \"TODO ITEM\"       # Add a new todo");
		System.out.println("ls                    # Show remaining todos");
		System.out.println("del NUMBER            # Delete a todo");
		System.out.println("done NUMBER           # Completer a todo");
		System.out.println("help                  # Show usage");
		System.out.println("report                # Statistics");
	}*/	
		
}
