    import java.util.Scanner;

    public class OperadorTernario{

        public static void main(String[] args){
            Scanner sc = new Scanner(System.in);
            double imposto = 0;
            
            System.out.println("Me informa seu salario anual em Euros por favor: ");
            double salarioanual = sc.nextDouble();

            if(salarioanual <= 34.712) imposto = (salarioanual * 9.7)/100;
            else if(salarioanual > 34.713 && salarioanual < 68.507) imposto = (salarioanual * 37.35)/100;
            else if(salarioanual > 68.508) imposto = (salarioanual * 49.5)/100;

            System.out.println("Se voce morar na Holanda recebendo anualmente "+salarioanual+" Euros \nvoce ira pagar um total de "+imposto+" Euros");
            
        }
    }