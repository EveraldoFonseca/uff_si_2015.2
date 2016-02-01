package revisao.p1.poo;
import java.util.Scanner;


public class Revisao_P1_Poo {

    public static void main (String[] args){
        Scanner entrada = new Scanner(System.in);
        char resposta = 'S';
        do{
            System.out.println("Escolha uma questão:");
            System.out.println("(1) [P2_2011_1] Questão 01 - Barras de Ferro;");
            System.out.println("(2) [P2_2011_1] Questão 02 - Determinante;");
            System.out.println("(3) [P2_2011_1] Questão 03 - Desconto Supermercado;");
            
            resposta = entrada.next().charAt(0);
            
            switch(resposta){
                case '1':{
                
                break;
                }
                case '2':{
                
                break;
                }
                case '3':{
                    
                break;
                }
                default:{
                    
                }
            }
            
            resposta = entrada.next().charAt(0);
        }while(resposta != 'N' || resposta != 'n');
    }

}