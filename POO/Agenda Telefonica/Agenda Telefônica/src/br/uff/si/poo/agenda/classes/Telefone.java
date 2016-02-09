package br.uff.si.poo.agenda.classes;

public class Telefone {
    String ddd;
    String tipo;
    String operadora;
    private String numero;

    public void setDdd(String ddd) {
        this.ddd = ddd;
    }

    public String getDdd() {
        return ddd;
    }

    public void setTipo(String tipo) {
        this.tipo = tipo;
    }

    public String getTipo() {
        return tipo;
    }

    public void setOperadora(String operadora) {
        this.operadora = operadora;
    }

    public String getOperadora() {
        return operadora;
    }

    public void setNumero(String numero) {
        this.numero = numero;
    }

    public String getNumero() {
        return numero;
    }

    public String printTelefone() {
        try {
            String retorno = "";
            if (!this.getTipo().isEmpty()) retorno += this.getTipo() + " -> ";
            if (!this.getOperadora().isEmpty()) retorno += "[" + this.getOperadora() + "] -> ";
            if (!this.getDdd().isEmpty()) retorno += "(" + this.getDdd() + ") ";
            if (!this.getNumero().isEmpty()) retorno += this.getNumero(); 
            return retorno;
        } catch (Exception ex) {
            System.out.println("Ops! Ocorreu o seguinte erro:\n" + ex.getMessage());
            return null;
        }
    }
}
