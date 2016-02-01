package revisao.p1.poo;

import br.uff.si.Prova;
import java.util.Scanner;

public class Revisao_P1_Poo {

    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);
        char resposta = 'S';
        do {
            System.out.println("Escolha uma questão:");
            System.out.println("(1) [P2_2011_1] Questão 01 - Barras de Ferro;");
            System.out.println("(2) [P2_2011_1] Questão 02 - Determinante;");
            System.out.println("(3) [P2_2011_1] Questão 03 - Desconto Supermercado;");

            resposta = entrada.next().charAt(0);
            Prova p2_2011_1 = new Prova();
            p2_2011_1.LerProva("C:\\Users\\12560\\Documents\\GitHub\\uff_si_2015.2\\Revisao P1 POO\\P2_2011_1.txt");
            switch (resposta) {
                case '1': {
                    System.out.println(p2_2011_1.getQuestoes().get(0).getEnunciado());
                    //System.out.print("Resultado:");
                    break;
                }
                case '2': {
                    System.out.println(p2_2011_1.getQuestoes().get(1).getEnunciado());
                    //System.out.print("Resultado:");
                    break;
                }
                case '3': {
                    System.out.println(p2_2011_1.getQuestoes().get(2).getEnunciado());
                    //System.out.print("Resultado:");
                    break;
                }
                default: {
                }
            }
            System.out.println("Deseja resolver outra questão? [S/N]");
            resposta = entrada.next().charAt(0);
        } while (resposta != 'N' && resposta != 'n');
    }
}