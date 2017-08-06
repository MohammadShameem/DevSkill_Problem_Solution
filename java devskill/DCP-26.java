import java.io.*;
class Reverse{
	public static void main(String arg[]) throws IOException{
		String s1,original,reverse;
		InputStreamReader IN=new InputStreamReader(System.in);
		BufferedReader BR=new BufferedReader(IN);
		
		int T,i;
		s1=BR.readLine();
		T=Integer.parseInt(s1);
		i=1;
		while(i<=T){
			reverse = "";
			original = BR.readLine();
			int length = original.length();
		    for ( int j = length - 1 ; j >= 0 ; j-- ){
				 reverse = reverse + original.charAt(j);
			}
			System.out.println(reverse);
			i++;
		}
		
			
		
	}
	
}