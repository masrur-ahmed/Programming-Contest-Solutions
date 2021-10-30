import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

class StringMethods {
    public static void main(String[] args) throws IOException{
        BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
        String dummy = reader.readLine();
        System.out.println(dummy);

        //Returns the length of a specified string	
        print(dummy.length());

        //Returns the character at the specified index (position)
        print(dummy.charAt(0)+""); 

        //Compares two strings lexicographically
        //returns 0 if they are equal
        //< 0 if the string is lexicographically less than the other string
        //> 0 if the string is lexicographically greater than the other string (more characters)

        print(String.format("%d",dummy.compareTo("Roronoa Zoro")));

        //Compares two strings lexicographically, ignoring case differences	
        //returns 0 if they are equal otherwise 1
        //format changes the type to string. 
        print(String.format("%d",dummy.compareToIgnoreCase("Roronoa Zoro")));

        //Appends a string to the end of another string
        //it doesn't save the concatenated string to the main one. needs to be done explicitly.
        print(dummy.concat("Roronoa"));
        dummy = dummy.concat("Roronoa");
        //Checks whether a string contains a sequence of characters. Allows partial matching
        print(dummy.contains("roronoa")); // Should return false since it's case sensitive. 

       //Checks whether a string contains a SPECIFIC sequence of characters. Does not allow partial matching
       print(dummy.contentEquals("Roronoa")); //should return false

       //Returns the position of the first found occurrence of specified characters in a string	
        print(dummy.indexOf('r'));

        //Checks whether a string is empty or not	
        print(dummy.isEmpty());//should return false
        print("".isEmpty());

        //Returns the position of the last found occurrence of specified characters in a string	
        print(dummy.lastIndexOf('o'));

        //Searches a string for a specified value, and returns a new string where the specified values are replaced
        print(dummy.replace('r','z'));

        //It does the same operation as above but accepts regex
        print(dummy.replaceAll("r", "x"));

        //Replaces the first occurrence of a substring that matches the given regular expression with the given replacement	
        print(dummy.replaceFirst("x", " "));

        //Splits a string into an array of substrings	
        print(dummy.split(" "));

        //Checks whether a string starts with specified characters	
        //return boolean
        print(dummy.startsWith("hello"));
        
        //Converts a string to lower case letters	
        print(dummy.toLowerCase());

        //Converts a string to upper case letters
        print(dummy.toUpperCase());

        //Removes whitespace from both ends of a string		
        print(dummy+"       ".trim());

        //Converts this string to a new character array	
        char[] ch=dummy.toCharArray(); 
        print(dummy.length());
        print(ch.length);

        //Returns a new string which is the substring of a specified string	
        //takes start and end of index
        print(dummy.substring(0,5));
        //takes only start and considers the rest for substring
        print(dummy.substring(1));

        // prints the subsequence from start-end, exclusive start index
        print(dummy.subSequence(0, 7));



    }
    public static void print(Object s){
        System.out.println(s.toString());
    }
}
