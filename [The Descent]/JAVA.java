import java.util.*;
import java.io.*;
import java.math.*;

class Player {

    public static void main(String args[]) {
        Scanner in = new Scanner(System.in);

        // game loop
        while (true) {
            int h_h = 0;
            int h_m = 0;
            for (int i = 0; i < 8; i++) {
                int m_h = in.nextInt(); 
                if ( h_h < m_h){
                    h_h = m_h;
                    h_m = i;
                }
            }


            System.out.println(h_m); 
        }
    }
}
