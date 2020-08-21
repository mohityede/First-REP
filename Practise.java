// My First Java program....
// Identical Array

public class Identical_array {

    public static void main(String[] args) {
        int a[][]= new int [3][3];
        // 3x3 array named "a".
        
        // loop for assign value in array.
        for(int i=0;i<3;i++) {
            for(int j=0;j<3;j++) {
                if(i==j) {
                    a[i][j]=1;
                }
                else {
                    a[i][j]=0;
                }
            }
        }
        
        // loop for print array.
        for(int i=0;i<3;i++) {
            for(int j=0;j<3;j++) {
                System.out.print(a[i][j]+" ");
            }
        System.out.println(" ");
        }
    }

}
/*
Sololearn compiler link...
(https://code.sololearn.com/cP2qSvNMc3me)
*/
