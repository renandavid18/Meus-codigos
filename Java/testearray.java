    import java.util.Scanner;

    public class testearray{
        
        public static void main(String[] args){
            Scanner sc = new Scanner(System.in);

            String[] nome = new String[3];

            nome[1] = "Renan";
            nome[0] = "Caio";
            nome[2] = "Joao";

            for(int i=0;i<=2;i++){
                System.out.println(nome[i]);
            }
            
        }
    }