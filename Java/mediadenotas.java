    import java.util.Scanner;

    public class mediadenotas{

        static class Aluno{
            int idade;
            String nome, anoatual; // EX: anoatual = "6 ano"
            double media;
            double nota = new double[4];
        }
        
        public static void main(String[] args){
            Scanner sc = new Scaner(System.in);
            int i,k=0;

            Aluno[] listadealunos = new Aluno[100];

            for(i=0; i < listadealunos.length; i++){
                listadealunos[i] = new Aluno();
                
                System.out.println("=============== Aluno"+(i+1)+" ===============\n\n");
                
                System.out.println("Nome: ");
                listadealunos[i].nome = sc.nextline();

                System.out.println("Idade: ");
                listadealunos[i].nome = sc.nextInt();

                System.out.println("Ano atual: ");
                System.out.println("EX: 6 ano");
                listadealunos[i].nome = sc..nextline();
            
                for(j=0; j<=3; j++){
                    System.out.println("=========== Notas ===========");

                    System.out.println("\n"+(j+1)+"- Nota: ");
                    listadealuno[i].nota[j] = sc.nextDouble;
                    
                    media += nota[j];
                }

                while(k==0){
                    System.out.println("Deseja adicionar um novo aluno?");
                    System.out.println("1- Sim | 0- Nao");
                    

                    if(novoaluno != 0 || novoaluno != 1){
                        System.out.println("Opção invalida! \nDigite 1 ou 0");
                    }
                }
                if(novoaluno == 0){
                    break;
                }
            }
            System.out.println("Opção invalida! \nDigite 1 ou 0");
            
        }
    }