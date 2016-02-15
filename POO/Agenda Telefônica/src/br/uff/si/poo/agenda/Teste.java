package br.uff.si.poo.agenda;

import br.uff.si.poo.agenda.classes.*;

import java.util.*;

public class Teste {
    public static void main(String[] args) {
        //Cria o dono da agenda
        Pessoa proprietario = new Pessoa();
        proprietario.setNome("Fulano de Tal");
        //Cria a agenda e seta o proprietário
        Agenda agenda = new Agenda();
        agenda.setProprietario(proprietario);
        //Apresenta o menu e executa a opção escolhida pelo usuário
        Scanner teclado = new Scanner(System.in);
        char resposta = ' ';
        while (resposta != '6') {
            resposta = lerMenu(agenda);
            if (resposta == '1') //Imprimir os contatos
                agenda.printContatos();
            else if (resposta == '2') //Inserir um novo contato
                agenda.addContato();
            else if (resposta == '3') { //Editar um contato existente
                System.out.print("Qual o nome do contato que deseja editar? ");
                String nome = teclado.nextLine().toUpperCase();
                agenda.editContato(nome);
            } else if (resposta == '4') { //Excluir um contato
                System.out.print("Qual o nome do contato que deseja excluir? ");
                String nome = teclado.nextLine().toUpperCase();
                agenda.delContato(nome);
            } else if (resposta == '5') { //Buscar por um contato na agenda
                System.out.print("Qual o nome do contato que deseja procurar? ");
                String nome = teclado.nextLine().toUpperCase();
                System.out.print("Procurando por \"" + nome + "\" nos seus contatos...\n");
                Contato contatoProcurado = agenda.buscarContato(nome);
                if (contatoProcurado != null) {
                    System.out.println("Contato encontrado! Imprimindo detalhes...\n");
                    System.out.println(contatoProcurado.printContato());
                } else {
                    System.out.println("Contato não encontrado!");
                }
            } else
                resposta = '6'; //Sair da agenda
        }
    }

    private static char lerMenu(Agenda agenda) {
        Scanner teclado = new Scanner(System.in);
        System.out.println("-------------------------- AGENDA --------------------------");
        System.out.println("Propretário: " + agenda.getProprietario().getNome());
        System.out.println("Quantidade de Contatos: " + Integer.toString(agenda.getContatos().size()));
        System.out.println("------------------------- CONTATOS -------------------------");
        System.out.println("Escolha a operação desejada:");
        System.out.println("(1) Imprimir contatos;");
        System.out.println("(2) Inserir contato;");
        System.out.println("(3) Editar contato;");
        System.out.println("(4) Excluir contato;");
        System.out.println("(5) Procurar contato;");
        System.out.println("(6) Sair");
        return teclado.nextLine().charAt(0);
    }
}