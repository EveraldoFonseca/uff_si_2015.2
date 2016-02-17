package br.uff.si.poo.agenda.classes;

import java.util.*;

public class Agenda {
    //Atributos:
    Pessoa proprietario;
    private List<Contato> contatos = new ArrayList<Contato>();
    //Getters & Setters dos Atributos:
    public void setProprietario(Pessoa proprietario) {
        this.proprietario = proprietario;
    }

    public Pessoa getProprietario() {
        return proprietario;
    }

    public List<Contato> getContatos() {
        return contatos;
    }

    //Métodos

    public Contato buscarContato(String nome) {
        try {
            for (int i = 0; i < this.contatos.size(); i++) {
                if (this.contatos.get(i).getNome().toUpperCase().matches(nome.toUpperCase()))
                    return this.contatos.get(i);
            }
        } catch (Exception ex) {
            System.out.println("Ops! Ocorreu o seguinte erro:\n" + ex.getMessage());
            return null;
        }
        return null;
    }

    public void addContato() {
        try {
            System.out.println("--------------------INSERINDO CONTATO-----------------------");
            Scanner teclado = new Scanner(System.in);
            Contato contato = new Contato();
            //Lendo os dados do contato
            System.out.print("Nome: ");
            String nome = teclado.nextLine();
            contato.setNome(nome);

            System.out.print("Deseja inserir um endereço? (S)Sim /(N)Não)");
            String resposta = teclado.nextLine();
            if (resposta.toUpperCase().startsWith("S")) {
                Endereco endereco = new Endereco();
                System.out.print("Logradouro: ");
                endereco.setLogradouro(teclado.nextLine());
                System.out.print("Número: ");
                endereco.setNumero(teclado.nextLine());
                System.out.print("Complemento: ");
                endereco.setComplemento(teclado.nextLine());
                System.out.print("Bairro: ");
                endereco.setBairro(teclado.nextLine());
                System.out.print("Cidade: ");
                endereco.setCidade(teclado.nextLine());
                System.out.print("UF: ");
                endereco.setUf(teclado.nextLine());
                System.out.print("CEP: ");
                endereco.setCep(teclado.nextLine());
                contato.setEndereco(endereco);
            }


            Telefone tel = new Telefone();
            System.out.print("Telefone (Operadora): ");
            tel.setOperadora(teclado.nextLine());
            System.out.print("Telefone (Tipo 'Celular', 'Residencial', 'Comercial'): ");
            tel.setTipo(teclado.nextLine());
            System.out.print("Telefone (DDD): ");
            tel.setDdd(teclado.nextLine());
            System.out.print("Telefone (Número): ");
            tel.setNumero(teclado.nextLine());

            contato.setTelefone(tel);
            System.out.print("Email: ");
            contato.addEmail(teclado.nextLine());
            System.out.print("Observações: ");
            contato.setObservacao(teclado.nextLine());

            this.contatos.add(contato);
            System.out.println("------------------------------------------------------------");

        } catch (Exception ex) {
            System.out.print("Ops! Ocorreu o seguinte erro:\n" + ex.getMessage() + "\n");
        }
    }

    public void delContato(String nome) {
        try {
            Contato contatoProcurado = buscarContato(nome);
            if (contatoProcurado != null) {
                System.out.println("Excluindo contato \"" + nome.toUpperCase() + "\"...");
                this.contatos.remove(contatoProcurado);
                System.out.println("Contato excluído com sucesso!");
            } else {
                System.out.println("Contato não encontrado!");
            }
        } catch (Exception ex) {
            System.out.println("Ops! Ocorreu o seguinte erro:\n" + ex.getMessage());
        }
    }

