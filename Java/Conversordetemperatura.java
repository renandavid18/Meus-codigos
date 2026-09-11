    import java.util.Scanner;

    public class Conversordetemperatura{

        public static void main(String[] args){
            Scanner sc = new Scanner(System.in);
            int i=0, opcaotemperatura=0, opcaoconversao=0, d=0, k=0, reset;
            double temperatura=0, temperaturaconvertida=0;

            System.out.println("================ Conversor de Temperatura ================");
            
            while(i==0){
                System.out.println("\nMe informa a temperatura: ");
                temperatura = sc.nextInt();
                
                System.out.println("\nEssa temperatura esta em: ");
                do{
                    System.out.println("1- Celsius (\u00B0C)");
                    System.out.println("2- Fahrenheit (\u00B0F)");
                    System.out.println("3- Kelvin (K)");
                    opcaotemperatura = sc.nextInt();

                    if(opcaotemperatura < 1 || opcaotemperatura > 3){
                        System.out.println("Opca1o invalida! Escolha 1, 2 ou 3.");
                    }
                }while(opcaotemperatura < 1 || opcaotemperatura > 3);

                switch (opcaotemperatura){
                    
                    case 1:
                        System.out.println("============== CELSIUS ==============\n");
                        System.out.println("\nInforme em qual unidade a temperatura será convertida: ");
                            do{
                                System.out.println("1- Fahrenheit (\u00B0F)");
                                System.out.println("2- Kelvin (K)");
                                opcaoconversao = sc.nextInt();

                                if(opcaoconversao < 1 || opcaoconversao > 2){
                                    System.out.println("Opca1o invalida! Escolha 1 ou 2");
                                }
                            }while(opcaoconversao < 1 || opcaoconversao > 2);

                            switch (opcaoconversao){
                                case 1:
                                    temperaturaconvertida = (temperatura * 1.8) + 32;

                                    System.out.println("A temperatura convertida em Fahrenheit é "+temperaturaconvertida+" \u00B0F");

                                break;
                            
                                case 2:
                                    temperaturaconvertida = temperatura + 273.15;

                                    System.out.println("A temperatura convertida em Kelvin é "+temperaturaconvertida+" K");

                                break;
                            }
                    break;

                    case 2:
                        System.out.println("============== FAHRENHEIT ==============\n");
                        System.out.println("\nInforme em qual unidade a temperatura será convertida: ");
                            do{
                                System.out.println("1- Celsius (\u00B0C)");
                                System.out.println("2- Kelvin (K)");
                                opcaoconversao = sc.nextInt();

                                if(opcaoconversao < 1 || opcaoconversao > 2){
                                    System.out.println("Opca1o invalida! Escolha 1 ou 2");
                                }
                            }while(opcaoconversao < 1 || opcaoconversao > 2);

                            switch (opcaoconversao){
                                case 1:
                                    temperaturaconvertida = (temperatura - 32) / 1.8;

                                    System.out.println("A temperatura convertida em Celsius é "+temperaturaconvertida+" \u00B0C");

                                break;
                            
                                case 2:
                                    temperaturaconvertida = (((temperatura - 32) * 5) / 9) + 273.15;

                                    System.out.println("A temperatura convertida em Kelvin é "+temperaturaconvertida+" K");

                                break;
                            }
                    break;


                    case 3:
                        System.out.println("============== Kelvin ==============\n");
                        System.out.println("\nInforme em qual unidade a temperatura será convertida: ");
                            do{
                                System.out.println("1- Celsius (\u00B0C)");
                                System.out.println("2- Fahrenheit (\u00B0F)");
                                opcaoconversao = sc.nextInt();

                                if(opcaoconversao < 1 || opcaoconversao > 2){
                                    System.out.println("Opca1o invalida! Escolha 1 ou 2");
                                }
                            }while(opcaoconversao < 1 || opcaoconversao > 2);

                            switch (opcaoconversao){
                                case 1:
                                    temperaturaconvertida = temperatura - 273.15;

                                    System.out.println("A temperatura convertida em Celcius é "+temperaturaconvertida+" \u00B0F");

                                break;
                            
                                case 2:
                                    temperaturaconvertida = ((temperatura - 273.15) * 1.8) + 32;

                                    System.out.println("A temperatura convertida em Fahrenheit é "+temperaturaconvertida+" \u00B0F");

                                break;
                            }
                    break;

                }
                while(k==0){
                    System.out.println("Deseja fazer outra conversão?");
                    System.out.println("(0) Nao  |  (1) Sim");
                    reset = sc.nextInt();

                    if(reset==0){
                        k++;
                        i++;
                    }else if(reset==1) k++;
                    else System.out.println("Opção inválida! Digite 0 ou 1");
                }
            }
        }