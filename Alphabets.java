import java.util.*;
public class Alphabets {
    public static void main(String args[]) {
    char[] s = {'p','y','b','r','x','w','u','v','n','c','e','h','k','o','l','f','a','g','j','q','s','z','i','d','m','t'};   
    String[] v = {"boy","your","toy","kkr","krk","rrk"};
    for(char ch : s){
        for(String tmp : v){
            if(tmp[0] == ch)  
                System.out.print(tmp);                
        }           
    }    
    System.out.println();
   }
}