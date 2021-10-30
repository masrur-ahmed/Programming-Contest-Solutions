import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

class LCS{
    static int LCS(String dummy1, String dummy2, int length1, int length2){
        // if length of any string is 0, return 0
        if(length1 == 0 || length2 == 0)
        return 0;
        
        if(dummy1.charAt(length1-1) == dummy2.charAt(length2-1))
        return 1 + LCS(dummy1, dummy2, length1-1, length2-1);
        
        return Math.max( LCS(dummy1, dummy2, length1-1, length2),LCS(dummy1,dummy2, length1, length2-1) );
    }
    
    public static void main(String args[]) throws IOException{
        BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
        String dummy1 = reader.readLine();
        String dummy2 = reader.readLine();
        int length1 = dummy1.length();
        int length2 = dummy2.length();
        
        System.out.print("Length of LCS : "+LCS(dummy1, dummy2, length1, length2));
    }
}
