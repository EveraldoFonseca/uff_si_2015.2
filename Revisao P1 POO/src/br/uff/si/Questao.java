package br.uff.si;

public class Questao {

    private int numero;
    private String enunciado;

    public Questao() {
    }

    public Questao(int numero, String enunciado) {
        this.numero = numero;
        this.enunciado = enunciado;
    }

    public int getNumero() {
        return numero;
    }

    public void setNumero(int numero) {
        this.numero = numero;
    }

    public String getEnunciado() {
        return enunciado;
    }

    public void setEnunciado(String enunciado) {
        this.enunciado = enunciado;
    }
}
