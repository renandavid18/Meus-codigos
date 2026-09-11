package sistemabiblioteca;

public class Livro {
	
	//Atributos de Livro
	String titulo;
	String autor;
	int paginas;
	
	// Construtor de Livro
	Livro (String titulo,String autor,int paginas){
		
		this.titulo=titulo;
		this.autor=autor;
		this.paginas=paginas;
	}
	
	//Metodo de Livro
	void apresentar(){
		System.out.println("titulo: "+titulo);
		System.out.println("Autor: "+autor);
		System.out.println("Paginas "+paginas);
	}
}