    public void editContato(String nome) {
        try {
            Contato contatoProcurado = buscarContato(nome);
            if (contatoProcurado != null) {
                editContato(contatoProcurado);
            } else {
                System.out.println("Contato não encontrado!");
            }
        } catch (Exception ex) {
            System.out.println("Ops! Ocorreu o seguinte erro:\n" + ex.getMessage());
        }
    }
    //Método sobrescrevendo o anterior
    private void editContato(Contato contato) {
        try {
            System.out.println("--------------------EDITANDO CONTATO------------------------");
            Scanner teclado = new Scanner(System.in);
            String resposta = "";
            System.out.print("Deseja alterar o nome? (S)Sim /(N)Não)");
            resposta = teclado.nextLine();
            if (resposta.toUpperCase().startsWith("S")) {
                System.out.print("Digite o novo nome: ");
                resposta = teclado.nextLine();
                contato.setNome(resposta);
            }
            System.out.print("Deseja alterar o logradouro? (S)Sim /(N)Não)");
            resposta = teclado.nextLine();
            if (resposta.toUpperCase().startsWith("S")) {
                System.out.print("Digite o novo logradouro: ");
                resposta = teclado.nextLine();
                contato.getEndereco().setLogradouro(resposta);
            }
            System.out.print("Deseja alterar o número? (S)Sim /(N)Não)");
            resposta = teclado.nextLine();
            if (resposta.toUpperCase().startsWith("S")) {
                System.out.print("Digite o novo número: ");
                resposta = teclado.nextLine();
                contato.getEndereco().setNumero(resposta);
            }
            System.out.print("Deseja alterar o complemento? (S)Sim /(N)Não)");
            resposta = teclado.nextLine();
            if (resposta.toUpperCase().startsWith("S")) {
                System.out.print("Digite o novo complemento: ");
                resposta = teclado.nextLine();
                contato.getEndereco().setComplemento(resposta);
            }

            System.out.print("Deseja alterar o bairro? (S)Sim /(N)Não)");
            resposta = teclado.nextLine();
            if (resposta.toUpperCase().startsWith("S")) {
                System.out.print("Digite o novo bairro: ");
                resposta = teclado.nextLine();
                contato.getEndereco().setBairro(resposta);
            }
            System.out.print("Deseja alterar a cidade? (S)Sim /(N)Não)");
            resposta = teclado.nextLine();
            if (resposta.toUpperCase().startsWith("S")) {
                System.out.print("Digite a nova cidade: ");
                resposta = teclado.nextLine();
                contato.getEndereco().setCidade(resposta);
            }
            System.out.print("Deseja alterar a UF? (S)Sim /(N)Não)");
            resposta = teclado.nextLine();
            if (resposta.toUpperCase().startsWith("S")) {
                System.out.print("Digite a nova UF: ");
                resposta = teclado.nextLine();
                contato.getEndereco().setUf(resposta);
            }
            System.out.print("Deseja alterar o CEP? (S)Sim /(N)Não)");
            resposta = teclado.nextLine();
            if (resposta.toUpperCase().startsWith("S")) {
                System.out.print("Digite o novo CEP: ");
                resposta = teclado.nextLine();
                contato.getEndereco().setCep(resposta);
            }
            System.out.print("Deseja alterar o Telefone? (S)Sim /(N)Não)");
            resposta = teclado.nextLine();
            if (resposta.toUpperCase().startsWith("S")) {
                System.out.print("Digite a operadora: ");
                resposta = teclado.nextLine();
                contato.getTelefone().setOperadora(resposta);

                System.out.print("Digite o DDD: ");
                resposta = teclado.nextLine();
                contato.getTelefone().setDdd(resposta);

                System.out.print("Digite o Número: ");
                resposta = teclado.nextLine();
                contato.getTelefone().setNumero(resposta);

                System.out.print("Digite o Tipo: ");
                resposta = teclado.nextLine();
                contato.getTelefone().setTipo(resposta);
            }
            System.out.print("Deseja alterar o Email? (S)Sim /(N)Não)");
            resposta = teclado.nextLine();
            if (resposta.toUpperCase().startsWith("S")) {
                System.out.print("Digite o novo email: ");
                resposta = teclado.nextLine();
                contato.setEmail(resposta);
            }
             System.out.println( "\n------------------------------------------------------------");
        } catch (Exception ex) {
            System.out.println("Ops! Ocorreu o seguinte erro:\n" + ex.getMessage());
        }
    }

    public void printContatos() {
        try {
            System.out.println( "--------------------IMPRIMINDO CONTATOS---------------------");
            for (int i = 0; i < this.contatos.size(); i++) {
                System.out.print(this.contatos.get(i).printContato());
            }
            System.out.println( "------------------------------------------------------------");
        } catch (Exception ex) {
            System.out.println("Ops! Ocorreu o seguinte erro:\n" + ex.getMessage());
        }
    }
}
