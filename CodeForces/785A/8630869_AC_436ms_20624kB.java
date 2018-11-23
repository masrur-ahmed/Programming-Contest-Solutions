import java.util.*;
public class Main{
    public static void main(String [] args){
        
        Scanner key=new Scanner(System.in);
        int x=key.nextInt();
        int sum=0;
        String s;
        for(int y=0 ; y<=x;y++){
            s=key.nextLine();
            if(s.equals("Tetrahedron")){
                sum+=4;
            }
            else if(s.equals("Cube")){
                sum+=6;
            }
            else if(s.equals("Octahedron")){
                sum+=8;
            }
            else if(s.equals("Dodecahedron")){
                sum+=12;
            }
            else if(s.equals("Icosahedron")){
                sum+=20;
            }
        }
        System.out.printf("%d\n",sum);
    }
}