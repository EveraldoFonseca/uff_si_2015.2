package br.uff.si.poo.agenda.classes;

import java.util.*;

public class Contato extends Pessoa {
    String observacao;
    private Telefone telefone = new Telefone();
    private String email = "";

      public void setTelefone(Telefone telefone) {
        this.telefone = telefone;
    }

    public void setEmail(String email) {
        this.email = email;
    }

    public String getEmail() {
        return email;
    }

    public Telefone getTelefone() {
        return this.telefone;
    }

    public void delTelefone(Telefone tel) {
        this.telefone = null;
    }

    public void addEmail(String email) {
        this.email  = email;
    }

    public void delEmail(String email) {
        this.email = null;
    }

    public String getObservacao() {
        return this.observacao;
    }

    public void setObservacao(String obs) {
        this.observacao = obs;
    }

    public String printContato() {
        String retorno = "";
        retorno += super.printPessoa();
        if (this.telefone != null) 
                retorno += "\n" + this.telefone.printTelefone();
            
        if (!this.email.isEmpty()) 
                retorno += "\n" + this.email;
        
        if (!this.observacao.isEmpty()) 
            retorno += "\n" + this.observacao;
        retorno += "\n*************************\n";
        return retorno;
    }
}
