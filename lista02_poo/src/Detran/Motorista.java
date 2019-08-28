package Detran;

public class Motorista {
	private String nome, CPF;
	private Carteira carteira;
	
	public Motorista(String nome, String CPF, Carteira carteira) {
		this.nome = nome;
		this.CPF = CPF;
		this.carteira = carteira;
	}
	public Motorista(String nome, String CPF) {
		this.nome = nome;
		this.CPF = CPF;
		this.carteira = null;
	}
}
/*
 * 1. Considere que o Detran precisa de um sistema para controlar a carteira de motorista
de
um determinado condutor. Em nosso problema hipot�tico, cada poss�vel condutor
dever�
ter informa��es relacionadas ao seu nome, identifica��o (RG ou CPF, por exemplo) e a
carteira de motorista a qual lhe pertence. Toda carteira de motorista tem um n�mero,
status (se est� ativa ou cancelada) e categoria (podendo ser A, B ou C). Uma carteira
pode tamb�m acumular pontos.
Dado um determinado condutor, precisamos oferecer para o usu�rio do sistema a
possibilidade de:
a. modificar a categoria da carteira;
b. inclus�o de pontos em sua carteira;
c. consulta dos pontos atuais da carteira; e
d. verificar se a carteira
Ser� poss�vel instanciar um condutor que j� tenha uma carteira, carteira e condutor ao
mesmo tempo, condutor sem carteira.
*/
