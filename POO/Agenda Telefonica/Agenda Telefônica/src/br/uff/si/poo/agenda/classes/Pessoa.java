package br.uff.si.poo.agenda.classes;

public class Pessoa {
    Endereco endereco;
    private String nome;

    public String getNome() {
        return this.nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public Endereco getEndereco() {
        return this.endereco;
    }

    public void setEndereco(Endereco end) {
        this.endereco = end;
    }

    public String printPessoa() {
        String retorno = this.nome;

        String endereco = "";
        if (this.endereco != null) {
            endereco += this.endereco.printEndereco();
            if (!endereco.isEmpty())
                retorno += this.endereco.printEndereco();
        }
        return retorno;
    }
}
