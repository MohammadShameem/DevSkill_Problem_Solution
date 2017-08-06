import java.util.Scanner;
public class DCP{
	public static void main(String arg[]){
		Scanner sc = new Scanner(System.in);
		int h,m,d,i=1,j=1,r;
		
		while(sc.hasNextInt()){	
			h=sc.nextInt();
			m=sc.nextInt();
			float sum=0;
			while(m>0){
				d=sc.nextInt();
				sum+=d;		
				j++;
				m--;
			}
			r=(int)(Math.ceil(h/sum));
			if(r==1){
				System.out.println("Project will finish within 1 day.");
			}
			else{
				System.out.println("Project will finish within "+r+" days.");
			}
			
			i++;
		}
		
	}
	
	
}