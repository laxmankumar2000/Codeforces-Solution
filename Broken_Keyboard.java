import java.util.*;
public class B_Broken_Keyboard{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int tc = sc.nextInt();
        while(tc-->0)
        {
            int n = sc.nextInt();
            String s = sc.next();
            boolean flag=true;
            if(n%3==2) {
				System.out.println("No");
				continue;
			}			
			for(int i=2; i<=s.length(); i+=3) {
				if (s.charAt(i)!=s.charAt(i-1)) {
					flag = false;
					break; 
				}	
			} 
			System.out.println(flag?"YES":"NO");
 
        }
            
    }
 
}
