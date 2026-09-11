	package Test_Carro;

	import Carro.carro;
	import java.util.Scanner;
	
	public class test01{
		public static void main(String[] args) {
			int j=0, i, d=0, continuar, ver;
			Scanner sc = new Scanner(System.in);
			
			carro[] listadecarro = new carro[10];
			
			System.out.println("============ Sistema da Mecanica ============");
			
			for(i=0;i<=9;i++) {
				System.out.println("Informe sobre o "+(i+1)+"- Carro");
				listadecarro[i] = new carro();
				
				System.out.println("Nome do Dono: ");
				listadecarro[i].dono = sc.nextLine();
				
				System.out.println("Modelo: ");
				listadecarro[i].modelo = sc.nextLine();
				
				System.out.println("Placa: ");
				listadecarro[i].placa = sc.nextLine();
				
				System.out.println("Cor: ");
				listadecarro[i].cor = sc.nextLine();
				
				System.out.println("Data de fabricação:");
				
				System.out.println("Mês: ");
				listadecarro[i].mes = sc.nextInt();
				
				System.out.println("Dia: ");
				listadecarro[i].dia = sc.nextInt();
				
				System.out.println("Ano: ");
				listadecarro[i].ano = sc.nextInt();
				
				while(j==0){
					System.out.println("Deseja adicionar um novo carro?");
					System.out.println("(0) Nao | (1) Sim");
					continuar = sc.nextInt();
					
					if(continuar != 1 || continuar != 0) System.out.println("Opcao invalida \nDigite 0 ou 1");
					else j=1;
				}
				if(continuar==0) break;
				d++;
			}
			
			System.out.println("Deseja ver os carros adicionados? ");
			System.out.println("(0) Nao | (1) Sim");
			ver = sc.nextInt();
			
			if(ver==1){
				for(i=0;i<=d;i++){
					System.out.println((i+1)+"- Carro");
					
					System.out.println("Modelo: "+listadecarro[i].modelo); 
					
					System.out.println("Dono: "+listadecarro[i].dono);
					
					System.out.println("Placa: "+listadecarro[i].placa);
					
					System.out.println("Cor: "+listadecarro[i].cor);
					
					System.out.println("Data de fabricação: "+listadecarro[i].dia+"/"+listadecarro[i].mes+"/"+listadecarro[i].ano);
					System.out.println("\n");
				}
			}
		}
	}
