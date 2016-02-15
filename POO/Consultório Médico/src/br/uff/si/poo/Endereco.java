package br.uff.si.poo;

public class Endereco {
    private String cep;
    private String numero;
    private String logradouro;
    private String complemento;
    private String bairro;
    private String cidade;
    private String uf;

    public void setBairro(String bairro) {
        this.bairro = bairro;
    }

    public String getBairro() {
        return bairro;
    }

    public void setCidade(String cidade) {
        this.cidade = cidade;
    }

    public String getCidade() {
        return cidade;
    }

    public void setUf(String uf) {
        this.uf = uf;
    }

    public String getUf() {
        return uf;
    }

    public void setComplemento(String complemento) {
        this.complemento = complemento;
    }

    public String getComplemento() {
        return complemento;
    }

    public void setCep(String cep) {
        this.cep = cep;
    }

    public String getCep() {
        return cep;
    }

    public void setNumero(String numero) {
        this.numero = numero;
    }

    public String getNumero() {
        return numero;
    }

    public void setLogradouro(String logradouro) {
        this.logradouro = logradouro;
    }

    public String getLogradouro() {
        return logradouro;
    }

    public String printEndereco() {
        String retorno = "";
        if (!this.logradouro.isEmpty())
            retorno += "\n" + this.logradouro + ", " + this.numero + " " + this.complemento + "\n" + this.bairro;
        if (!this.cidade.isEmpty())
            retorno += "\n" + this.cidade;
        if (!this.uf.isEmpty())
            retorno += "\n" + this.uf;
        if (!this.cep.isEmpty())
            retorno += "\n" + "CEP: " + this.cep ;
        
        return retorno;
    }
}
