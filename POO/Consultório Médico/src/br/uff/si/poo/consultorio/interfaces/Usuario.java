package br.uff.si.poo.consultorio.interfaces;

public interface Usuario {
    public String getLogin();
    public void setLogin(String login);
    public String getSenha();
    public void setSenha(String senha);
    public boolean logar();
}
